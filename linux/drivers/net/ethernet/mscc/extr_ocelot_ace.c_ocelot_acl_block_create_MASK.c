
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocelot_acl_block {struct ocelot* ocelot; scalar_t__ count; int rules; } ;
struct ocelot {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct ocelot_acl_block* FUNC_1 (int,int ) ;

__attribute__((used)) static struct ocelot_acl_block *FUNC_2(struct ocelot *VAR_1)
{
 struct ocelot_acl_block *VAR_2;

 VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 FUNC_0(&VAR_2->rules);
 VAR_2->count = 0;
 VAR_2->ocelot = VAR_1;

 return VAR_2;
}
