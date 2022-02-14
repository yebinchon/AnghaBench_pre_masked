
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lan743x_ptp {int command_lock; } ;
struct lan743x_adapter {struct lan743x_ptp ptp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct lan743x_adapter*,int ,int ) ;
 int FUNC_1 (struct lan743x_adapter*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct lan743x_adapter *VAR_5,
      u32 VAR_6, u32 VAR_7,
      u32 VAR_8)
{
 struct lan743x_ptp *VAR_9 = &VAR_5->ptp;

 FUNC_2(&VAR_9->command_lock);

 FUNC_0(VAR_5, VAR_1, VAR_6);
 FUNC_0(VAR_5, VAR_0, VAR_7);
 FUNC_0(VAR_5, VAR_2, VAR_8);

 FUNC_0(VAR_5, VAR_3, VAR_4);
 FUNC_1(VAR_5, VAR_4);
 FUNC_3(&VAR_9->command_lock);
}
