
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct dvb_device* private_data; } ;
struct dvb_device {struct av7110* priv; } ;
struct av7110 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct av7110*,int ) ;
 int FUNC_1 (int,char*,struct av7110*) ;
 int FUNC_2 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_1, struct file *VAR_2)
{
 struct dvb_device *VAR_3 = VAR_2->private_data;
 struct av7110 *VAR_4 = VAR_3->priv;

 FUNC_1(2, "av7110:%p, \n", VAR_4);

 FUNC_0(VAR_4, VAR_0);
 return FUNC_2(VAR_1, VAR_2);
}
