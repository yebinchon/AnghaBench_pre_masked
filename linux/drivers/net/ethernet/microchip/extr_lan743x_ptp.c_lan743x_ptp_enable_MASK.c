
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lan743x_ptp {int command_lock; } ;
struct lan743x_adapter {int netdev; struct lan743x_ptp ptp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lan743x_adapter*,int ,int ) ;
 scalar_t__ FUNC_1 (struct lan743x_adapter*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct lan743x_adapter*,int ,int ,char*) ;

__attribute__((used)) static void FUNC_5(struct lan743x_adapter *VAR_3)
{
 struct lan743x_ptp *VAR_4 = &VAR_3->ptp;

 FUNC_2(&VAR_4->command_lock);

 if (FUNC_1(VAR_3)) {
  FUNC_4(VAR_3, VAR_2, VAR_3->netdev,
      "PTP already enabled\n");
  goto done;
 }
 FUNC_0(VAR_3, VAR_0, VAR_1);
done:
 FUNC_3(&VAR_4->command_lock);
}
