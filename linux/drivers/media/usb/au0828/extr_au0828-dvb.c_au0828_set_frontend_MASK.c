
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_frontend {TYPE_1__* dvb; } ;
struct au0828_dvb {int (* set_frontend ) (struct dvb_frontend*) ;int lock; } ;
struct au0828_dev {int urb_streaming; int restart_streaming; struct au0828_dvb dvb; } ;
struct TYPE_2__ {struct au0828_dev* priv; } ;


 int FUNC_0 (struct au0828_dev*) ;
 int FUNC_1 (struct au0828_dev*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct au0828_dev*) ;
 int FUNC_6 (struct au0828_dev*) ;
 int FUNC_7 (struct dvb_frontend*) ;

__attribute__((used)) static int FUNC_8(struct dvb_frontend *VAR_0)
{
 struct au0828_dev *VAR_1 = VAR_0->dvb->priv;
 struct au0828_dvb *VAR_2 = &VAR_1->dvb;
 int VAR_3, VAR_4;

 FUNC_3(&VAR_2->lock);
 VAR_4 = VAR_1->urb_streaming;
 if (VAR_4) {
  FUNC_1(VAR_1, 1);





  FUNC_4(&VAR_2->lock);
  FUNC_2(&VAR_1->restart_streaming);
  FUNC_3(&VAR_2->lock);

  FUNC_6(VAR_1);
 }
 FUNC_4(&VAR_2->lock);

 VAR_3 = VAR_2->set_frontend(VAR_0);

 if (VAR_4) {
  FUNC_3(&VAR_2->lock);
  FUNC_0(VAR_1);
  FUNC_5(VAR_1);
  FUNC_4(&VAR_2->lock);
 }

 return VAR_3;
}
