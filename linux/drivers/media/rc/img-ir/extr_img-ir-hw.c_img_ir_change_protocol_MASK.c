
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct rc_dev {int allowed_wakeup_protocols; struct img_ir_priv* priv; } ;
struct img_ir_priv_hw {TYPE_1__* decoder; struct rc_dev* rdev; } ;
struct img_ir_priv {struct img_ir_priv_hw hw; } ;
struct img_ir_decoder {int type; } ;
struct TYPE_2__ {int filter; } ;


 int VAR_0 ;
 int FUNC_0 (struct img_ir_priv*,struct img_ir_decoder const*) ;
 struct img_ir_decoder** VAR_1 ;
 int FUNC_1 (struct img_ir_priv*,struct img_ir_decoder const*,int) ;

__attribute__((used)) static int FUNC_2(struct rc_dev *VAR_2, u64 *VAR_3)
{
 struct img_ir_priv *VAR_4 = VAR_2->priv;
 struct img_ir_priv_hw *VAR_5 = &VAR_4->hw;
 struct rc_dev *VAR_6 = VAR_5->rdev;
 struct img_ir_decoder **VAR_7;
 u64 VAR_8;

 if (!*VAR_3) {

  FUNC_1(VAR_4, ((void*)0), 0);
  goto success;
 }
 for (VAR_7 = VAR_1; *VAR_7; ++VAR_7) {
  const struct img_ir_decoder *VAR_9 = *VAR_7;
  if (!FUNC_0(VAR_4, VAR_9))
   continue;
  if (*VAR_3 & VAR_9->type) {
   *VAR_3 &= VAR_9->type;
   FUNC_1(VAR_4, VAR_9, *VAR_3);
   goto success;
  }
 }
 return -VAR_0;

success:




 VAR_8 = *VAR_3;
 if (!VAR_5->decoder || !VAR_5->decoder->filter)
  VAR_8 = 0;
 VAR_6->allowed_wakeup_protocols = VAR_8;
 return 0;
}
