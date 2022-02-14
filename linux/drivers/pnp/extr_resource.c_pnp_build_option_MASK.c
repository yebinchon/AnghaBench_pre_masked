
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnp_option {unsigned int flags; unsigned long type; int list; } ;
struct pnp_dev {int options; } ;


 int VAR_0 ;
 struct pnp_option* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static struct pnp_option *FUNC_2(struct pnp_dev *VAR_1, unsigned long VAR_2,
        unsigned int VAR_3)
{
 struct pnp_option *VAR_4;

 VAR_4 = FUNC_0(sizeof(struct pnp_option), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->flags = VAR_3;
 VAR_4->type = VAR_2;

 FUNC_1(&VAR_4->list, &VAR_1->options);
 return VAR_4;
}
