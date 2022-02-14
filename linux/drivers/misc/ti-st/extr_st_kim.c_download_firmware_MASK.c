
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kim_data_s {TYPE_2__* fw_entry; int kim_rcvd; int core_data; TYPE_1__* kim_pdev; } ;
struct hci_command {int opcode; } ;
struct bts_header {int dummy; } ;
struct bts_action_send {int data; } ;
struct bts_action_delay {int msec; } ;
struct bts_action {int size; int type; unsigned char* data; } ;
struct TYPE_5__ {long size; int * data; } ;
struct TYPE_4__ {int dev; } ;





 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;
 long VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 (int) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 long FUNC_6 (struct kim_data_s*,unsigned char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*) ;
 long FUNC_9 (TYPE_2__**,unsigned char*,int *) ;
 int FUNC_10 (unsigned char**,long*) ;
 int FUNC_11 (int ) ;
 long FUNC_12 (int ,int ,int) ;
 int FUNC_13 (unsigned long,unsigned long) ;
 int FUNC_14 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_15 (int) ;
 long FUNC_16 (int *,unsigned long) ;

__attribute__((used)) static long FUNC_17(struct kim_data_s *VAR_7)
{
 long VAR_8 = 0;
 long VAR_9 = 0;
 unsigned char *VAR_10 = ((void*)0);
 unsigned char *VAR_11 = ((void*)0);
 unsigned char VAR_12[40] = { 0 };
 int VAR_13;
 int VAR_14;
 unsigned long VAR_15;

 VAR_8 = FUNC_6(VAR_7, VAR_12);
 if (VAR_8 != 0) {
  FUNC_3("kim: failed to read local ver");
  return VAR_8;
 }
 VAR_8 =
     FUNC_9(&VAR_7->fw_entry, VAR_12,
        &VAR_7->kim_pdev->dev);
 if (FUNC_15((VAR_8 != 0) || (VAR_7->fw_entry->data == ((void*)0)) ||
       (VAR_7->fw_entry->size == 0))) {
  FUNC_3(" request_firmware failed(errno %ld) for %s", VAR_8,
      VAR_12);
  return -VAR_2;
 }
 VAR_10 = (void *)VAR_7->fw_entry->data;
 VAR_9 = VAR_7->fw_entry->size;



 VAR_10 += sizeof(struct bts_header);
 VAR_9 -= sizeof(struct bts_header);

 while (VAR_9 > 0 && VAR_10) {
  FUNC_2(" action size %d, type %d ",
      ((struct bts_action *)VAR_10)->size,
      ((struct bts_action *)VAR_10)->type);

  switch (((struct bts_action *)VAR_10)->type) {
  case 129:
   FUNC_2("S");
   VAR_11 = &(((struct bts_action *)VAR_10)->data[0]);
   if (FUNC_15
       (((struct hci_command *)VAR_11)->opcode ==
        0xFF36)) {


    FUNC_5("change remote baud"
        " rate command in firmware");
    FUNC_10(&VAR_10, &VAR_9);
    break;
   }




   VAR_14 = ((struct bts_action *)VAR_10)->size;
   VAR_15 = VAR_6 + FUNC_1(VAR_1);
   do {
    VAR_13 =
     FUNC_11(VAR_7->core_data);
    if (VAR_13 < 0) {
     FUNC_3("Unable to get free "
       "space info from uart tx buffer");
     FUNC_8(VAR_7->fw_entry);
     return VAR_13;
    }
    FUNC_0(1);
   } while ((VAR_13 < VAR_14) &&
     FUNC_14(VAR_6, VAR_15));


   if (FUNC_13(VAR_6, VAR_15)) {
    FUNC_3("Timeout while waiting for free "
      "free space in uart tx buffer");
    FUNC_8(VAR_7->fw_entry);
    return -VAR_5;
   }



   FUNC_7(&VAR_7->kim_rcvd);






   VAR_8 = FUNC_12(VAR_7->core_data,
   ((struct bts_action_send *)VAR_11)->data,
        ((struct bts_action *)VAR_10)->size);
   if (FUNC_15(VAR_8 < 0)) {
    FUNC_8(VAR_7->fw_entry);
    return VAR_8;
   }




   if (VAR_8 != VAR_14) {
    FUNC_3("Number of bytes written to uart "
      "tx buffer are not matching with "
      "requested cmd write size");
    FUNC_8(VAR_7->fw_entry);
    return -VAR_3;
   }
   break;
  case 128:
   FUNC_2("W");
   VAR_8 = FUNC_16(
     &VAR_7->kim_rcvd,
     FUNC_1(VAR_0));
   if (VAR_8 <= 0) {
    FUNC_3("response timeout/signaled during fw download ");

    FUNC_8(VAR_7->fw_entry);
    return VAR_8 ? -VAR_4 : -VAR_5;
   }
   FUNC_7(&VAR_7->kim_rcvd);
   break;
  case 130:
   FUNC_4("sleep command in scr");
   VAR_11 = &(((struct bts_action *)VAR_10)->data[0]);
   FUNC_0(((struct bts_action_delay *)VAR_11)->msec);
   break;
  }
  VAR_9 =
      VAR_9 - (sizeof(struct bts_action) +
      ((struct bts_action *)VAR_10)->size);
  VAR_10 =
      VAR_10 + sizeof(struct bts_action) +
      ((struct bts_action *)VAR_10)->size;
 }

 FUNC_8(VAR_7->fw_entry);
 return 0;
}
