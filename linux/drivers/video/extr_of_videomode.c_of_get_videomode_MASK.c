
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videomode {int dummy; } ;
struct display_timings {int native_mode; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct display_timings*) ;
 struct display_timings* FUNC_1 (struct device_node*) ;
 int FUNC_2 (char*,struct device_node*) ;
 int FUNC_3 (struct display_timings*,struct videomode*,int) ;

int FUNC_4(struct device_node *VAR_2, struct videomode *VAR_3,
       int VAR_4)
{
 struct display_timings *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_2);
 if (!VAR_5) {
  FUNC_2("%pOF: no timings specified\n", VAR_2);
  return -VAR_0;
 }

 if (VAR_4 == VAR_1)
  VAR_4 = VAR_5->native_mode;

 VAR_6 = FUNC_3(VAR_5, VAR_3, VAR_4);

 FUNC_0(VAR_5);

 return VAR_6;
}
