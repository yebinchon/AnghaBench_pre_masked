
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {int flags; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*) ;
 int FUNC_2 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (struct qlcnic_adapter*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(struct qlcnic_adapter *VAR_2)
{
 int VAR_3 = -1;

 if (FUNC_1(VAR_2)) {
  VAR_3 = FUNC_2(VAR_2);
  if (VAR_2->flags & VAR_0)
   VAR_3 += FUNC_0(VAR_1);
 } else if (FUNC_3(VAR_2)) {
  VAR_3 = FUNC_4(VAR_2);
 }

 return VAR_3;
}
