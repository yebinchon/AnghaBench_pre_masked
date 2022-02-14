
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prp_priv {int last_eof; int ipu_buf_num; int irqlock; int eof_timeout_timer; struct ipuv3_channel* out_ch; struct ipuv3_channel* rot_out_ch; int rot_mode; int last_eof_comp; } ;
struct ipuv3_channel {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ipuv3_channel*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct prp_priv*,struct ipuv3_channel*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_3, void *VAR_4)
{
 struct prp_priv *VAR_5 = VAR_4;
 struct ipuv3_channel *VAR_6;

 FUNC_6(&VAR_5->irqlock);

 if (VAR_5->last_eof) {
  FUNC_0(&VAR_5->last_eof_comp);
  VAR_5->last_eof = 0;
  goto unlock;
 }

 VAR_6 = (FUNC_2(VAR_5->rot_mode)) ?
  VAR_5->rot_out_ch : VAR_5->out_ch;

 FUNC_5(VAR_5, VAR_6);


 FUNC_1(VAR_6, VAR_5->ipu_buf_num);

 VAR_5->ipu_buf_num ^= 1;


 FUNC_3(&VAR_5->eof_timeout_timer,
    VAR_2 + FUNC_4(VAR_0));

unlock:
 FUNC_7(&VAR_5->irqlock);
 return VAR_1;
}
