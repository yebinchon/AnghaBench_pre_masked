
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ovl_entry {int numlower; TYPE_1__* lowerstack; } ;
struct dentry {struct ovl_entry* d_fsdata; } ;
struct TYPE_2__ {struct dentry* dentry; } ;



struct dentry *FUNC_0(struct dentry *VAR_0)
{
 struct ovl_entry *VAR_1 = VAR_0->d_fsdata;

 return VAR_1->numlower ? VAR_1->lowerstack[VAR_1->numlower - 1].dentry : ((void*)0);
}
