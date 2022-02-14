
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct q6v5_wcss {void* wcss_q6_reset; struct device* dev; void* wcss_reset; void* wcss_aon_reset; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct device*,char*) ;
 void* FUNC_3 (struct device*,char*) ;

__attribute__((used)) static int FUNC_4(struct q6v5_wcss *VAR_0)
{
 struct device *VAR_1 = VAR_0->dev;

 VAR_0->wcss_aon_reset = FUNC_3(VAR_1, "wcss_aon_reset");
 if (FUNC_0(VAR_0->wcss_aon_reset)) {
  FUNC_2(VAR_0->dev, "unable to acquire wcss_aon_reset\n");
  return FUNC_1(VAR_0->wcss_aon_reset);
 }

 VAR_0->wcss_reset = FUNC_3(VAR_1, "wcss_reset");
 if (FUNC_0(VAR_0->wcss_reset)) {
  FUNC_2(VAR_0->dev, "unable to acquire wcss_reset\n");
  return FUNC_1(VAR_0->wcss_reset);
 }

 VAR_0->wcss_q6_reset = FUNC_3(VAR_1, "wcss_q6_reset");
 if (FUNC_0(VAR_0->wcss_q6_reset)) {
  FUNC_2(VAR_0->dev, "unable to acquire wcss_q6_reset\n");
  return FUNC_1(VAR_0->wcss_q6_reset);
 }

 return 0;
}
