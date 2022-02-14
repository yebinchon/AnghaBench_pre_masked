
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct team_option {int dummy; } ;
struct team {int dummy; } ;


 int FUNC_0 (struct team*) ;
 int FUNC_1 (struct team*,struct team_option const*,size_t) ;

int FUNC_2(struct team *VAR_0,
     const struct team_option *VAR_1,
     size_t VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;
 FUNC_0(VAR_0);
 return 0;
}
