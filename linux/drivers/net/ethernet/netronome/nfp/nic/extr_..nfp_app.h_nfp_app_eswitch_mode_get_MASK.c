
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct nfp_app {TYPE_1__* type; } ;
struct TYPE_2__ {int (* eswitch_mode_get ) (struct nfp_app*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct nfp_app*) ;

__attribute__((used)) static inline int FUNC_1(struct nfp_app *VAR_1, u16 *VAR_2)
{
 if (!VAR_1->type->eswitch_mode_get)
  return -VAR_0;

 *VAR_2 = VAR_1->type->eswitch_mode_get(VAR_1);

 return 0;
}
