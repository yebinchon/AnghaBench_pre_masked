
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int f_flags; struct dvb_device* private_data; } ;
struct dvb_device {struct ddb_output* priv; } ;
struct ddb_output {TYPE_1__* port; } ;
struct ddb_input {scalar_t__ redi; scalar_t__ redo; } ;
struct TYPE_2__ {struct ddb_input** input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ddb_input*) ;
 int FUNC_1 (struct ddb_output*) ;
 int FUNC_2 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_5, struct file *VAR_6)
{
 int VAR_7;
 struct dvb_device *VAR_8 = VAR_6->private_data;
 struct ddb_output *VAR_9 = ((void*)0);
 struct ddb_input *VAR_10 = ((void*)0);

 if (VAR_8) {
  VAR_9 = VAR_8->priv;
  VAR_10 = VAR_9->port->input[0];
 }

 if ((VAR_6->f_flags & VAR_2) == VAR_3) {
  if (!VAR_10)
   return -VAR_1;
  if (VAR_10->redo || VAR_10->redi)
   return -VAR_0;
 } else if ((VAR_6->f_flags & VAR_2) == VAR_4) {
  if (!VAR_9)
   return -VAR_1;
 } else {
  return -VAR_1;
 }

 VAR_7 = FUNC_2(VAR_5, VAR_6);
 if (VAR_7 < 0)
  return VAR_7;
 if ((VAR_6->f_flags & VAR_2) == VAR_3)
  FUNC_0(VAR_10);
 else if ((VAR_6->f_flags & VAR_2) == VAR_4)
  FUNC_1(VAR_9);
 return VAR_7;
}
