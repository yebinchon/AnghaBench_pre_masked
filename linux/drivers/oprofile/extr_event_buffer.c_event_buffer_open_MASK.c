
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct inode*,struct file*) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_5, struct file *VAR_6)
{
 int VAR_7 = -VAR_3;

 if (!FUNC_1(VAR_0))
  return -VAR_3;

 if (FUNC_6(0, &VAR_4))
  return -VAR_1;





 VAR_7 = -VAR_2;
 VAR_6->private_data = FUNC_2();
 if (!VAR_6->private_data)
  goto out;

 if ((VAR_7 = FUNC_5()))
  goto fail;





 return FUNC_4(VAR_5, VAR_6);

fail:
 FUNC_3(VAR_6->private_data);
out:
 FUNC_0(0, &VAR_4);
 return VAR_7;
}
