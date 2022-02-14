
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ux500_wdt_data {scalar_t__ timeout; scalar_t__ has_28_bits_resolution; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_4__ {struct device* parent; int max_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ux500_wdt_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_5 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 int VAR_8;
 struct ux500_wdt_data *VAR_9 = FUNC_0(VAR_7);

 if (VAR_9) {
  if (VAR_9->timeout > 0)
   VAR_4 = VAR_9->timeout;
  if (VAR_9->has_28_bits_resolution)
   VAR_5.max_timeout = VAR_2;
 }

 VAR_5.parent = VAR_7;
 FUNC_5(&VAR_5, VAR_3);


 FUNC_3(VAR_1, 0);


 FUNC_4(VAR_0, VAR_4 * 1000);

 VAR_8 = FUNC_2(VAR_7, &VAR_5);
 if (VAR_8)
  return VAR_8;

 FUNC_1(VAR_7, "initialized\n");

 return 0;
}
