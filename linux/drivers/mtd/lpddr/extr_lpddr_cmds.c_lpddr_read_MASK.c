
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct mtd_info {struct map_info* priv; } ;
struct map_info {struct lpddr_private* fldrv_priv; } ;
struct lpddr_private {int chipshift; struct flchip* chips; } ;
struct flchip {int mutex; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct map_info*,struct flchip*,int ) ;
 int FUNC_1 (struct map_info*,int *,int,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct map_info*,struct flchip*) ;

__attribute__((used)) static int FUNC_5(struct mtd_info *VAR_1, loff_t VAR_2, size_t VAR_3,
   size_t *VAR_4, u_char *VAR_5)
{
 struct map_info *VAR_6 = VAR_1->priv;
 struct lpddr_private *VAR_7 = VAR_6->fldrv_priv;
 int VAR_8 = VAR_2 >> VAR_7->chipshift;
 struct flchip *VAR_9 = &VAR_7->chips[VAR_8];
 int VAR_10 = 0;

 FUNC_2(&VAR_9->mutex);
 VAR_10 = FUNC_0(VAR_6, VAR_9, VAR_0);
 if (VAR_10) {
  FUNC_3(&VAR_9->mutex);
  return VAR_10;
 }

 FUNC_1(VAR_6, VAR_5, VAR_2, VAR_3);
 *VAR_4 = VAR_3;

 FUNC_4(VAR_6, VAR_9);
 FUNC_3(&VAR_9->mutex);
 return VAR_10;
}
