
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mci_cfg {int (* set_input ) (struct dvb_frontend*,int) ;int (* init ) (struct mci_base*) ;int fe_ops; int (* base_init ) (struct mci_base*) ;int base_size; int state_size; scalar_t__ type; } ;
struct dvb_frontend {struct mci_base* demodulator_priv; int ops; } ;
struct mci_base {int count; int nr; int tuner; int demod; struct dvb_frontend fe; int mci_list; struct mci_base* base; int completion; int tuner_lock; int mci_lock; int dev; struct ddb_link* link; void* key; } ;
struct mci {int count; int nr; int tuner; int demod; struct dvb_frontend fe; int mci_list; struct mci* base; int completion; int tuner_lock; int mci_lock; int dev; struct ddb_link* link; void* key; } ;
struct dvb_frontend_ops {int dummy; } ;
struct ddb_port {size_t lnr; struct ddb* dev; } ;
struct ddb_link {int nr; } ;
struct ddb_input {struct ddb_port* port; } ;
struct ddb {int dev; struct ddb_link* link; } ;


 int VAR_0 ;
 int FUNC_0 (struct ddb*,int ,int ,int ,struct mci_base*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mci_base*) ;
 struct mci_base* FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int *) ;
 struct mci_base* FUNC_5 (void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct mci_base*) ;
 int FUNC_9 (struct mci_base*) ;
 int FUNC_10 (struct mci_base*) ;

struct dvb_frontend
*FUNC_11(struct ddb_input *VAR_3, struct mci_cfg *VAR_4, int VAR_5,
  int (**VAR_6)(struct dvb_frontend *VAR_7, int VAR_8))
{
 struct ddb_port *VAR_9 = VAR_3->port;
 struct ddb *VAR_10 = VAR_9->dev;
 struct ddb_link *VAR_11 = &VAR_10->link[VAR_9->lnr];
 struct mci_base *VAR_12;
 struct mci *VAR_13;
 void *VAR_14 = VAR_4->type ? (void *)VAR_9 : (void *)VAR_11;

 VAR_13 = FUNC_3(VAR_4->state_size, VAR_0);
 if (!VAR_13)
  return ((void*)0);

 VAR_12 = FUNC_5(VAR_14);
 if (VAR_12) {
  VAR_12->count++;
  VAR_13->base = VAR_12;
 } else {
  VAR_12 = FUNC_3(VAR_4->base_size, VAR_0);
  if (!VAR_12)
   goto fail;
  VAR_12->key = VAR_14;
  VAR_12->count = 1;
  VAR_12->link = VAR_11;
  VAR_12->dev = VAR_10->dev;
  FUNC_7(&VAR_12->mci_lock);
  FUNC_7(&VAR_12->tuner_lock);
  FUNC_0(VAR_10, VAR_11->nr, 0, VAR_1, VAR_12);
  FUNC_1(&VAR_12->completion);
  VAR_13->base = VAR_12;
  if (FUNC_8(VAR_13) < 0) {
   FUNC_2(VAR_12);
   goto fail;
  }
  FUNC_4(&VAR_12->mci_list, &VAR_2);
  if (VAR_4->base_init)
   VAR_4->base_init(VAR_12);
 }
 FUNC_6(&VAR_13->fe.ops, VAR_4->fe_ops, sizeof(struct dvb_frontend_ops));
 VAR_13->fe.demodulator_priv = VAR_13;
 VAR_13->nr = VAR_5;
 *VAR_6 = VAR_4->set_input;
 VAR_13->tuner = VAR_5;
 VAR_13->demod = VAR_5;
 if (VAR_4->init)
  VAR_4->init(VAR_13);
 return &VAR_13->fe;
fail:
 FUNC_2(VAR_13);
 return ((void*)0);
}
