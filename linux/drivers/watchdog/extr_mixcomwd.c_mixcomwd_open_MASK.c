
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 () ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (struct inode*,struct file*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_6, struct file *VAR_7)
{
 if (FUNC_4(0, &VAR_2))
  return -VAR_0;

 FUNC_2();

 if (VAR_5)





  FUNC_0(VAR_1);
 else {
  if (VAR_4) {
   FUNC_1(&VAR_3);
   VAR_4 = 0;
  }
 }
 return FUNC_3(VAR_6, VAR_7);
}
