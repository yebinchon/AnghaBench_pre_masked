
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lan743x_ptp {int command_lock; int used_event_ch; } ;
struct lan743x_adapter {struct lan743x_ptp ptp; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;

__attribute__((used)) static int FUNC_4(struct lan743x_adapter *VAR_2)
{
 struct lan743x_ptp *VAR_3 = &VAR_2->ptp;
 int VAR_4 = -VAR_0;
 int VAR_5 = 0;

 FUNC_1(&VAR_3->command_lock);
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (!(FUNC_3(VAR_5, &VAR_3->used_event_ch))) {
   VAR_3->used_event_ch |= FUNC_0(VAR_5);
   VAR_4 = VAR_5;
   break;
  }
 }
 FUNC_2(&VAR_3->command_lock);
 return VAR_4;
}
