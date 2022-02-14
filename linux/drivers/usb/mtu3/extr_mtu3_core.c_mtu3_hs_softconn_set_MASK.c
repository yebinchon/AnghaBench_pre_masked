
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtu3 {int dev; int mac_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static inline void FUNC_3(struct mtu3 *VAR_3, bool VAR_4)
{
 if (VAR_4) {
  FUNC_2(VAR_3->mac_base, VAR_2,
   VAR_0 | VAR_1);
 } else {
  FUNC_1(VAR_3->mac_base, VAR_2,
   VAR_0 | VAR_1);
 }
 FUNC_0(VAR_3->dev, "SOFTCONN = %d\n", !!VAR_4);
}
