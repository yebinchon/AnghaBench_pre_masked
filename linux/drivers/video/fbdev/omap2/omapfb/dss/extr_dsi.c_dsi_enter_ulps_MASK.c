
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct dsi_data {int ulps_enabled; int num_lanes_supported; TYPE_1__* lanes; } ;
struct TYPE_2__ {scalar_t__ function; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_5 ;
 int FUNC_3 (struct platform_device*,int ,unsigned int,int,int) ;
 scalar_t__ FUNC_4 (struct platform_device*,int ,int,int) ;
 int FUNC_5 (int) ;
 int VAR_6 ;
 int FUNC_6 (struct platform_device*) ;
 int FUNC_7 (struct platform_device*,int ) ;
 int VAR_7 ;
 int FUNC_8 (struct platform_device*) ;
 struct dsi_data* FUNC_9 (struct platform_device*) ;
 int FUNC_10 (struct platform_device*,int) ;
 int FUNC_11 (struct platform_device*,int ) ;
 int FUNC_12 (struct platform_device*,int ,int *,int ) ;
 int FUNC_13 (struct platform_device*,int) ;
 int FUNC_14 (struct platform_device*,int ,int *,int ) ;
 int FUNC_15 (struct platform_device*,int,int) ;
 int FUNC_16 (int) ;
 scalar_t__ FUNC_17 (int *,int ) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_8)
{
 struct dsi_data *VAR_9 = FUNC_9(VAR_8);
 FUNC_0(VAR_6);
 int VAR_10, VAR_11;
 unsigned VAR_12;

 FUNC_1("Entering ULPS");

 FUNC_5(!FUNC_6(VAR_8));

 FUNC_5(VAR_9->ulps_enabled);

 if (VAR_9->ulps_enabled)
  return 0;


 if (FUNC_4(VAR_8, VAR_1, 13, 13)) {
  FUNC_10(VAR_8, 0);
  FUNC_3(VAR_8, VAR_1, 0, 13, 13);
  FUNC_10(VAR_8, 1);
 }

 FUNC_13(VAR_8, 0);
 FUNC_13(VAR_8, 1);
 FUNC_13(VAR_8, 2);
 FUNC_13(VAR_8, 3);

 FUNC_8(VAR_8);

 FUNC_15(VAR_8, 0, 0);
 FUNC_15(VAR_8, 1, 0);
 FUNC_15(VAR_8, 2, 0);
 FUNC_15(VAR_8, 3, 0);

 if (FUNC_4(VAR_8, VAR_2, 16, 16)) {
  FUNC_2("HS busy when enabling ULPS\n");
  return -VAR_5;
 }

 if (FUNC_4(VAR_8, VAR_2, 17, 17)) {
  FUNC_2("LP busy when enabling ULPS\n");
  return -VAR_5;
 }

 VAR_10 = FUNC_12(VAR_8, VAR_7, &VAR_6,
   VAR_0);
 if (VAR_10)
  return VAR_10;

 VAR_12 = 0;

 for (VAR_11 = 0; VAR_11 < VAR_9->num_lanes_supported; ++VAR_11) {
  if (VAR_9->lanes[VAR_11].function == VAR_4)
   continue;
  VAR_12 |= 1 << VAR_11;
 }


 FUNC_3(VAR_8, VAR_2, VAR_12, 9, 5);


 FUNC_11(VAR_8, VAR_2);

 if (FUNC_17(&VAR_6,
    FUNC_16(1000)) == 0) {
  FUNC_2("ULPS enable timeout\n");
  VAR_10 = -VAR_5;
  goto err;
 }

 FUNC_14(VAR_8, VAR_7, &VAR_6,
   VAR_0);


 FUNC_3(VAR_8, VAR_2, 0, 9, 5);


 FUNC_11(VAR_8, VAR_2);

 FUNC_7(VAR_8, VAR_3);

 FUNC_10(VAR_8, 0);

 VAR_9->ulps_enabled = 1;

 return 0;

err:
 FUNC_14(VAR_8, VAR_7, &VAR_6,
   VAR_0);
 return VAR_10;
}
