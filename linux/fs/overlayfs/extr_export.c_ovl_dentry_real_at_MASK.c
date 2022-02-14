
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ovl_entry {int numlower; TYPE_2__* lowerstack; } ;
struct dentry {struct ovl_entry* d_fsdata; } ;
struct TYPE_4__ {struct dentry* dentry; TYPE_1__* layer; } ;
struct TYPE_3__ {int idx; } ;


 struct dentry* FUNC_0 (struct dentry*) ;

__attribute__((used)) static struct dentry *FUNC_1(struct dentry *VAR_0, int VAR_1)
{
 struct ovl_entry *VAR_2 = VAR_0->d_fsdata;
 int VAR_3;

 if (!VAR_1)
  return FUNC_0(VAR_0);

 for (VAR_3 = 0; VAR_3 < VAR_2->numlower; VAR_3++) {
  if (VAR_2->lowerstack[VAR_3].layer->idx == VAR_1)
   return VAR_2->lowerstack[VAR_3].dentry;
 }

 return ((void*)0);
}
