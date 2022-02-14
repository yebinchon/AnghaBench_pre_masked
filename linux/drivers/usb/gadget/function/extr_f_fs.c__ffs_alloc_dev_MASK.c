
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ffs_dev {int entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ffs_dev* FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (struct ffs_dev*) ;
 struct ffs_dev* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static struct ffs_dev *FUNC_7(void)
{
 struct ffs_dev *VAR_4;
 int VAR_5;

 if (FUNC_1())
   return FUNC_0(-VAR_0);

 VAR_4 = FUNC_4(sizeof(*VAR_4), VAR_2);
 if (!VAR_4)
  return FUNC_0(-VAR_1);

 if (FUNC_6(&VAR_3)) {
  VAR_5 = FUNC_2();
  if (VAR_5) {
   FUNC_3(VAR_4);
   return FUNC_0(VAR_5);
  }
 }

 FUNC_5(&VAR_4->entry, &VAR_3);

 return VAR_4;
}
