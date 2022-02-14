
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int no_ass_rs; int no_auth_rs; } ;
struct rtllib_device {scalar_t__ state; int lock; int associate_retry_wq; TYPE_1__ softmac_stats; int dev; int associate_seq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct rtllib_device *VAR_3)
{
 unsigned long VAR_4;

 FUNC_2(&VAR_3->lock, VAR_4);

 VAR_3->associate_seq++;







 if (VAR_3->state == VAR_0) {
  FUNC_0(VAR_3->dev, "Authentication failed\n");
  VAR_3->softmac_stats.no_auth_rs++;
 } else {
  FUNC_0(VAR_3->dev, "Association failed\n");
  VAR_3->softmac_stats.no_ass_rs++;
 }

 VAR_3->state = VAR_1;

 FUNC_1(&VAR_3->associate_retry_wq,
         VAR_2);

 FUNC_3(&VAR_3->lock, VAR_4);
}
