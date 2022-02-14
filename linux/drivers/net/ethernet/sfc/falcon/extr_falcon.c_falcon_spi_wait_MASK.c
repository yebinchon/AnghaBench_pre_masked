
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_nic {int net_dev; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ef4_nic*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct ef4_nic*,int ,int ,char*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int,unsigned long) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct ef4_nic *VAR_4)
{




 unsigned long VAR_5 = VAR_3 + 1 + FUNC_0(VAR_1, 10);
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < 10; VAR_6++) {
  if (!FUNC_1(VAR_4))
   return 0;
  FUNC_5(10);
 }

 for (;;) {
  if (!FUNC_1(VAR_4))
   return 0;
  if (FUNC_4(VAR_3, VAR_5)) {
   FUNC_2(VAR_4, VAR_2, VAR_4->net_dev,
      "timed out waiting for SPI\n");
   return -VAR_0;
  }
  FUNC_3(1);
 }
}
