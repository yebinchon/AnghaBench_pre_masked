
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct niu {int port; int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,unsigned long long) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct niu *VAR_3)
{
 int VAR_4;

 FUNC_2(VAR_0, VAR_1);
 VAR_4 = 1000;
 while (--VAR_4 >= 0) {
  if (!(FUNC_1(VAR_0) & VAR_1))
   break;
  FUNC_3(100);
 }
 if (VAR_4 < 0) {
  FUNC_0(VAR_3->device, "Port %u RX BMAC would not reset, BRXMAC_SW_RST[%llx]\n",
   VAR_3->port,
   (unsigned long long) FUNC_1(VAR_0));
  return -VAR_2;
 }

 return 0;
}
