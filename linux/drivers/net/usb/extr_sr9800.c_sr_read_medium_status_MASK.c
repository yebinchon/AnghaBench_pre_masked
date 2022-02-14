
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usbnet {int net; } ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct usbnet*,int ,int ,int ,int,int *) ;

__attribute__((used)) static u16 FUNC_3(struct usbnet *VAR_1)
{
 __le16 VAR_2;
 int VAR_3;

 VAR_3 = FUNC_2(VAR_1, VAR_0, 0, 0, 2, &VAR_2);
 if (VAR_3 < 0) {
  FUNC_1(VAR_1->net,
      "Error reading Medium Status register:%02x\n", VAR_3);
  return VAR_3;
 }

 return FUNC_0(VAR_2);
}
