
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int sent_post; int sent_post_failed; } ;
struct visornic_devdata {TYPE_5__ chstat; int num_rcvbuf_in_iovm; TYPE_4__* dev; int incarnation_id; } ;
struct TYPE_6__ {unsigned long pi_off; scalar_t__ pi_len; int pi_pfn; } ;
struct TYPE_7__ {TYPE_1__ frag; int unique_num; } ;
struct TYPE_8__ {int type; TYPE_2__ rcvpost; struct sk_buff* buf; } ;
struct uiscmdrsp {int cmdtype; TYPE_3__ net; } ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct TYPE_9__ {int visorchannel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ,struct uiscmdrsp*) ;

__attribute__((used)) static int FUNC_4(struct uiscmdrsp *VAR_6, struct visornic_devdata *VAR_7,
      struct sk_buff *VAR_8)
{
 int VAR_9;

 VAR_6->net.buf = VAR_8;
 VAR_6->net.rcvpost.frag.pi_pfn = FUNC_1(FUNC_2(VAR_8->data));
 VAR_6->net.rcvpost.frag.pi_off =
  (unsigned long)VAR_8->data & VAR_4;
 VAR_6->net.rcvpost.frag.pi_len = VAR_8->len;
 VAR_6->net.rcvpost.unique_num = VAR_7->incarnation_id;

 if ((VAR_6->net.rcvpost.frag.pi_off + VAR_8->len) > VAR_5)
  return -VAR_1;

 VAR_6->net.type = VAR_3;
 VAR_6->cmdtype = VAR_0;
 VAR_9 = FUNC_3(VAR_7->dev->visorchannel,
     VAR_2,
     VAR_6);
 if (VAR_9) {
  VAR_7->chstat.sent_post_failed++;
  return VAR_9;
 }

 FUNC_0(&VAR_7->num_rcvbuf_in_iovm);
 VAR_7->chstat.sent_post++;
 return 0;
}
