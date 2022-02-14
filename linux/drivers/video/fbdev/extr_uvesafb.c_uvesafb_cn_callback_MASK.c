
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uvesafb_task {int buf_len; } ;
struct TYPE_2__ {int buf_len; } ;
struct uvesafb_ktask {scalar_t__ ack; int done; TYPE_1__ t; TYPE_1__* buf; } ;
struct netlink_skb_parms {int dummy; } ;
struct cn_msg {size_t seq; scalar_t__ ack; int len; scalar_t__ data; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,struct uvesafb_task*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 struct uvesafb_ktask** VAR_3 ;

__attribute__((used)) static void FUNC_5(struct cn_msg *VAR_4, struct netlink_skb_parms *VAR_5)
{
 struct uvesafb_task *VAR_6;
 struct uvesafb_ktask *VAR_7;

 if (!FUNC_0(VAR_0))
  return;

 if (VAR_4->seq >= VAR_1)
  return;

 FUNC_3(&VAR_2);
 VAR_7 = VAR_3[VAR_4->seq];

 if (!VAR_7 || VAR_4->ack != VAR_7->ack) {
  FUNC_4(&VAR_2);
  return;
 }

 VAR_6 = (struct uvesafb_task *)VAR_4->data;


 if (VAR_7->t.buf_len < VAR_6->buf_len ||
     VAR_6->buf_len > VAR_4->len - sizeof(*VAR_6)) {
  FUNC_4(&VAR_2);
  return;
 }

 VAR_3[VAR_4->seq] = ((void*)0);
 FUNC_4(&VAR_2);

 FUNC_2(&VAR_7->t, VAR_6, sizeof(*VAR_6));

 if (VAR_7->t.buf_len && VAR_7->buf)
  FUNC_2(VAR_7->buf, VAR_6 + 1, VAR_7->t.buf_len);

 FUNC_1(VAR_7->done);
 return;
}
