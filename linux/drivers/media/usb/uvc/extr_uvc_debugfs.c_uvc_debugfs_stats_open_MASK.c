
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvc_streaming {int dummy; } ;
struct uvc_debugfs_buffer {int data; int count; } ;
struct inode {struct uvc_streaming* i_private; } ;
struct file {struct uvc_debugfs_buffer* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct uvc_debugfs_buffer* FUNC_0 (int,int ) ;
 int FUNC_1 (struct uvc_streaming*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_2, struct file *VAR_3)
{
 struct uvc_streaming *VAR_4 = VAR_2->i_private;
 struct uvc_debugfs_buffer *VAR_5;

 VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_1);
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_5->count = FUNC_1(VAR_4, VAR_5->data, sizeof(VAR_5->data));

 VAR_3->private_data = VAR_5;
 return 0;
}
