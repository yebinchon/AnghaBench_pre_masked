
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_gen3_chan {int is_otg_channel; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct rcar_gen3_chan* FUNC_0 (struct device*) ;
 int FUNC_1 (struct rcar_gen3_chan*) ;
 scalar_t__ FUNC_2 (struct rcar_gen3_chan*) ;
 int FUNC_3 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1, struct device_attribute *VAR_2,
    char *VAR_3)
{
 struct rcar_gen3_chan *VAR_4 = FUNC_0(VAR_1);

 if (!VAR_4->is_otg_channel || !FUNC_1(VAR_4))
  return -VAR_0;

 return FUNC_3(VAR_3, "%s\n", FUNC_2(VAR_4) ? "host" :
           "peripheral");
}
