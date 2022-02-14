
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_frontend {TYPE_1__* dvb; } ;
struct cx88_core {int dummy; } ;
struct cx8802_dev {struct cx88_core* core; } ;
typedef enum fe_sec_tone_mode { ____Placeholder_fe_sec_tone_mode } fe_sec_tone_mode ;
struct TYPE_2__ {struct cx8802_dev* priv; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_2,
         enum fe_sec_tone_mode VAR_3)
{
 struct cx8802_dev *VAR_4 = VAR_2->dvb->priv;
 struct cx88_core *VAR_5 = VAR_4->core;

 FUNC_1(VAR_1, 0x0800);

 switch (VAR_3) {
 case 128:
  FUNC_1(VAR_1, 0x08);
  break;
 case 129:
  FUNC_0(VAR_1, 0x08);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
