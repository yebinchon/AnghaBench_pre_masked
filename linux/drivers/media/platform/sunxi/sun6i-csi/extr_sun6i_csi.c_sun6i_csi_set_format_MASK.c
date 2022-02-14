
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ field; int pixelformat; int code; } ;
struct sun6i_csi {TYPE_1__ config; } ;
struct sun6i_csi_dev {int regmap; struct sun6i_csi csi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (struct sun6i_csi_dev*,int ,int ) ;
 int FUNC_4 (struct sun6i_csi_dev*,int ,int ) ;
 int FUNC_5 (struct sun6i_csi_dev*,int ,scalar_t__) ;
 int FUNC_6 (int ,int ,int*) ;
 int FUNC_7 (int ,int ,int) ;

__attribute__((used)) static void FUNC_8(struct sun6i_csi_dev *VAR_12)
{
 struct sun6i_csi *VAR_13 = &VAR_12->csi;
 u32 VAR_14;
 u32 VAR_15;

 FUNC_6(VAR_12->regmap, VAR_8, &VAR_14);

 VAR_14 &= ~(VAR_5 |
   VAR_7 | VAR_9 |
   VAR_4 | VAR_3 |
   VAR_6);

 VAR_15 = FUNC_3(VAR_12, VAR_13->config.code,
       VAR_13->config.pixelformat);
 VAR_14 |= FUNC_0(VAR_15);

 VAR_15 = FUNC_5(VAR_12, VAR_13->config.pixelformat,
        VAR_13->config.field);
 VAR_14 |= FUNC_2(VAR_15);

 VAR_15 = FUNC_4(VAR_12, VAR_13->config.code,
    VAR_13->config.pixelformat);
 VAR_14 |= FUNC_1(VAR_15);

 if (VAR_13->config.field == VAR_11)
  VAR_14 |= VAR_1;
 else if (VAR_13->config.field == VAR_10)
  VAR_14 |= VAR_2;
 else
  VAR_14 |= VAR_0;

 FUNC_7(VAR_12->regmap, VAR_8, VAR_14);
}
