
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reset_control {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct reset_control* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct reset_control*) ;
 struct reset_control* FUNC_2 (struct device*,char const*,int,int,int,int) ;
 int VAR_2 ;
 int FUNC_3 (struct device*,struct reset_control**) ;
 struct reset_control** FUNC_4 (int ,int,int ) ;
 int FUNC_5 (struct reset_control**) ;

struct reset_control *FUNC_6(struct device *VAR_3,
         const char *VAR_4, int VAR_5, bool VAR_6,
         bool VAR_7, bool VAR_8)
{
 struct reset_control **VAR_9, *VAR_10;

 VAR_9 = FUNC_4(VAR_2, sizeof(*VAR_9),
      VAR_1);
 if (!VAR_9)
  return FUNC_0(-VAR_0);

 VAR_10 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
 if (!FUNC_1(VAR_10)) {
  *VAR_9 = VAR_10;
  FUNC_3(VAR_3, VAR_9);
 } else {
  FUNC_5(VAR_9);
 }

 return VAR_10;
}
