
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ena_adapter {int ena_dev; int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct ena_adapter*,int ,int ,char*) ;
 int FUNC_5 (struct ena_adapter*,int ,int ,char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(struct ena_adapter *VAR_4)
{
 u32 VAR_5;
 int VAR_6, VAR_7;

 VAR_7 = FUNC_3(VAR_4->netdev, VAR_2);
 if (VAR_7 <= 0) {
  FUNC_4(VAR_4, VAR_3, VAR_4->netdev,
     "SS count is negative\n");
  return;
 }


 VAR_5 = VAR_7 * VAR_1 + sizeof(u64) * VAR_7;

 VAR_6 = FUNC_0(VAR_4->ena_dev, VAR_5);
 if (VAR_6) {
  FUNC_6("Cannot allocate debug area\n");
  return;
 }

 VAR_6 = FUNC_2(VAR_4->ena_dev);
 if (VAR_6) {
  if (VAR_6 == -VAR_0)
   FUNC_5(VAR_4, VAR_3, VAR_4->netdev,
       "Cannot set host attributes\n");
  else
   FUNC_4(VAR_4, VAR_3, VAR_4->netdev,
      "Cannot set host attributes\n");
  goto err;
 }

 return;
err:
 FUNC_1(VAR_4->ena_dev);
}
