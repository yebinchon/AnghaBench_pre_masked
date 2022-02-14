
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int net; } ;
typedef int __le32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct usbnet*,int ,int ,char*,int,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct usbnet *VAR_1, __le32 *VAR_2)
{
 FUNC_1(VAR_1, VAR_0, VAR_1->net,
     "link speeds: %u kbps up, %u kbps down\n",
     FUNC_0(VAR_2[0]) / 1000,
     FUNC_0(VAR_2[1]) / 1000);
}
