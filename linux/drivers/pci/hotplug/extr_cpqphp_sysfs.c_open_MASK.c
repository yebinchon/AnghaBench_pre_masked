
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {struct controller* i_private; } ;
struct file {struct ctrl_dbg* private_data; } ;
struct ctrl_dbg {void* data; int size; } ;
struct controller {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ctrl_dbg*) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct controller*,void*,int) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_4, struct file *VAR_5)
{
 struct controller *VAR_6 = VAR_4->i_private;
 struct ctrl_dbg *VAR_7;
 int VAR_8 = -VAR_0;

 FUNC_2(&VAR_3);
 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  goto exit;
 VAR_7->data = FUNC_1(VAR_2, VAR_1);
 if (!VAR_7->data) {
  FUNC_0(VAR_7);
  goto exit;
 }
 VAR_7->size = FUNC_4(VAR_6, VAR_7->data, VAR_2);
 VAR_5->private_data = VAR_7;
 VAR_8 = 0;
exit:
 FUNC_3(&VAR_3);
 return VAR_8;
}
