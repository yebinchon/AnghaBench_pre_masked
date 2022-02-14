
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_gen3_chan {int is_otg_channel; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
typedef enum phy_mode { ____Placeholder_phy_mode } phy_mode ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct rcar_gen3_chan* FUNC_0 (struct device*) ;
 int FUNC_1 (struct rcar_gen3_chan*) ;
 int FUNC_2 (struct rcar_gen3_chan*) ;
 int FUNC_3 (struct rcar_gen3_chan*) ;
 int FUNC_4 (struct rcar_gen3_chan*) ;
 int FUNC_5 (struct rcar_gen3_chan*) ;
 int FUNC_6 (struct rcar_gen3_chan*) ;
 int FUNC_7 (struct rcar_gen3_chan*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char const*,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_4, struct device_attribute *VAR_5,
     const char *VAR_6, size_t VAR_7)
{
 struct rcar_gen3_chan *VAR_8 = FUNC_0(VAR_4);
 bool VAR_9;
 enum phy_mode VAR_10, VAR_11;

 if (!VAR_8->is_otg_channel || !FUNC_7(VAR_8))
  return -VAR_1;

 if (!FUNC_9(VAR_6, "host", FUNC_8("host")))
  VAR_11 = VAR_3;
 else if (!FUNC_9(VAR_6, "peripheral", FUNC_8("peripheral")))
  VAR_11 = VAR_2;
 else
  return -VAR_0;


 VAR_9 = FUNC_1(VAR_8);
 VAR_10 = FUNC_2(VAR_8);


 if (VAR_10 == VAR_11)
  return -VAR_0;

 if (VAR_11 == VAR_3) {
  if (!VAR_9)
   FUNC_6(VAR_8);
  else
   FUNC_4(VAR_8);
 } else {
  if (!VAR_9)
   FUNC_3(VAR_8);
  else
   FUNC_5(VAR_8);
 }

 return VAR_7;
}
