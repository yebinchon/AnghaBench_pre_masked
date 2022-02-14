
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct saa7134_dev {int dummy; } ;
struct dvb_frontend {TYPE_1__* dvb; } ;
struct TYPE_2__ {struct saa7134_dev* priv; } ;


 int FUNC_0 (struct dvb_frontend*) ;
 int FUNC_1 (struct saa7134_dev*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0)
{
 struct saa7134_dev *VAR_1 = VAR_0->dvb->priv;

 FUNC_1(VAR_1, 22, 0);
 FUNC_0(VAR_0);
 return 0;
}
