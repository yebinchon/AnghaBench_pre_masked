
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct niu {int port; int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ,unsigned long long) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct niu *VAR_4)
{
 int VAR_5;

 FUNC_2(VAR_1,
   VAR_2 | VAR_3);
 VAR_5 = 1000;
 while (--VAR_5 >= 0) {
  if (!(FUNC_1(VAR_1) & (VAR_2 |
       VAR_3)))
   break;
  FUNC_3(100);
 }
 if (VAR_5 < 0) {
  FUNC_0(VAR_4->device, "Port %u RX XMAC would not reset, XRXMAC_SW_RST[%llx]\n",
   VAR_4->port,
   (unsigned long long) FUNC_1(VAR_1));
  return -VAR_0;
 }

 return 0;
}
