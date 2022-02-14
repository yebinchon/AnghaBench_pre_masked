
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pl172_data {int rate; int base; } ;
struct device_node {int dummy; } ;
struct amba_device {int dev; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct pl172_data* FUNC_1 (struct amba_device*) ;
 int FUNC_2 (int *,char*,char const*,scalar_t__) ;
 int FUNC_3 (int *,char*,char const*) ;
 int FUNC_4 (struct device_node const*,char const*,int*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct amba_device *VAR_2,
        const struct device_node *VAR_3, const char *VAR_4,
        u32 VAR_5, u32 VAR_6, int VAR_7)
{
 struct pl172_data *VAR_8 = FUNC_1(VAR_2);
 int VAR_9;
 u32 VAR_10;

 if (!FUNC_4(VAR_3, VAR_4, &VAR_10)) {
  VAR_9 = FUNC_0(VAR_10 * VAR_8->rate, VAR_1) - VAR_7;
  if (VAR_9 < 0) {
   VAR_9 = 0;
  } else if (VAR_9 > VAR_6) {
   FUNC_3(&VAR_2->dev, "%s timing too tight\n", VAR_4);
   return -VAR_0;
  }

  FUNC_6(VAR_9, VAR_8->base + VAR_5);
 }

 FUNC_2(&VAR_2->dev, "%s: %u cycle(s)\n", VAR_4, VAR_7 +
    FUNC_5(VAR_8->base + VAR_5));

 return 0;
}
