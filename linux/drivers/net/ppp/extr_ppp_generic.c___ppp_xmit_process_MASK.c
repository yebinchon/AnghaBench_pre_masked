
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int xq; } ;
struct ppp {int dev; TYPE_1__ file; int xmit_pending; int closing; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ppp*) ;
 int FUNC_4 (struct ppp*,struct sk_buff*) ;
 int FUNC_5 (struct ppp*) ;
 int FUNC_6 (struct ppp*) ;
 struct sk_buff* FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,struct sk_buff*) ;

__attribute__((used)) static void FUNC_10(struct ppp *VAR_0, struct sk_buff *VAR_1)
{
 FUNC_5(VAR_0);
 if (!VAR_0->closing) {
  FUNC_3(VAR_0);

  if (VAR_1)
   FUNC_9(&VAR_0->file.xq, VAR_1);
  while (!VAR_0->xmit_pending &&
         (VAR_1 = FUNC_7(&VAR_0->file.xq)))
   FUNC_4(VAR_0, VAR_1);


  if (!VAR_0->xmit_pending && !FUNC_8(&VAR_0->file.xq))
   FUNC_2(VAR_0->dev);
  else
   FUNC_1(VAR_0->dev);
 } else {
  FUNC_0(VAR_1);
 }
 FUNC_6(VAR_0);
}
