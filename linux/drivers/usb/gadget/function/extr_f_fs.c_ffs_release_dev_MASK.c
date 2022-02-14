
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ffs_dev {int mounted; int (* ffs_release_dev_callback ) (struct ffs_dev*) ;} ;
struct ffs_data {struct ffs_dev* private_data; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct ffs_dev*) ;

__attribute__((used)) static void FUNC_4(struct ffs_data *VAR_0)
{
 struct ffs_dev *VAR_1;

 FUNC_0();
 FUNC_1();

 VAR_1 = VAR_0->private_data;
 if (VAR_1) {
  VAR_1->mounted = 0;

  if (VAR_1->ffs_release_dev_callback)
   VAR_1->ffs_release_dev_callback(VAR_1);
 }

 FUNC_2();
}
