
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mux_control {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct mux_control* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct mux_control*) ;
 int VAR_2 ;
 int FUNC_2 (struct device*,struct mux_control**) ;
 struct mux_control** FUNC_3 (int ,int,int ) ;
 int FUNC_4 (struct mux_control**) ;
 struct mux_control* FUNC_5 (struct device*,char const*) ;

struct mux_control *FUNC_6(struct device *VAR_3,
      const char *VAR_4)
{
 struct mux_control **VAR_5, *VAR_6;

 VAR_5 = FUNC_3(VAR_2, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_6 = FUNC_5(VAR_3, VAR_4);
 if (FUNC_1(VAR_6)) {
  FUNC_4(VAR_5);
  return VAR_6;
 }

 *VAR_5 = VAR_6;
 FUNC_2(VAR_3, VAR_5);

 return VAR_6;
}
