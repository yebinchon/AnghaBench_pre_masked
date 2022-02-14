
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usbnet {int net; int udev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (int ,int ,int*,int,int*,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int
FUNC_5(struct usbnet *VAR_1, u8 *VAR_2, u8 VAR_3,
 u8 *VAR_4, u8 VAR_5)
{
 int VAR_6;
 int VAR_7;

 FUNC_0(VAR_1->net, "Sending init packet");

 VAR_7 = FUNC_2(VAR_1->udev, FUNC_4(VAR_1->udev, 0x02),
  VAR_2, VAR_3, &VAR_6, VAR_0);
 if (VAR_7 != 0) {
  FUNC_1(VAR_1->net,
   "Error sending init packet. Status %i, length %i\n",
   VAR_7, VAR_6);
  return VAR_7;
 }
 else if (VAR_6 != VAR_3) {
  FUNC_1(VAR_1->net,
   "Did not send all of init packet. Bytes sent: %i",
   VAR_6);
 }
 else {
  FUNC_0(VAR_1->net, "Successfully sent init packet.");
 }

 VAR_7 = FUNC_2(VAR_1->udev, FUNC_3(VAR_1->udev, 0x81),
  VAR_4, VAR_5, &VAR_6, VAR_0);

 if (VAR_7 != 0)
  FUNC_1(VAR_1->net,
   "Error receiving init result. Status %i, length %i\n",
   VAR_7, VAR_6);
 else if (VAR_6 != VAR_5)
  FUNC_1(VAR_1->net, "Unexpected init result length: %i\n",
   VAR_6);

 return VAR_7;
}
