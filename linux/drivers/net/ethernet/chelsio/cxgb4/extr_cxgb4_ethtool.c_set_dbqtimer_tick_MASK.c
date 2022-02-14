
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sge {int dbqtimer_tick; int dbqtimer_val; } ;
struct port_info {struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct adapter {int flags; int pf; int mbox; struct sge sge; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 struct port_info* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct adapter*,int ,int ) ;
 int FUNC_5 (struct adapter*,int ,int ,int ,int,int*,int*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_3, int VAR_4)
{
 struct port_info *VAR_5 = FUNC_3(VAR_3);
 struct adapter *VAR_6 = VAR_5->adapter;
 struct sge *VAR_7 = &VAR_6->sge;
 u32 VAR_8, VAR_9;
 int VAR_10;

 if (!(VAR_6->flags & VAR_0))
  return 0;


 if (VAR_7->dbqtimer_tick == VAR_4)
  return 0;


 VAR_8 = (FUNC_1(VAR_1) |
   FUNC_2(VAR_2));
 VAR_9 = VAR_4;
 VAR_10 = FUNC_5(VAR_6, VAR_6->mbox, VAR_6->pf, 0, 1, &VAR_8, &VAR_9);
 if (VAR_10)
  return VAR_10;
 VAR_7->dbqtimer_tick = VAR_4;


 VAR_10 = FUNC_4(VAR_6, FUNC_0(VAR_7->dbqtimer_val),
        VAR_7->dbqtimer_val);
 return VAR_10;
}
