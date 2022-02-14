
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reset_control {int dummy; } ;
struct device {scalar_t__ of_node; } ;


 int VAR_0 ;
 struct reset_control* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 struct reset_control* FUNC_2 (scalar_t__,char const*,int,int,int,int) ;
 struct reset_control* FUNC_3 (struct device*,char const*,int,int,int) ;

struct reset_control *FUNC_4(struct device *VAR_1, const char *VAR_2,
       int VAR_3, bool VAR_4, bool VAR_5,
       bool VAR_6)
{
 if (FUNC_1(VAR_4 && VAR_6))
  return FUNC_0(-VAR_0);

 if (VAR_1->of_node)
  return FUNC_2(VAR_1->of_node, VAR_2, VAR_3, VAR_4,
           VAR_5, VAR_6);

 return FUNC_3(VAR_1, VAR_2, VAR_4, VAR_5,
            VAR_6);
}
