
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char u8 ;
typedef char u64 ;
struct net_device {int dummy; } ;
struct ena_adapter {TYPE_1__* pdev; struct net_device* netdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int *,int,int,int ) ;
 int FUNC_1 (int *,char*) ;
 int VAR_3 ;
 int FUNC_2 (struct net_device*,int *,char*) ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct net_device*,int ,char*) ;
 int FUNC_5 (struct ena_adapter*,int ,struct net_device*,char*,...) ;
 int FUNC_6 (char*,int,char*,char*,char) ;

__attribute__((used)) static void FUNC_7(struct ena_adapter *VAR_4, u8 *VAR_5)
{
 struct net_device *VAR_6 = VAR_4->netdev;
 u8 *VAR_7;
 u64 *VAR_8;
 int VAR_9;
 int VAR_10, VAR_11;

 VAR_9 = FUNC_3(VAR_6, VAR_1);
 if (VAR_9 <= 0) {
  FUNC_5(VAR_4, VAR_3, VAR_6, "Can't get stats num\n");
  return;
 }

 VAR_7 = FUNC_0(&VAR_4->pdev->dev,
       VAR_0, VAR_9,
       VAR_2);
 if (!VAR_7) {
  FUNC_5(VAR_4, VAR_3, VAR_6,
     "failed to alloc strings_buf\n");
  return;
 }

 VAR_8 = FUNC_0(&VAR_4->pdev->dev,
    VAR_9, sizeof(u64),
    VAR_2);
 if (!VAR_8) {
  FUNC_5(VAR_4, VAR_3, VAR_6,
     "failed to allocate data buf\n");
  FUNC_1(&VAR_4->pdev->dev, VAR_7);
  return;
 }

 FUNC_4(VAR_6, VAR_1, VAR_7);
 FUNC_2(VAR_6, ((void*)0), VAR_8);


 if (VAR_5)
  for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
   VAR_11 = FUNC_6(VAR_5, VAR_0 + sizeof(u64),
          "%s %llu\n",
          VAR_7 + VAR_10 * VAR_0,
          VAR_8[VAR_10]);
   VAR_5 += VAR_11;
  }
 else
  for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
   FUNC_5(VAR_4, VAR_3, VAR_6, "%s: %llu\n",
      VAR_7 + VAR_10 * VAR_0,
      VAR_8[VAR_10]);

 FUNC_1(&VAR_4->pdev->dev, VAR_7);
 FUNC_1(&VAR_4->pdev->dev, VAR_8);
}
