
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct dpaa2_eth_priv {int net_dev; int bpid; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *,int) ;
 int FUNC_1 (struct dpaa2_eth_priv*,int *,int) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void FUNC_3(struct dpaa2_eth_priv *VAR_1, int VAR_2)
{
 u64 VAR_3[VAR_0];
 int VAR_4;

 do {
  VAR_4 = FUNC_0(((void*)0), VAR_1->bpid,
            VAR_3, VAR_2);
  if (VAR_4 < 0) {
   FUNC_2(VAR_1->net_dev, "dpaa2_io_service_acquire() failed\n");
   return;
  }
  FUNC_1(VAR_1, VAR_3, VAR_4);
 } while (VAR_4);
}
