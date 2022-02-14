
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lan743x_ptp {int command_lock; } ;
struct lan743x_adapter {int netdev; struct lan743x_ptp ptp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct lan743x_adapter*,int ,int ) ;
 int FUNC_1 (struct lan743x_adapter*) ;
 int FUNC_2 (struct lan743x_adapter*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct lan743x_adapter*,int ,int ,char*) ;

__attribute__((used)) static void FUNC_6(struct lan743x_adapter *VAR_4)
{
 struct lan743x_ptp *VAR_5 = &VAR_4->ptp;

 FUNC_3(&VAR_5->command_lock);
 if (!FUNC_1(VAR_4)) {
  FUNC_5(VAR_4, VAR_3, VAR_4->netdev,
      "PTP already disabled\n");
  goto done;
 }
 FUNC_0(VAR_4, VAR_0, VAR_1);
 FUNC_2(VAR_4, VAR_2);
done:
 FUNC_4(&VAR_5->command_lock);
}
