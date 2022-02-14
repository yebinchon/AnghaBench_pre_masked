
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rcar_thermal_priv {int ctemp; int lock; int id; TYPE_1__* chip; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ has_filonoff; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct device*,char*,int ,int,int) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct rcar_thermal_priv*) ;
 struct device* FUNC_5 (struct rcar_thermal_priv*) ;
 int FUNC_6 (struct rcar_thermal_priv*,int ,int ,int ) ;
 int FUNC_7 (struct rcar_thermal_priv*,int ) ;
 int FUNC_8 (struct rcar_thermal_priv*,int ,int) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct rcar_thermal_priv *VAR_8)
{
 struct device *VAR_9 = FUNC_5(VAR_8);
 int VAR_10;
 u32 VAR_11, VAR_12, VAR_13;
 int VAR_14 = -VAR_2;

 FUNC_2(&VAR_8->lock);





 FUNC_6(VAR_8, VAR_6, VAR_0, VAR_0);

 VAR_11 = 0;
 VAR_12 = ~0;
 for (VAR_10 = 0; VAR_10 < 128; VAR_10++) {





  FUNC_9(300);

  VAR_13 = FUNC_7(VAR_8, VAR_7) & VAR_1;
  if (VAR_13 == VAR_12) {
   VAR_11 = VAR_13;
   break;
  }
  VAR_12 = VAR_13;
 }

 if (!VAR_11) {
  FUNC_1(VAR_9, "thermal sensor was broken\n");
  goto err_out_unlock;
 }




 if (FUNC_4(VAR_8)) {
  if (VAR_8->chip->has_filonoff)
   FUNC_8(VAR_8, VAR_3, 0);


  FUNC_8(VAR_8, VAR_5, 0x1);
  FUNC_8(VAR_8, VAR_4, (((VAR_11 - 0) << 8) |
         ((VAR_11 - 1) << 0)));
 }

 FUNC_0(VAR_9, "thermal%d  %d -> %d\n", VAR_8->id, VAR_8->ctemp, VAR_11);

 VAR_8->ctemp = VAR_11;
 VAR_14 = 0;
err_out_unlock:
 FUNC_3(&VAR_8->lock);
 return VAR_14;
}
