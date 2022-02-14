
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int f_flags; struct dvb_device* private_data; } ;
struct dvb_device {struct ddb_output* priv; } ;
struct ddb_output {TYPE_1__* port; } ;
struct ddb_input {int dummy; } ;
struct TYPE_2__ {struct ddb_input** input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ddb_input*) ;
 int FUNC_1 (struct ddb_output*) ;
 int FUNC_2 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_4, struct file *VAR_5)
{
 struct dvb_device *VAR_6 = VAR_5->private_data;
 struct ddb_output *VAR_7 = ((void*)0);
 struct ddb_input *VAR_8 = ((void*)0);

 if (VAR_6) {
  VAR_7 = VAR_6->priv;
  VAR_8 = VAR_7->port->input[0];
 }

 if ((VAR_5->f_flags & VAR_1) == VAR_2) {
  if (!VAR_8)
   return -VAR_0;
  FUNC_0(VAR_8);
 } else if ((VAR_5->f_flags & VAR_1) == VAR_3) {
  if (!VAR_7)
   return -VAR_0;
  FUNC_1(VAR_7);
 }
 return FUNC_2(VAR_4, VAR_5);
}
