
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pcan_usb_msg_context {int* ptr; int* end; int netdev; int rec_ts_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;





 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct pcan_usb_msg_context*,int,int) ;
 int FUNC_3 (struct pcan_usb_msg_context*,int) ;
 int FUNC_4 (struct pcan_usb_msg_context*) ;

__attribute__((used)) static int FUNC_5(struct pcan_usb_msg_context *VAR_7,
      u8 VAR_8)
{
 u8 VAR_9 = VAR_8 & VAR_5;
 u8 VAR_10, VAR_11;
 int VAR_12;


 if ((VAR_7->ptr + 2) > VAR_7->end)
  return -VAR_0;

 VAR_10 = VAR_7->ptr[VAR_2];
 VAR_11 = VAR_7->ptr[VAR_3];
 VAR_7->ptr += VAR_1;

 if (VAR_8 & VAR_6) {
  int VAR_13 = FUNC_3(VAR_7, !VAR_7->rec_ts_idx);

  if (VAR_13)
   return VAR_13;




  VAR_7->rec_ts_idx++;
 }

 switch (VAR_10) {
 case 129:
  VAR_12 = FUNC_2(VAR_7, VAR_11, VAR_8);
  if (VAR_12)
   return VAR_12;
  break;

 case 132:

  VAR_9 = 2;
  break;

 case 130:

  VAR_9 = 1;
  break;

 case 128:

  if (FUNC_4(VAR_7))
   return -VAR_0;
  break;

 case 131:

  if (VAR_11 & VAR_4)
   FUNC_0(VAR_7->netdev, "device Tx queue full)\n");
  break;
 default:
  FUNC_1(VAR_7->netdev, "unexpected function %u\n", VAR_10);
  break;
 }

 if ((VAR_7->ptr + VAR_9) > VAR_7->end)
  return -VAR_0;

 VAR_7->ptr += VAR_9;

 return 0;
}
