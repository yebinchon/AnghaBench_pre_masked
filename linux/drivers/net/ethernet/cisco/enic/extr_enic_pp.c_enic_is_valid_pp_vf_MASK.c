
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enic {int num_vfs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct enic*) ;
 scalar_t__ FUNC_1 (struct enic*) ;

int FUNC_2(struct enic *VAR_3, int VAR_4, int *VAR_5)
{
 if (VAR_4 != VAR_2) {
  *VAR_5 = -VAR_1;
  goto err_out;

 }

 if (VAR_4 == VAR_2 && !FUNC_0(VAR_3)) {
  *VAR_5 = -VAR_1;
  goto err_out;
 }

 *VAR_5 = 0;
 return 1;

err_out:
 return 0;
}
