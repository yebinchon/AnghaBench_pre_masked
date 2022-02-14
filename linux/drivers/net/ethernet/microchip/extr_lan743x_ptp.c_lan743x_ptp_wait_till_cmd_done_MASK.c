
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lan743x_adapter {int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lan743x_adapter*,int ) ;
 int FUNC_1 (struct lan743x_adapter*,int ,int ,char*,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct lan743x_adapter *VAR_2,
        u32 VAR_3)
{
 int VAR_4 = 1000;
 u32 VAR_5 = 0;

 while (VAR_4 &&
        (VAR_5 = (FUNC_0(VAR_2, VAR_0) &
        VAR_3))) {
  FUNC_2(1000, 20000);
  VAR_4--;
 }
 if (VAR_5) {
  FUNC_1(VAR_2, VAR_1, VAR_2->netdev,
     "timeout waiting for cmd to be done, cmd = 0x%08X\n",
     VAR_3);
 }
}
