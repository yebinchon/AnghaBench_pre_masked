
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lp3943_pwm_map {int* output; int num_outputs; } ;
struct lp3943_pwm {struct lp3943_platform_data* pdata; } ;
struct lp3943_platform_data {struct lp3943_pwm_map** pwms; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
typedef enum lp3943_pwm_output { ____Placeholder_lp3943_pwm_output } lp3943_pwm_output ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* FUNC_0 (struct device*,int,int,int ) ;
 void* FUNC_1 (struct device*,int,int ) ;
 int FUNC_2 (struct device_node*,char const* const,int*) ;
 int FUNC_3 (struct device_node*,char const* const,int*,int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_5,
          struct lp3943_pwm *VAR_6)
{
 static const char * const VAR_7[] = { "ti,pwm0", "ti,pwm1", };
 struct device_node *VAR_8 = VAR_5->of_node;
 struct lp3943_platform_data *VAR_9;
 struct lp3943_pwm_map *VAR_10;
 enum lp3943_pwm_output *VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15 = 0;
 u32 VAR_16;

 if (!VAR_8)
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_5, sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_2;






 for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
  if (!FUNC_2(VAR_8, VAR_7[VAR_12], &VAR_14))
   continue;

  VAR_16 = VAR_14 / sizeof(u32);
  if (VAR_16 == 0)
   continue;

  VAR_11 = FUNC_0(VAR_5, VAR_16, sizeof(*VAR_11),
          VAR_3);
  if (!VAR_11)
   return -VAR_2;

  VAR_13 = FUNC_3(VAR_8, VAR_7[VAR_12], VAR_11,
       VAR_16);
  if (VAR_13)
   return VAR_13;

  VAR_10 = FUNC_1(VAR_5, sizeof(*VAR_10), VAR_3);
  if (!VAR_10)
   return -VAR_2;

  VAR_10->output = VAR_11;
  VAR_10->num_outputs = VAR_16;
  VAR_9->pwms[VAR_12] = VAR_10;

  VAR_15++;
 }

 if (VAR_15 == 0)
  return -VAR_1;

 VAR_6->pdata = VAR_9;
 return 0;
}
