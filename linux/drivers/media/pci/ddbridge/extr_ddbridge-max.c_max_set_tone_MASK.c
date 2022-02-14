
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct dvb_frontend {struct ddb_input* sec_priv; } ;
struct ddb_port {size_t lnr; struct ddb_dvb* dvb; struct ddb* dev; } ;
struct ddb_input {int nr; struct ddb_port* port; } ;
struct ddb_dvb {int tone; int voltage; int input; } ;
struct ddb {TYPE_2__* link; } ;
typedef enum fe_sec_tone_mode { ____Placeholder_fe_sec_tone_mode } fe_sec_tone_mode ;
struct TYPE_3__ {int fmode; int lock; } ;
struct TYPE_4__ {TYPE_1__ lnb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ddb*,size_t,int ,int) ;
 int FUNC_1 (struct dvb_frontend*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_3, enum fe_sec_tone_mode VAR_4)
{
 struct ddb_input *VAR_5 = VAR_3->sec_priv;
 struct ddb_port *VAR_6 = VAR_5->port;
 struct ddb *VAR_7 = VAR_6->dev;
 struct ddb_dvb *VAR_8 = &VAR_6->dvb[VAR_5->nr & 1];
 int VAR_9 = 0;
 int VAR_10 = 0;
 u32 VAR_11 = VAR_7->link[VAR_6->lnr].lnb.fmode;

 FUNC_2(&VAR_7->link[VAR_6->lnr].lnb.lock);
 VAR_8->tone = VAR_4;
 switch (VAR_11) {
 default:
 case 0:
 case 3:
  VAR_10 = FUNC_0(VAR_7, VAR_6->lnr, VAR_8->input, VAR_4);
  break;
 case 1:
 case 2:
  if (VAR_2) {
   if (VAR_8->tone == VAR_0)
    VAR_9 |= 2;
   if (VAR_8->voltage == VAR_1)
    VAR_9 |= 1;
  } else {
   if (VAR_8->tone == VAR_0)
    VAR_9 |= 1;
   if (VAR_8->voltage == VAR_1)
    VAR_9 |= 2;
  }
  VAR_10 = FUNC_1(VAR_3, VAR_9);
  break;
 }
 FUNC_3(&VAR_7->link[VAR_6->lnr].lnb.lock);
 return VAR_10;
}
