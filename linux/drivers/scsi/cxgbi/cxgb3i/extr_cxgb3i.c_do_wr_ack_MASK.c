
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t3cdev {int dummy; } ;
struct sk_buff {int dummy; } ;
struct cxgbi_sock {int tid; int flags; int state; } ;
struct cpl_wr_ack {int snd_una; int credits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 struct cpl_wr_ack* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct cxgbi_sock*,int ,int ,int) ;
 int FUNC_3 (int,char*,struct cxgbi_sock*,int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct t3cdev *VAR_2, struct sk_buff *VAR_3, void *VAR_4)
{
 struct cxgbi_sock *VAR_5 = VAR_4;
 struct cpl_wr_ack *VAR_6 = FUNC_1(VAR_3);

 FUNC_3(1 << VAR_1 | 1 << VAR_0,
  "csk 0x%p,%u,0x%lx,%u, cr %u.\n",
  VAR_5, VAR_5->state, VAR_5->flags, VAR_5->tid, FUNC_5(VAR_6->credits));

 FUNC_2(VAR_5, FUNC_5(VAR_6->credits), FUNC_4(VAR_6->snd_una), 1);
 FUNC_0(VAR_3);
 return 0;
}
