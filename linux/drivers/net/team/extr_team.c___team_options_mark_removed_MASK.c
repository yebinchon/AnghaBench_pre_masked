
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct team_option {int name; } ;
struct team {int dummy; } ;


 struct team_option* FUNC_0 (struct team*,int ) ;
 int FUNC_1 (struct team*,struct team_option*) ;

__attribute__((used)) static void FUNC_2(struct team *VAR_0,
     const struct team_option *VAR_1,
     size_t VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++, VAR_1++) {
  struct team_option *VAR_4;

  VAR_4 = FUNC_0(VAR_0, VAR_1->name);
  if (VAR_4)
   FUNC_1(VAR_0, VAR_4);
 }
}
