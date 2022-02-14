
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct tuner_types {char* fw_name; int tuner_type; int tuner_name; } ;
struct dst_types {size_t offset; char* device_id; int dst_type; int tuner_type; int dst_feature; int type_flags; } ;
struct dst_state {int tuner_type; int* rxbuffer; int dst_type; int type_flags; int fw_name; int dst_hw_cap; } ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,char*,...) ;
 scalar_t__ FUNC_2 (struct dst_state*) ;
 int FUNC_3 (struct dst_state*) ;
 int FUNC_4 (int*,int) ;
 scalar_t__ FUNC_5 (struct dst_state*) ;
 void* VAR_7 ;
 int FUNC_6 (struct dst_state*) ;
 int FUNC_7 (struct dst_state*,int) ;
 int FUNC_8 (struct dst_state*,int ) ;
 int FUNC_9 (char*,...) ;
 scalar_t__ FUNC_10 (struct dst_state*,int*,int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,char*,int) ;
 int FUNC_13 (int ,char*,int) ;
 void* VAR_8 ;
 scalar_t__ FUNC_14 (struct dst_state*,int*,int ) ;

__attribute__((used)) static int FUNC_15(struct dst_state *VAR_9)
{
 u8 VAR_10;

 int VAR_11, VAR_12;
 struct dst_types *VAR_13 = ((void*)0);
 struct tuner_types *VAR_14 = ((void*)0);

 u8 VAR_15 = 0;
 u32 VAR_16 = 0;

 static u8 VAR_17[8] = {0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff};

 VAR_9->tuner_type = 0;
 VAR_17[7] = FUNC_4(VAR_17, 7);

 if (FUNC_14(VAR_9, VAR_17, VAR_3))
  return -1;
 if ((FUNC_5(VAR_9)) < 0)
  return -1;
 if (FUNC_10(VAR_9, &VAR_10, VAR_4))
  return -1;
 if (VAR_10 != VAR_0) {
  FUNC_1(2, "Write not Acknowledged! [Reply=0x%02x]\n", VAR_10);
  return -1;
 }
 if (!FUNC_8(VAR_9, VAR_1))
  return -1;
 if (FUNC_10(VAR_9, VAR_9->rxbuffer, VAR_3))
  return -1;

 FUNC_5(VAR_9);
 if (VAR_9->rxbuffer[7] != FUNC_4(VAR_9->rxbuffer, 7)) {
  FUNC_1(2, "Checksum failure!\n");
  return -1;
 }
 VAR_9->rxbuffer[7] = '\0';

 for (VAR_11 = 0, VAR_13 = VAR_7; VAR_11 < FUNC_0(VAR_7); VAR_11++, VAR_13++) {
  if (!FUNC_12 (&VAR_9->rxbuffer[VAR_13->offset], VAR_13->device_id, FUNC_11 (VAR_13->device_id))) {
   VAR_16 = VAR_13->type_flags;
   VAR_15 = VAR_13->dst_type;


   VAR_9->dst_hw_cap = VAR_13->dst_feature;
   FUNC_9("Recognise [%s]\n", VAR_13->device_id);
   FUNC_13(VAR_9->fw_name, VAR_13->device_id,
           sizeof(VAR_9->fw_name));

   if (VAR_13->tuner_type & VAR_6) {
    switch (VAR_15) {
    case 128:

     if (FUNC_3(VAR_9) < 0) {
      FUNC_9("Unsupported\n");
      VAR_9->tuner_type = VAR_5;
     }
     break;
    default:
     break;
    }
    if (FUNC_2(VAR_9) < 0)
     FUNC_9("Unsupported\n");

   } else {
    VAR_9->tuner_type = VAR_13->tuner_type;
   }
   for (VAR_12 = 0, VAR_14 = VAR_8; VAR_12 < FUNC_0(VAR_8); VAR_12++, VAR_14++) {
    if (!(FUNC_12(VAR_13->device_id, VAR_14->fw_name, 7)) &&
     VAR_14->tuner_type == VAR_9->tuner_type) {
     FUNC_9("[%s] has a [%s]\n",
      VAR_13->device_id, VAR_14->tuner_name);
    }
   }
   break;
  }
 }

 if (VAR_11 >= FUNC_0(VAR_7)) {
  FUNC_9("Unable to recognize %s or %s\n", &VAR_9->rxbuffer[0], &VAR_9->rxbuffer[1]);
  FUNC_9("please email linux-dvb@linuxtv.org with this type in");
  VAR_15 = 128;
  VAR_16 = VAR_2;
 }
 FUNC_7(VAR_9, VAR_15);
 VAR_9->type_flags = VAR_16;
 VAR_9->dst_type = VAR_15;
 FUNC_6(VAR_9);

 return 0;
}
