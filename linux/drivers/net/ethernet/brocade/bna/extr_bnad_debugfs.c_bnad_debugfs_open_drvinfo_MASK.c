
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {struct bnad* i_private; } ;
struct file {struct bnad_debug_info* private_data; } ;
struct bnad_drvinfo {int dummy; } ;
struct bnad_debug_info {int buffer_len; struct bnad_debug_info* debug_buffer; } ;
struct bnad {int netdev; int conf_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bnad*,struct bnad_debug_info*,int) ;
 int FUNC_1 (struct bnad_debug_info*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int
FUNC_6(struct inode *VAR_3, struct file *VAR_4)
{
 struct bnad *VAR_5 = VAR_3->i_private;
 struct bnad_debug_info *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(sizeof(struct bnad_debug_info), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_6->buffer_len = sizeof(struct bnad_drvinfo);

 VAR_6->debug_buffer = FUNC_2(VAR_6->buffer_len, VAR_2);
 if (!VAR_6->debug_buffer) {
  FUNC_1(VAR_6);
  VAR_6 = ((void*)0);
  return -VAR_1;
 }

 FUNC_3(&VAR_5->conf_mutex);
 VAR_7 = FUNC_0(VAR_5, VAR_6->debug_buffer,
    VAR_6->buffer_len);
 FUNC_4(&VAR_5->conf_mutex);
 if (VAR_7 != VAR_0) {
  FUNC_1(VAR_6->debug_buffer);
  VAR_6->debug_buffer = ((void*)0);
  FUNC_1(VAR_6);
  VAR_6 = ((void*)0);
  FUNC_5(VAR_5->netdev, "failed to collect drvinfo\n");
  return -VAR_1;
 }

 VAR_4->private_data = VAR_6;

 return 0;
}
