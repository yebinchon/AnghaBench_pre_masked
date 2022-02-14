
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rproc {int bootaddr; struct q6v5_wcss* priv; } ;
struct q6v5_wcss {int wcss_reset; int wcss_q6_reset; int dev; int q6v5; scalar_t__ reg_base; scalar_t__ halt_nc; int halt_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct q6v5_wcss*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ,scalar_t__,int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct rproc *VAR_7)
{
 struct q6v5_wcss *VAR_8 = VAR_7->priv;
 int VAR_9;

 FUNC_2(&VAR_8->q6v5);


 VAR_9 = FUNC_6(VAR_8->wcss_reset);
 if (VAR_9) {
  FUNC_0(VAR_8->dev, "wcss_reset failed\n");
  return VAR_9;
 }

 VAR_9 = FUNC_6(VAR_8->wcss_q6_reset);
 if (VAR_9) {
  FUNC_0(VAR_8->dev, "wcss_q6_reset failed\n");
  goto wcss_reset;
 }


 VAR_9 = FUNC_4(VAR_8->halt_map,
     VAR_8->halt_nc + VAR_3,
     VAR_6,
     VAR_5);
 if (VAR_9)
  goto wcss_q6_reset;

 VAR_9 = FUNC_4(VAR_8->halt_map,
     VAR_8->halt_nc + VAR_4,
     1, 0);
 if (VAR_9)
  goto wcss_q6_reset;


 FUNC_7(VAR_7->bootaddr >> 4, VAR_8->reg_base + VAR_2);

 VAR_9 = FUNC_1(VAR_8);
 if (VAR_9)
  goto wcss_q6_reset;

 VAR_9 = FUNC_3(&VAR_8->q6v5, 5 * VAR_1);
 if (VAR_9 == -VAR_0)
  FUNC_0(VAR_8->dev, "start timed out\n");

 return VAR_9;

wcss_q6_reset:
 FUNC_5(VAR_8->wcss_q6_reset);

wcss_reset:
 FUNC_5(VAR_8->wcss_reset);

 return VAR_9;
}
