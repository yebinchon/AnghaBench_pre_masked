
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ffs_dev {int name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct ffs_dev* FUNC_1 (char const*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char const*,int ) ;

int FUNC_5(struct ffs_dev *VAR_1, const char *VAR_2)
{
 struct ffs_dev *VAR_3;
 int VAR_4 = 0;

 FUNC_2();

 VAR_3 = FUNC_1(VAR_2);
 if (!VAR_3)
  FUNC_4(VAR_1->name, VAR_2, FUNC_0(VAR_1->name));
 else if (VAR_3 != VAR_1)
  VAR_4 = -VAR_0;

 FUNC_3();

 return VAR_4;
}
