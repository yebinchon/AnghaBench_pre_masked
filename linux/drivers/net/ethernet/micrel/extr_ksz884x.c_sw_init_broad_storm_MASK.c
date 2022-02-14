
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ksz_hw {TYPE_1__* ksz_switch; } ;
struct TYPE_2__ {int broad_per; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ksz_hw*,int ,int ,int) ;
 int FUNC_1 (struct ksz_hw*,int) ;
 int FUNC_2 (struct ksz_hw*,int) ;

__attribute__((used)) static void FUNC_3(struct ksz_hw *VAR_3)
{
 int VAR_4;

 VAR_3->ksz_switch->broad_per = 1;
 FUNC_1(VAR_3, VAR_3->ksz_switch->broad_per);
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  FUNC_2(VAR_3, VAR_4);
 FUNC_0(VAR_3, VAR_0, VAR_1, 1);
}
