
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int video; } ;
struct sun6i_csi_dev {TYPE_1__ csi; struct regmap* regmap; } ;
struct regmap {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct regmap*,int ,int*) ;
 int FUNC_1 (struct regmap*,int ,int ,int ) ;
 int FUNC_2 (struct regmap*,int ,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_10, void *VAR_11)
{
 struct sun6i_csi_dev *VAR_12 = (struct sun6i_csi_dev *)VAR_11;
 struct regmap *VAR_13 = VAR_12->regmap;
 u32 VAR_14;

 FUNC_0(VAR_13, VAR_5, &VAR_14);

 if (!(VAR_14 & 0xFF))
  return VAR_9;

 if ((VAR_14 & VAR_1) ||
     (VAR_14 & VAR_2) ||
     (VAR_14 & VAR_3) ||
     (VAR_14 & VAR_4)) {
  FUNC_2(VAR_13, VAR_5, VAR_14);
  FUNC_1(VAR_13, VAR_7, VAR_6, 0);
  FUNC_1(VAR_13, VAR_7, VAR_6,
       VAR_6);
  return VAR_8;
 }

 if (VAR_14 & VAR_0)
  FUNC_3(&VAR_12->csi.video);

 FUNC_2(VAR_13, VAR_5, VAR_14);

 return VAR_8;
}
