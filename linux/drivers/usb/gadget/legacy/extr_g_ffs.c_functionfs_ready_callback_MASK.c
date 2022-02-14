
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ffs_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct ffs_data *VAR_4)
{
 int VAR_5 = 0;

 if (--VAR_3)
  return 0;

 if (VAR_2)
  return -VAR_0;

 VAR_2 = 1;

 VAR_5 = FUNC_1(&VAR_1);
 if (FUNC_0(VAR_5 < 0)) {
  ++VAR_3;
  VAR_2 = 0;
 }

 return VAR_5;
}
