
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct team_option {int per_port; } ;
struct team {int dummy; } ;


 int FUNC_0 (struct team*,struct team_option*,int *) ;
 int FUNC_1 (struct team*,struct team_option*) ;

__attribute__((used)) static int FUNC_2(struct team *VAR_0,
      struct team_option *VAR_1)
{
 int VAR_2;

 if (!VAR_1->per_port) {
  VAR_2 = FUNC_0(VAR_0, VAR_1, ((void*)0));
  if (VAR_2)
   goto inst_del_option;
 }
 return 0;

inst_del_option:
 FUNC_1(VAR_0, VAR_1);
 return VAR_2;
}
