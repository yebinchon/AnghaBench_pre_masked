
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rc_dev {struct au0828_rc* priv; } ;
struct au0828_rc {TYPE_1__* dev; int work; } ;
struct TYPE_2__ {int dev_state; } ;


 int VAR_0 ;
 int FUNC_0 (struct au0828_rc*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct rc_dev *VAR_1)
{
 struct au0828_rc *VAR_2 = VAR_1->priv;

 FUNC_1(&VAR_2->work);


 if (!FUNC_2(VAR_0, &VAR_2->dev->dev_state)) {

  FUNC_0(VAR_2, 0xe0, 1 << 4);
 }
}
