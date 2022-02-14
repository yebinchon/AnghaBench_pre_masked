
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fs_context {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* parse_monolithic ) (struct fs_context*,void*) ;} ;


 int FUNC_0 (struct fs_context*,void*) ;

int FUNC_1(struct fs_context *VAR_0, void *VAR_1)
{
 int (*VAR_2)(struct fs_context *, void *);

 VAR_2 = VAR_0->ops->parse_monolithic;
 if (!VAR_2)
  VAR_2 = FUNC_0;

 return VAR_2(VAR_0, VAR_1);
}
