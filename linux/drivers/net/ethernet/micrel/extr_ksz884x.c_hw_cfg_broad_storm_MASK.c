
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ksz_hw {TYPE_1__* ksz_switch; } ;
struct TYPE_2__ {int broad_per; } ;


 int FUNC_0 (struct ksz_hw*,int) ;
 int FUNC_1 (struct ksz_hw*,int*) ;

__attribute__((used)) static void FUNC_2(struct ksz_hw *VAR_0, u8 VAR_1)
{
 if (VAR_1 > 100)
  VAR_1 = 100;

 FUNC_0(VAR_0, VAR_1);
 FUNC_1(VAR_0, &VAR_1);
 VAR_0->ksz_switch->broad_per = VAR_1;
}
