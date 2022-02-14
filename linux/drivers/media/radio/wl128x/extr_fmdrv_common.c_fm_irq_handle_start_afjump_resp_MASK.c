
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int stage; } ;
struct fmdev {int flag; TYPE_1__ irq_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct fmdev*,struct sk_buff**) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct fmdev *VAR_3)
{
 struct sk_buff *VAR_4;

 if (FUNC_0(VAR_3, &VAR_4))
  return;

 VAR_3->irq_info.stage = VAR_2;
 FUNC_2(VAR_0, &VAR_3->flag);
 FUNC_1(VAR_1, &VAR_3->flag);
}
