
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; int bankwidth; char* name; } ;
struct pcmciamtd_dev {char* mtd_name; TYPE_1__ pcmcia_map; } ;
struct pcmcia_device {char** prod_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct pcmcia_device*,int ,int ,struct pcmciamtd_dev*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static void FUNC_4(struct pcmciamtd_dev *VAR_11, struct pcmcia_device *VAR_12, int *VAR_13)
{
 int VAR_14;

 if (VAR_12->prod_id[0]) {
  VAR_11->mtd_name[0] = '\0';
  for (VAR_14 = 0; VAR_14 < 4; VAR_14++) {
   if (VAR_14)
    FUNC_2(VAR_11->mtd_name, " ");
   if (VAR_12->prod_id[VAR_14])
    FUNC_2(VAR_11->mtd_name, VAR_12->prod_id[VAR_14]);
  }
  FUNC_1("Found name: %s\n", VAR_11->mtd_name);
 }

 FUNC_0(VAR_12, VAR_2, VAR_8, ((void*)0));
 FUNC_0(VAR_12, VAR_3, VAR_10, ((void*)0));
 FUNC_0(VAR_12, VAR_0, VAR_7, VAR_11);
 FUNC_0(VAR_12, VAR_1, VAR_9, VAR_11);

 if(!VAR_11->pcmcia_map.size)
  VAR_11->pcmcia_map.size = VAR_4;

 if(!VAR_11->pcmcia_map.bankwidth)
  VAR_11->pcmcia_map.bankwidth = 2;

 if(VAR_6) {
  VAR_11->pcmcia_map.size = VAR_6 << 20;
  FUNC_1("size forced to %dM\n", VAR_6);
 }

 if(VAR_5) {
  VAR_11->pcmcia_map.bankwidth = VAR_5;
  FUNC_1("bankwidth forced to %d\n", VAR_5);
 }

 VAR_11->pcmcia_map.name = VAR_11->mtd_name;
 if(!VAR_11->mtd_name[0]) {
  FUNC_3(VAR_11->mtd_name, "PCMCIA Memory card");
  *VAR_13 = 1;
 }

 FUNC_1("Device: Size: %lu Width:%d Name: %s\n",
       VAR_11->pcmcia_map.size,
       VAR_11->pcmcia_map.bankwidth << 3, VAR_11->mtd_name);
}
