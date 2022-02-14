
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpmh_ctrlr {int dirty; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rpmh_ctrlr*) ;
 struct rpmh_ctrlr* FUNC_1 (struct device const*) ;
 int FUNC_2 (struct rpmh_ctrlr*) ;
 int FUNC_3 (int ) ;

int FUNC_4(const struct device *VAR_1)
{
 struct rpmh_ctrlr *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 FUNC_2(VAR_2);
 VAR_2->dirty = 1;

 do {
  VAR_3 = FUNC_3(FUNC_0(VAR_2));
 } while (VAR_3 == -VAR_0);

 return VAR_3;
}
