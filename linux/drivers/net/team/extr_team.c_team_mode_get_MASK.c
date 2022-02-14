
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct team_mode_item {struct team_mode* mode; } ;
struct team_mode {int owner; } ;


 struct team_mode_item* FUNC_0 (char const*) ;
 int VAR_0 ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static const struct team_mode *FUNC_5(const char *VAR_1)
{
 struct team_mode_item *VAR_2;
 const struct team_mode *VAR_3 = ((void*)0);

 FUNC_2(&VAR_0);
 VAR_2 = FUNC_0(VAR_1);
 if (!VAR_2) {
  FUNC_3(&VAR_0);
  FUNC_1("team-mode-%s", VAR_1);
  FUNC_2(&VAR_0);
  VAR_2 = FUNC_0(VAR_1);
 }
 if (VAR_2) {
  VAR_3 = VAR_2->mode;
  if (!FUNC_4(VAR_3->owner))
   VAR_3 = ((void*)0);
 }

 FUNC_3(&VAR_0);
 return VAR_3;
}
