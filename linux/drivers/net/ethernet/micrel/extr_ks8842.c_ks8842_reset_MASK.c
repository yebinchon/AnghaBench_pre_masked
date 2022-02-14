
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ks8842_adapter {int conf_flags; scalar_t__ hw_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (struct ks8842_adapter*,int,int,scalar_t__) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct ks8842_adapter *VAR_3)
{
 if (VAR_3->conf_flags & VAR_0) {
  FUNC_2(VAR_3, 3, 1, VAR_1);
  FUNC_3(10);
  FUNC_0(0, VAR_3->hw_addr + VAR_1);
 } else {







  FUNC_1(0x1, VAR_3->hw_addr + VAR_2);
  FUNC_3(20);
 }
}
