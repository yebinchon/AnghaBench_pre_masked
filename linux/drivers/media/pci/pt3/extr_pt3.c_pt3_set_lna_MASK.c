
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct pt3_board {int lna_on_cnt; int lock; } ;
struct TYPE_4__ {struct pt3_board* priv; } ;
struct pt3_adapter {scalar_t__ cur_lna; TYPE_2__ dvb_adap; } ;
struct TYPE_3__ {scalar_t__ lna; } ;
struct dvb_frontend {TYPE_1__ dtv_property_cache; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct pt3_adapter* FUNC_2 (struct dvb_frontend*) ;
 int FUNC_3 (struct pt3_board*,int,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_2)
{
 struct pt3_adapter *VAR_3;
 struct pt3_board *VAR_4;
 u32 VAR_5;
 int VAR_6;



 VAR_3 = FUNC_2(VAR_2);
 VAR_5 = VAR_2->dtv_property_cache.lna;
 if (VAR_5 == VAR_1 || VAR_5 == VAR_3->cur_lna)
  return 0;

 VAR_4 = VAR_3->dvb_adap.priv;
 if (FUNC_0(&VAR_4->lock))
  return -VAR_0;
 if (VAR_5)
  VAR_4->lna_on_cnt++;
 else
  VAR_4->lna_on_cnt--;

 if (VAR_5 && VAR_4->lna_on_cnt <= 1) {
  VAR_4->lna_on_cnt = 1;
  VAR_6 = FUNC_3(VAR_4, 1, 1);
 } else if (!VAR_5 && VAR_4->lna_on_cnt <= 0) {
  VAR_4->lna_on_cnt = 0;
  VAR_6 = FUNC_3(VAR_4, 1, 0);
 } else
  VAR_6 = 0;
 FUNC_1(&VAR_4->lock);
 VAR_3->cur_lna = (VAR_5 != 0);
 return VAR_6;
}
