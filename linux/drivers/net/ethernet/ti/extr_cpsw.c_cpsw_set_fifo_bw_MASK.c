
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cpsw_slave {int dummy; } ;
struct cpsw_priv {int shp_cfg_speed; int* fifo_bw; int dev; struct cpsw_common* cpsw; } ;
struct cpsw_common {struct cpsw_slave* slaves; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_2 (struct cpsw_common*,struct cpsw_priv*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,char*,int,...) ;
 int FUNC_5 (struct cpsw_slave*,int ) ;
 int FUNC_6 (struct cpsw_slave*,int,int ) ;

__attribute__((used)) static int FUNC_7(struct cpsw_priv *VAR_4, int VAR_5, int VAR_6)
{
 struct cpsw_common *VAR_7 = VAR_4->cpsw;
 u32 VAR_8 = 0, VAR_9, VAR_10;
 struct cpsw_slave *VAR_11;
 int VAR_12 = 0, VAR_13;

 if (VAR_6 > VAR_4->shp_cfg_speed * 1000)
  goto err;




 VAR_11 = &VAR_7->slaves[FUNC_2(VAR_7, VAR_4)];
 VAR_9 = FUNC_5(VAR_11, VAR_3);
 for (VAR_13 = VAR_0; VAR_13 > 0; VAR_13--) {
  if (!VAR_6) {
   if (VAR_13 >= VAR_5 || !VAR_4->fifo_bw[VAR_13])
    continue;

   FUNC_4(VAR_4->dev, "Prev FIFO%d is shaped", VAR_13);
   continue;
  }

  if (!VAR_4->fifo_bw[VAR_13] && VAR_13 > VAR_5) {
   FUNC_3(VAR_4->dev, "Upper FIFO%d is not shaped", VAR_13);
   return -VAR_2;
  }

  VAR_10 = (VAR_13 - 1) * 8;
  if (VAR_13 == VAR_5) {
   VAR_9 &= ~(VAR_1 << VAR_10);
   VAR_8 = FUNC_1(VAR_6, VAR_4->shp_cfg_speed * 10);
   if (!VAR_8)
    VAR_8 = 1;

   VAR_9 |= VAR_8 << VAR_10;
   VAR_12 += VAR_8;
   continue;
  }

  if (VAR_4->fifo_bw[VAR_13])
   VAR_12 += (VAR_9 >> VAR_10) & VAR_1;
 }

 if (VAR_12 >= 100)
  goto err;

 FUNC_6(VAR_11, VAR_9, VAR_3);
 VAR_4->fifo_bw[VAR_5] = VAR_6;

 FUNC_4(VAR_4->dev, "set FIFO%d bw = %d\n", VAR_5,
   FUNC_0(VAR_8 * VAR_4->shp_cfg_speed, 100));

 return 0;
err:
 FUNC_3(VAR_4->dev, "Bandwidth doesn't fit in tc configuration");
 return -VAR_2;
}
