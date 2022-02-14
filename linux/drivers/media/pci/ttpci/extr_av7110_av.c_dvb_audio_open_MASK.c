
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {struct dvb_device* private_data; } ;
struct dvb_device {struct av7110* priv; } ;
struct TYPE_2__ {int stream_source; } ;
struct av7110 {TYPE_1__ audiostate; int aout; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,struct av7110*) ;
 int FUNC_1 (struct inode*,struct file*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_1, struct file *VAR_2)
{
 struct dvb_device *VAR_3 = VAR_2->private_data;
 struct av7110 *VAR_4 = VAR_3->priv;
 int VAR_5 = FUNC_1(VAR_1, VAR_2);

 FUNC_0(2, "av7110:%p, \n", VAR_4);

 if (VAR_5 < 0)
  return VAR_5;
 FUNC_2(&VAR_4->aout);
 VAR_4->audiostate.stream_source = VAR_0;
 return 0;
}
