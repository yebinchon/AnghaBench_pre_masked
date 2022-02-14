
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct TYPE_7__ {int iport; } ;
struct TYPE_8__ {TYPE_3__ val; } ;
struct filter_entry {TYPE_4__ fs; } ;
struct cpl_set_tcb_field {void* val; void* mask; void* word_cookie; void* reply_ctrl; } ;
struct TYPE_5__ {int abs_id; } ;
struct TYPE_6__ {TYPE_1__ fw_evtq; } ;
struct adapter {TYPE_2__ sge; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cpl_set_tcb_field*,int ,unsigned int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_7 (int,int ) ;
 void* FUNC_8 (int ) ;
 void* FUNC_9 (int) ;
 int FUNC_10 (struct sk_buff*,int ,int) ;
 int FUNC_11 (struct adapter*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_12(struct adapter *VAR_4, struct filter_entry *VAR_5,
    unsigned int VAR_6, u16 VAR_7, u64 VAR_8, u64 VAR_9,
    int VAR_10)
{
 struct cpl_set_tcb_field *VAR_11;
 struct sk_buff *VAR_12;

 VAR_12 = FUNC_7(sizeof(struct cpl_set_tcb_field), VAR_3);
 if (!VAR_12)
  return -VAR_2;

 VAR_11 = (struct cpl_set_tcb_field *)FUNC_6(VAR_12, sizeof(*VAR_11));
 FUNC_0(VAR_11, VAR_1, VAR_6);
 VAR_11->reply_ctrl = FUNC_9(FUNC_3(0) |
    FUNC_2(VAR_4->sge.fw_evtq.abs_id) |
    FUNC_1(VAR_10));
 VAR_11->word_cookie = FUNC_9(FUNC_5(VAR_7) | FUNC_4(VAR_6));
 VAR_11->mask = FUNC_8(VAR_8);
 VAR_11->val = FUNC_8(VAR_9);
 FUNC_10(VAR_12, VAR_0, VAR_5->fs.val.iport & 0x3);
 FUNC_11(VAR_4, VAR_12);
 return 0;
}
