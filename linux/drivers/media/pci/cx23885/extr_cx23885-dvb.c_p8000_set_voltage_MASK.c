
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_frontend {TYPE_1__* dvb; } ;
struct cx23885_tsport {struct cx23885_dev* dev; } ;
struct cx23885_dev {int dummy; } ;
typedef enum fe_sec_voltage { ____Placeholder_fe_sec_voltage } fe_sec_voltage ;
struct TYPE_2__ {struct cx23885_tsport* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_3,
        enum fe_sec_voltage VAR_4)
{
 struct cx23885_tsport *VAR_5 = VAR_3->dvb->priv;
 struct cx23885_dev *VAR_6 = VAR_5->dev;

 if (VAR_4 == VAR_2)
  FUNC_0(VAR_0, 0x00001e00);
 else if (VAR_4 == VAR_1)
  FUNC_0(VAR_0, 0x00001a00);
 else
  FUNC_0(VAR_0, 0x00001800);
 return 0;
}
