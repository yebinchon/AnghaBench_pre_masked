
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
struct ddb_dvb {int input; int (* set_input ) (struct dvb_frontend*,int) ;} ;
struct ddb {TYPE_2__* link; } ;
struct TYPE_3__ {int* voltage; } ;
struct TYPE_4__ {TYPE_1__ lnb; } ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_1, int VAR_2)
{
 struct ddb_input *VAR_3 = VAR_1->sec_priv;
 struct ddb_port *VAR_4 = VAR_3->port;
 struct ddb *VAR_5 = VAR_4->dev;
 struct ddb_dvb *VAR_6 = &VAR_4->dvb[VAR_3->nr & 1];
 int VAR_7 = 0;

 if (VAR_2 > 3)
  return -VAR_0;
 if (VAR_6->input != VAR_2) {
  u32 VAR_8 = (1ULL << VAR_3->nr);
  u32 VAR_9 =
   VAR_5->link[VAR_4->lnr].lnb.voltage[VAR_6->input & 3] & VAR_8;

  VAR_5->link[VAR_4->lnr].lnb.voltage[VAR_6->input & 3] &= ~VAR_8;
  VAR_6->input = VAR_2;
  VAR_5->link[VAR_4->lnr].lnb.voltage[VAR_6->input & 3] |= VAR_9;
 }
 VAR_7 = VAR_6->set_input(VAR_1, VAR_2);
 return VAR_7;
}
