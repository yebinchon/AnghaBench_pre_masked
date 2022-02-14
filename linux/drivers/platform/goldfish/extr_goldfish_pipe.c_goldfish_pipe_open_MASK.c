
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct inode {int dummy; } ;
struct goldfish_pipe_dev {int lock; struct goldfish_pipe** pipes; TYPE_2__* buffers; } ;
struct goldfish_pipe_command {int id; } ;
struct goldfish_pipe {int id; struct goldfish_pipe_command* command_buffer; int wake_queue; int lock; struct goldfish_pipe_dev* dev; } ;
struct file {struct goldfish_pipe* private_data; } ;
struct TYPE_3__ {scalar_t__ command_buffer_ptr; int rw_params_max_count; } ;
struct TYPE_4__ {TYPE_1__ open_command_params; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct goldfish_pipe_command*) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (struct goldfish_pipe_dev*) ;
 int FUNC_5 (struct goldfish_pipe*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct goldfish_pipe*) ;
 struct goldfish_pipe* FUNC_8 (int,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 struct goldfish_pipe_dev* FUNC_12 (struct file*) ;

__attribute__((used)) static int FUNC_13(struct inode *VAR_5, struct file *VAR_6)
{
 struct goldfish_pipe_dev *VAR_7 = FUNC_12(VAR_6);
 unsigned long VAR_8;
 int VAR_9;
 int VAR_10;


 struct goldfish_pipe *VAR_11 = FUNC_8(sizeof(*VAR_11), VAR_1);

 if (!VAR_11)
  return -VAR_0;

 VAR_11->dev = VAR_7;
 FUNC_9(&VAR_11->lock);
 FUNC_6(&VAR_11->wake_queue);





 FUNC_0(sizeof(struct goldfish_pipe_command) > VAR_3);
 VAR_11->command_buffer =
  (struct goldfish_pipe_command *)FUNC_1(VAR_1);
 if (!VAR_11->command_buffer) {
  VAR_10 = -VAR_0;
  goto err_pipe;
 }

 FUNC_10(&VAR_7->lock, VAR_8);

 VAR_9 = FUNC_4(VAR_7);
 if (VAR_9 < 0) {
  VAR_10 = VAR_9;
  goto err_id_locked;
 }

 VAR_7->pipes[VAR_9] = VAR_11;
 VAR_11->id = VAR_9;
 VAR_11->command_buffer->id = VAR_9;


 VAR_7->buffers->open_command_params.rw_params_max_count =
   VAR_2;
 VAR_7->buffers->open_command_params.command_buffer_ptr =
   (u64)(unsigned long)FUNC_2(VAR_11->command_buffer);
 VAR_10 = FUNC_5(VAR_11, VAR_4);
 FUNC_11(&VAR_7->lock, VAR_8);
 if (VAR_10 < 0)
  goto err_cmd;

 VAR_6->private_data = VAR_11;
 return 0;

err_cmd:
 FUNC_10(&VAR_7->lock, VAR_8);
 VAR_7->pipes[VAR_9] = ((void*)0);
err_id_locked:
 FUNC_11(&VAR_7->lock, VAR_8);
 FUNC_3((unsigned long)VAR_11->command_buffer);
err_pipe:
 FUNC_7(VAR_11);
 return VAR_10;
}
