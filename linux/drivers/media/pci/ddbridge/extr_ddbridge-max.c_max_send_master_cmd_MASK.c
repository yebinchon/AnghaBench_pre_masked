
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct dvb_frontend {struct ddb_input* sec_priv; } ;
struct dvb_diseqc_master_cmd {int msg_len; int * msg; } ;
struct ddb_port {size_t lnr; struct ddb_dvb* dvb; struct ddb* dev; } ;
struct ddb_input {int nr; struct ddb_port* port; } ;
struct ddb_dvb {int input; int (* diseqc_send_master_cmd ) (struct dvb_frontend*,struct dvb_diseqc_master_cmd*) ;} ;
struct ddb {TYPE_2__* link; } ;
struct TYPE_3__ {int fmode; int lock; } ;
struct TYPE_4__ {TYPE_1__ lnb; } ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (struct ddb*,int ,int) ;
 int FUNC_4 (struct ddb*,size_t,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct dvb_frontend*,struct dvb_diseqc_master_cmd*) ;

__attribute__((used)) static int FUNC_8(struct dvb_frontend *VAR_1,
          struct dvb_diseqc_master_cmd *VAR_2)
{
 struct ddb_input *VAR_3 = VAR_1->sec_priv;
 struct ddb_port *VAR_4 = VAR_3->port;
 struct ddb *VAR_5 = VAR_4->dev;
 struct ddb_dvb *VAR_6 = &VAR_4->dvb[VAR_3->nr & 1];
 u32 VAR_7 = FUNC_0(VAR_4->lnr);
 int VAR_8;
 u32 VAR_9 = VAR_5->link[VAR_4->lnr].lnb.fmode;

 if (VAR_9 == 2 || VAR_9 == 1)
  return 0;
 if (VAR_6->diseqc_send_master_cmd)
  VAR_6->diseqc_send_master_cmd(VAR_1, VAR_2);

 FUNC_5(&VAR_5->link[VAR_4->lnr].lnb.lock);
 FUNC_3(VAR_5, 0, VAR_7 | FUNC_1(VAR_6->input));
 for (VAR_8 = 0; VAR_8 < VAR_2->msg_len; VAR_8++)
  FUNC_3(VAR_5, VAR_2->msg[VAR_8], VAR_7 | FUNC_2(VAR_6->input));
 FUNC_4(VAR_5, VAR_4->lnr, VAR_6->input, VAR_0);
 FUNC_6(&VAR_5->link[VAR_4->lnr].lnb.lock);
 return 0;
}
