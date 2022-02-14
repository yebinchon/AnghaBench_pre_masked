
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt3_board {int lnb_on_cnt; int lock; } ;
struct TYPE_2__ {struct pt3_board* priv; } ;
struct pt3_adapter {int cur_lnb; TYPE_1__ dvb_adap; } ;
struct dvb_frontend {int dummy; } ;
typedef enum fe_sec_voltage { ____Placeholder_fe_sec_voltage } fe_sec_voltage ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct pt3_adapter* FUNC_2 (struct dvb_frontend*) ;
 int FUNC_3 (struct pt3_board*,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_2, enum fe_sec_voltage VAR_3)
{
 struct pt3_adapter *VAR_4;
 struct pt3_board *VAR_5;
 bool VAR_6;



 VAR_4 = FUNC_2(VAR_2);
 VAR_6 = (VAR_3 != VAR_1);
 if (VAR_6 == VAR_4->cur_lnb)
  return 0;
 VAR_4->cur_lnb = VAR_6;
 VAR_5 = VAR_4->dvb_adap.priv;
 if (FUNC_0(&VAR_5->lock))
  return -VAR_0;
 if (VAR_6)
  VAR_5->lnb_on_cnt++;
 else
  VAR_5->lnb_on_cnt--;

 if (VAR_6 && VAR_5->lnb_on_cnt <= 1) {
  VAR_5->lnb_on_cnt = 1;
  FUNC_3(VAR_5, 1);
 } else if (!VAR_6 && VAR_5->lnb_on_cnt <= 0) {
  VAR_5->lnb_on_cnt = 0;
  FUNC_3(VAR_5, 0);
 }
 FUNC_1(&VAR_5->lock);
 return 0;
}
