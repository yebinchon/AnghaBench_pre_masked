
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csi_priv {int last_eof; int ipu_buf_num; int irqlock; int eof_timeout_timer; int idmac_ch; scalar_t__ fim; int last_eof_comp; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct csi_priv*) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 () ;
 int FUNC_5 (int *,scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_3, void *VAR_4)
{
 struct csi_priv *VAR_5 = VAR_4;

 FUNC_7(&VAR_5->irqlock);

 if (VAR_5->last_eof) {
  FUNC_0(&VAR_5->last_eof_comp);
  VAR_5->last_eof = 0;
  goto unlock;
 }

 if (VAR_5->fim)

  FUNC_2(VAR_5->fim, FUNC_4());

 FUNC_1(VAR_5);


 FUNC_3(VAR_5->idmac_ch, VAR_5->ipu_buf_num);

 VAR_5->ipu_buf_num ^= 1;


 FUNC_5(&VAR_5->eof_timeout_timer,
    VAR_2 + FUNC_6(VAR_0));

unlock:
 FUNC_8(&VAR_5->irqlock);
 return VAR_1;
}
