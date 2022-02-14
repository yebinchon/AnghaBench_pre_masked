
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tp_cpl_stats {int dummy; } ;
struct seq_file {struct adapter* private; } ;
struct adapter {int stats_lock; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct adapter*,struct tp_cpl_stats*,int) ;

__attribute__((used)) static void FUNC_4(struct seq_file *VAR_2)
{
 struct adapter *VAR_3 = VAR_2->private;
 struct tp_cpl_stats VAR_4;
 u8 VAR_5;

 FUNC_1(&VAR_3->stats_lock);
 FUNC_3(VAR_3, &VAR_4, 0);
 FUNC_2(&VAR_3->stats_lock);

 FUNC_0("tp_cpl_requests:", VAR_0);
 FUNC_0("tp_cpl_responses:", VAR_1);
}
