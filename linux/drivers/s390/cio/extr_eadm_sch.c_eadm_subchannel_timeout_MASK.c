
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct subchannel {int lock; int schid; } ;
struct eadm_private {struct subchannel* sch; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,int *,int) ;
 scalar_t__ FUNC_2 (struct subchannel*) ;
 struct eadm_private* FUNC_3 (int ,struct timer_list*,int ) ;
 struct eadm_private* VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_2)
{
 struct eadm_private *VAR_3 = FUNC_3(VAR_3, VAR_2, VAR_1);
 struct subchannel *VAR_4 = VAR_3->sch;

 FUNC_4(VAR_4->lock);
 FUNC_0(1, "timeout");
 FUNC_1(1, &VAR_4->schid, sizeof(VAR_4->schid));
 if (FUNC_2(VAR_4))
  FUNC_0(0, "clear failed");
 FUNC_5(VAR_4->lock);
}
