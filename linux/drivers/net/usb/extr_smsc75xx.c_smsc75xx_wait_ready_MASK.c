
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usbnet {int net; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct usbnet*,int ,int*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static int FUNC_3(struct usbnet *VAR_3, int VAR_4)
{
 int VAR_5 = 0;

 do {
  u32 VAR_6;
  int VAR_7;

  VAR_7 = FUNC_0(VAR_3, VAR_1, &VAR_6, VAR_4);

  if (VAR_7 < 0) {
   FUNC_2(VAR_3->net, "Failed to read PMT_CTL: %d\n", VAR_7);
   return VAR_7;
  }

  if (VAR_6 & VAR_2)
   return 0;

  FUNC_1(10);
  VAR_5++;
 } while (VAR_5 < 100);

 FUNC_2(VAR_3->net, "timeout waiting for device ready\n");
 return -VAR_0;
}
