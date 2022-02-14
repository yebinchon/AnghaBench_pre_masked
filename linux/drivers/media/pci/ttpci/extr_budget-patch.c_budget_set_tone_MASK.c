
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_frontend {TYPE_1__* dvb; } ;
struct budget {int dummy; } ;
typedef enum fe_sec_tone_mode { ____Placeholder_fe_sec_tone_mode } fe_sec_tone_mode ;
struct TYPE_2__ {scalar_t__ priv; } ;


 int VAR_0 ;


 int FUNC_0 (struct budget*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_1,
      enum fe_sec_tone_mode VAR_2)
{
 struct budget* VAR_3 = (struct budget*) VAR_1->dvb->priv;

 switch (VAR_2) {
 case 128:
  FUNC_0 (VAR_3, 1);
  break;

 case 129:
  FUNC_0 (VAR_3, 0);
  break;

 default:
  return -VAR_0;
 }

 return 0;
}
