
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int kobj; } ;
struct subchannel {TYPE_1__ dev; int * lock; int isc; } ;
struct eadm_private {int head; struct subchannel* sch; int state; int timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;
 int FUNC_1 (struct subchannel*,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct eadm_private*) ;
 int FUNC_5 (int *,int ) ;
 struct eadm_private* FUNC_6 (int,int) ;
 int FUNC_7 (int *,int *) ;
 int VAR_8 ;
 int FUNC_8 (struct subchannel*,struct eadm_private*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct subchannel *VAR_9)
{
 struct eadm_private *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_6(sizeof(*VAR_10), VAR_4 | VAR_3);
 if (!VAR_10)
  return -VAR_2;

 FUNC_0(&VAR_10->head);
 FUNC_11(&VAR_10->timer, VAR_7, 0);

 FUNC_9(VAR_9->lock);
 FUNC_8(VAR_9, VAR_10);
 VAR_10->state = VAR_0;
 VAR_10->sch = VAR_9;
 VAR_9->isc = VAR_1;
 VAR_11 = FUNC_1(VAR_9, (u32)(unsigned long)VAR_9);
 if (VAR_11) {
  FUNC_8(VAR_9, ((void*)0));
  FUNC_10(VAR_9->lock);
  FUNC_4(VAR_10);
  goto out;
 }
 FUNC_10(VAR_9->lock);

 FUNC_9(&VAR_8);
 FUNC_7(&VAR_10->head, &VAR_6);
 FUNC_10(&VAR_8);

 if (FUNC_2(&VAR_9->dev)) {
  FUNC_3(&VAR_9->dev, 0);
  FUNC_5(&VAR_9->dev.kobj, VAR_5);
 }
out:
 return VAR_11;
}
