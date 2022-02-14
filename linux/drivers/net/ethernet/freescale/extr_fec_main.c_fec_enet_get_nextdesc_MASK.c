
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufdesc_prop {int dsize; struct bufdesc* base; struct bufdesc* last; } ;
struct bufdesc {int dummy; } ;



__attribute__((used)) static struct bufdesc *FUNC_0(struct bufdesc *VAR_0,
          struct bufdesc_prop *VAR_1)
{
 return (VAR_0 >= VAR_1->last) ? VAR_1->base
   : (struct bufdesc *)(((void *)VAR_0) + VAR_1->dsize);
}
