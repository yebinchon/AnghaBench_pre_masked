
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cudbg_pm_stats {int rx_cyc; int rx_cnt; int tx_cyc; int tx_cnt; } ;
struct cudbg_init {struct adapter* adap; } ;
struct cudbg_error {int dummy; } ;
struct cudbg_buffer {scalar_t__ data; int member_0; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (struct cudbg_init*,struct cudbg_buffer*,int,struct cudbg_buffer*) ;
 int FUNC_1 (struct cudbg_init*,struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_2 (struct adapter*,int ,int ) ;
 int FUNC_3 (struct adapter*,int ,int ) ;

int FUNC_4(struct cudbg_init *VAR_0,
      struct cudbg_buffer *VAR_1,
      struct cudbg_error *VAR_2)
{
 struct adapter *VAR_3 = VAR_0->adap;
 struct cudbg_buffer VAR_4 = { 0 };
 struct cudbg_pm_stats *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_0, VAR_1, sizeof(struct cudbg_pm_stats),
       &VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_5 = (struct cudbg_pm_stats *)VAR_4.data;
 FUNC_3(VAR_3, VAR_5->tx_cnt, VAR_5->tx_cyc);
 FUNC_2(VAR_3, VAR_5->rx_cnt, VAR_5->rx_cyc);
 return FUNC_1(VAR_0, &VAR_4, VAR_1);
}
