
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mc; } ;
struct cpsw_priv {int ndev; struct cpsw_common* cpsw; } ;
struct cpsw_common {int usage_count; int dev; int ale; int dma; int cpts; int napi_tx; int napi_rx; } ;


 int FUNC_0 (int *,struct net_device*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct cpsw_common*) ;
 int FUNC_4 (struct cpsw_priv*,int ,char*) ;
 int FUNC_5 (struct cpsw_common*) ;
 scalar_t__ FUNC_6 (struct cpsw_common*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_7 (struct cpsw_common*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct cpsw_priv*,int ,struct cpsw_common*) ;
 int VAR_2 ;
 int FUNC_10 (int *) ;
 struct cpsw_priv* FUNC_11 (struct net_device*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static int FUNC_15(struct net_device *VAR_3)
{
 struct cpsw_priv *VAR_4 = FUNC_11(VAR_3);
 struct cpsw_common *VAR_5 = VAR_4->cpsw;

 FUNC_4(VAR_4, VAR_2, "shutting down cpsw device\n");
 FUNC_0(&VAR_3->mc, VAR_3, VAR_0);
 FUNC_13(VAR_4->ndev);
 FUNC_12(VAR_4->ndev);

 if (VAR_5->usage_count <= 1) {
  FUNC_10(&VAR_5->napi_rx);
  FUNC_10(&VAR_5->napi_tx);
  FUNC_8(VAR_5->cpts);
  FUNC_5(VAR_5);
  FUNC_1(VAR_5->dma);
  FUNC_2(VAR_5->ale);
  FUNC_3(VAR_5);
 }
 FUNC_9(VAR_4, VAR_1, VAR_5);

 if (FUNC_6(VAR_5))
  FUNC_7(VAR_5);

 VAR_5->usage_count--;
 FUNC_14(VAR_5->dev);
 return 0;
}
