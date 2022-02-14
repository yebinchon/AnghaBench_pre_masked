
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ctrlmode; } ;
struct TYPE_3__ {scalar_t__ rxerr; scalar_t__ txerr; } ;
struct peak_canfd_priv {TYPE_2__ can; TYPE_1__ bec; scalar_t__ echo_idx; } ;


 int VAR_0 ;
 int FUNC_0 (struct peak_canfd_priv*) ;
 int FUNC_1 (struct peak_canfd_priv*) ;
 int FUNC_2 (struct peak_canfd_priv*) ;

__attribute__((used)) static int FUNC_3(struct peak_canfd_priv *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  goto err_exit;

 VAR_1->echo_idx = 0;

 VAR_1->bec.txerr = 0;
 VAR_1->bec.rxerr = 0;

 if (VAR_1->can.ctrlmode & VAR_0)
  VAR_2 = FUNC_1(VAR_1);
 else
  VAR_2 = FUNC_2(VAR_1);

err_exit:
 return VAR_2;
}
