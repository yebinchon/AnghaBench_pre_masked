
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tx_desc {int dummy; } ;
struct sk_buff {unsigned int priority; int len; } ;
struct TYPE_7__ {int lock; } ;
struct TYPE_6__ {size_t pidx; int * desc; } ;
struct sge_ctrl_txq {int full; TYPE_5__ sendq; TYPE_1__ q; int adap; } ;
struct fw_wr_hdr {int dummy; } ;


 unsigned int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_5__*,struct sk_buff*) ;
 int FUNC_3 (struct sge_ctrl_txq*,struct fw_wr_hdr*) ;
 int FUNC_4 (struct sk_buff*,TYPE_1__*,struct fw_wr_hdr*) ;
 int FUNC_5 (int ,TYPE_1__*,unsigned int) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_1__*,unsigned int) ;
 scalar_t__ FUNC_12 (TYPE_1__*) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct sge_ctrl_txq *VAR_4, struct sk_buff *VAR_5)
{
 unsigned int VAR_6;
 struct fw_wr_hdr *VAR_7;

 if (FUNC_13(!FUNC_7(VAR_5))) {
  FUNC_1(1);
  FUNC_6(VAR_5);
  return VAR_1;
 }

 VAR_6 = FUNC_0(VAR_5->len, sizeof(struct tx_desc));
 FUNC_9(&VAR_4->sendq.lock);

 if (FUNC_13(VAR_4->full)) {
  VAR_5->priority = VAR_6;
  FUNC_2(&VAR_4->sendq, VAR_5);
  FUNC_10(&VAR_4->sendq.lock);
  return VAR_0;
 }

 VAR_7 = (struct fw_wr_hdr *)&VAR_4->q.desc[VAR_4->q.pidx];
 FUNC_4(VAR_5, &VAR_4->q, VAR_7);

 FUNC_11(&VAR_4->q, VAR_6);
 if (FUNC_13(FUNC_12(&VAR_4->q) < VAR_3))
  FUNC_3(VAR_4, VAR_7);

 FUNC_5(VAR_4->adap, &VAR_4->q, VAR_6);
 FUNC_10(&VAR_4->sendq.lock);

 FUNC_8(VAR_5);
 return VAR_2;
}
