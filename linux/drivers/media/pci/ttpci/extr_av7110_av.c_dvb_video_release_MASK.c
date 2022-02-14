
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int f_flags; struct dvb_device* private_data; } ;
struct dvb_device {struct av7110* priv; } ;
struct av7110 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct av7110*,int ) ;
 int FUNC_1 (int,char*,struct av7110*) ;
 int FUNC_2 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_3, struct file *VAR_4)
{
 struct dvb_device *VAR_5 = VAR_4->private_data;
 struct av7110 *VAR_6 = VAR_5->priv;

 FUNC_1(2, "av7110:%p, \n", VAR_6);

 if ((VAR_4->f_flags & VAR_0) != VAR_1) {
  FUNC_0(VAR_6, VAR_2);
 }

 return FUNC_2(VAR_3, VAR_4);
}
