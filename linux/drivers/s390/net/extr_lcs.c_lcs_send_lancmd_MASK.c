
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lcs_reply {void (* callback ) (struct lcs_card*,struct lcs_cmd*) ;int rc; int timer; int received; int wait_q; int list; struct lcs_card* card; } ;
struct lcs_cmd {scalar_t__ sequence_no; scalar_t__ return_code; } ;
struct lcs_card {int lancmd_timeout; int write; int lock; int lancmd_waiters; int sequence_no; } ;
struct lcs_buffer {int callback; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,char*) ;
 int FUNC_1 (int,int ,char*,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_3 ;
 struct lcs_reply* FUNC_3 (struct lcs_cmd*) ;
 int VAR_4 ;
 int FUNC_4 (struct lcs_reply*) ;
 int FUNC_5 (int *,struct lcs_buffer*) ;
 int VAR_5 ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,int ,int ) ;
 int VAR_6 ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static int
FUNC_12(struct lcs_card *VAR_7, struct lcs_buffer *VAR_8,
  void (*VAR_9)(struct lcs_card *, struct lcs_cmd *))
{
 struct lcs_reply *VAR_10;
 struct lcs_cmd *VAR_11;
 unsigned long VAR_12;
 int VAR_13;

 FUNC_0(4, VAR_6, "sendcmd");
 VAR_11 = (struct lcs_cmd *) VAR_8->data;
 VAR_11->return_code = 0;
 VAR_11->sequence_no = VAR_7->sequence_no++;
 VAR_10 = FUNC_3(VAR_11);
 if (!VAR_10)
  return -VAR_1;
 VAR_10->callback = VAR_9;
 VAR_10->card = VAR_7;
 FUNC_8(&VAR_7->lock, VAR_12);
 FUNC_6(&VAR_10->list, &VAR_7->lancmd_waiters);
 FUNC_9(&VAR_7->lock, VAR_12);

 VAR_8->callback = VAR_5;
 VAR_13 = FUNC_5(&VAR_7->write, VAR_8);
 if (VAR_13)
  return VAR_13;
 FUNC_10(&VAR_10->timer, VAR_4, 0);
 FUNC_7(&VAR_10->timer, VAR_3 + VAR_2 * VAR_7->lancmd_timeout);
 FUNC_11(VAR_10->wait_q, VAR_10->received);
 FUNC_2(&VAR_10->timer);
 FUNC_1(4, VAR_6, "rc:%d",VAR_10->rc);
 VAR_13 = VAR_10->rc;
 FUNC_4(VAR_10);
 return VAR_13 ? -VAR_0 : 0;
}
