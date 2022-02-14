
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ksz_hw {int dummy; } ;
struct dev_info {int hwlock; struct ksz_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ksz_hw*,int ) ;
 int FUNC_1 (struct ksz_hw*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct dev_info*) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_2)
{
 struct dev_info *VAR_3 = (struct dev_info *) VAR_2;
 struct ksz_hw *VAR_4 = &VAR_3->hw;

 FUNC_0(VAR_4, VAR_1);

 FUNC_4(VAR_3);


 FUNC_2(&VAR_3->hwlock);
 FUNC_1(VAR_4, VAR_0);
 FUNC_3(&VAR_3->hwlock);
}
