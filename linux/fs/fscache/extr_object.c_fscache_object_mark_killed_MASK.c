
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fscache_object {TYPE_1__* cache; int flags; } ;
typedef enum fscache_why_object_killed { ____Placeholder_fscache_why_object_killed } fscache_why_object_killed ;
struct TYPE_2__ {int identifier; } ;



 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;

void FUNC_3(struct fscache_object *VAR_5,
    enum fscache_why_object_killed VAR_6)
{
 if (FUNC_2(VAR_0, &VAR_5->flags)) {
  FUNC_1("Error: Object already killed by cache [%s]\n",
         VAR_5->cache->identifier);
  return;
 }

 switch (VAR_6) {
 case 130:
  FUNC_0(&VAR_2);
  break;
 case 131:
  FUNC_0(&VAR_4);
  break;
 case 128:
  FUNC_0(&VAR_3);
  break;
 case 129:
  FUNC_0(&VAR_1);
  break;
 }
}
