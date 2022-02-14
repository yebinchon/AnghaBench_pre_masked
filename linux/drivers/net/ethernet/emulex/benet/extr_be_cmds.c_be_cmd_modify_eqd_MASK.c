
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct be_set_eqd {int dummy; } ;
struct be_adapter {int dummy; } ;


 int FUNC_0 (struct be_adapter*,struct be_set_eqd*,int) ;
 int FUNC_1 (int,int) ;

int FUNC_2(struct be_adapter *VAR_0, struct be_set_eqd *VAR_1,
        int VAR_2)
{
 int VAR_3, VAR_4 = 0;

 while (VAR_2) {
  VAR_3 = FUNC_1(VAR_2, 8);
  FUNC_0(VAR_0, &VAR_1[VAR_4], VAR_3);
  VAR_4 += VAR_3;
  VAR_2 -= VAR_3;
 }

 return 0;
}
