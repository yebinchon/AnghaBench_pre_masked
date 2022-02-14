
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rc_scancode_filter {unsigned long long data; unsigned long long mask; } ;
struct rc_dev {unsigned long long enabled_protocols; unsigned long long wakeup_protocol; struct img_ir_priv* priv; } ;
struct img_ir_priv_hw {TYPE_1__* decoder; } ;
struct img_ir_priv {int lock; int dev; struct img_ir_priv_hw hw; } ;
struct img_ir_filter {scalar_t__ mask; scalar_t__ data; int maxlen; scalar_t__ minlen; } ;
typedef enum rc_filter_type { ____Placeholder_rc_filter_type } rc_filter_type ;
struct TYPE_2__ {int (* filter ) (struct rc_scancode_filter*,struct img_ir_filter*,unsigned long long) ;} ;


 int VAR_0 ;


 int FUNC_0 (struct img_ir_priv*,struct img_ir_filter*) ;
 int FUNC_1 (struct img_ir_priv*,struct img_ir_filter*) ;
 int FUNC_2 (int ,char*,char*,unsigned long long,unsigned long long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct rc_scancode_filter*,struct img_ir_filter*,unsigned long long) ;
 int FUNC_6 (struct rc_scancode_filter*,struct img_ir_filter*,unsigned long long) ;

__attribute__((used)) static int FUNC_7(struct rc_dev *VAR_1, enum rc_filter_type VAR_2,
        struct rc_scancode_filter *VAR_3)
{
 struct img_ir_priv *VAR_4 = VAR_1->priv;
 struct img_ir_priv_hw *VAR_5 = &VAR_4->hw;
 struct img_ir_filter VAR_6, *VAR_7 = &VAR_6;
 int VAR_8 = 0;

 FUNC_2(VAR_4->dev, "IR scancode %sfilter=%08x & %08x\n",
  VAR_2 == 128 ? "wake " : "",
  VAR_3->data,
  VAR_3->mask);

 FUNC_3(&VAR_4->lock);


 if (!VAR_3->mask) {
  VAR_7 = ((void*)0);
  goto set_unlock;
 }


 if (!VAR_5->decoder || !VAR_5->decoder->filter) {
  VAR_8 = -VAR_0;
  goto unlock;
 }


 VAR_6.minlen = 0;
 VAR_6.maxlen = ~0;
 if (VAR_2 == 129) {

  VAR_8 = VAR_5->decoder->filter(VAR_3, &VAR_6,
       VAR_1->enabled_protocols);
 } else {

  VAR_8 = VAR_5->decoder->filter(VAR_3, &VAR_6,
       1ULL << VAR_1->wakeup_protocol);
 }
 if (VAR_8)
  goto unlock;
 FUNC_2(VAR_4->dev, "IR raw %sfilter=%016llx & %016llx\n",
  VAR_2 == 128 ? "wake " : "",
  (unsigned long long)VAR_6.data,
  (unsigned long long)VAR_6.mask);

set_unlock:

 switch (VAR_2) {
 case 129:
  FUNC_0(VAR_4, VAR_7);
  break;
 case 128:
  FUNC_1(VAR_4, VAR_7);
  break;
 default:
  VAR_8 = -VAR_0;
 }

unlock:
 FUNC_4(&VAR_4->lock);
 return VAR_8;
}
