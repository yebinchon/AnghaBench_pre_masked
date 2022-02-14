
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl4030_audio_data {scalar_t__ vibra; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (struct device_node*,char*,int*) ;

__attribute__((used)) static bool FUNC_1(struct twl4030_audio_data *VAR_0,
         struct device_node *VAR_1)
{
 int VAR_2;

 if (VAR_0 && VAR_0->vibra)
  return 1;

 if (!FUNC_0(VAR_1, "ti,enable-vibra", &VAR_2) && VAR_2)
  return 1;

 return 0;
}
