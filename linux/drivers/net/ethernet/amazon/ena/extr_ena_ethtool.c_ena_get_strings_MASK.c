
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct ena_stats {int name; } ;
struct ena_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (struct ena_adapter*,int **) ;
 struct ena_stats* VAR_3 ;
 int FUNC_2 (int *,int ,int ) ;
 struct ena_adapter* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_4, u32 VAR_5, u8 *VAR_6)
{
 struct ena_adapter *VAR_7 = FUNC_3(VAR_4);
 const struct ena_stats *VAR_8;
 int VAR_9;

 if (VAR_5 != VAR_2)
  return;

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  VAR_8 = &VAR_3[VAR_9];

  FUNC_2(VAR_6, VAR_8->name, VAR_1);
  VAR_6 += VAR_1;
 }

 FUNC_1(VAR_7, &VAR_6);
 FUNC_0(&VAR_6);
}
