
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_property_dir {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (char const*,struct tb_property_dir*) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int ,char const*,struct tb_property_dir*) ;
 scalar_t__ FUNC_7 (int ,char const*,int ) ;
 int FUNC_8 () ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_9(const char *VAR_6, struct tb_property_dir *VAR_7)
{
 int VAR_8;

 if (FUNC_0(!VAR_5))
  return -VAR_0;

 if (!VAR_6 || FUNC_5(VAR_6) > 8)
  return -VAR_2;

 FUNC_1(&VAR_4);
 if (FUNC_7(VAR_5, VAR_6,
        VAR_3)) {
  VAR_8 = -VAR_1;
  goto err_unlock;
 }

 VAR_8 = FUNC_6(VAR_5, VAR_6, VAR_7);
 if (VAR_8)
  goto err_unlock;

 VAR_8 = FUNC_3();
 if (VAR_8) {
  FUNC_4(VAR_6, VAR_7);
  goto err_unlock;
 }

 FUNC_2(&VAR_4);
 FUNC_8();
 return 0;

err_unlock:
 FUNC_2(&VAR_4);
 return VAR_8;
}
