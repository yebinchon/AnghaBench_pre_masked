
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ffs_dev {int single; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (int *) ;

int FUNC_3(struct ffs_dev *VAR_2)
{
 int VAR_3;

 VAR_3 = 0;
 FUNC_0();

 if (!FUNC_2(&VAR_1))
  VAR_3 = -VAR_0;
 else
  VAR_2->single = 1;

 FUNC_1();
 return VAR_3;
}
