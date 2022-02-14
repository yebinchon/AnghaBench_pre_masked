
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct path {int mnt; int dentry; } ;
struct ovl_entry {int numlower; TYPE_2__* lowerstack; } ;
struct dentry {struct ovl_entry* d_fsdata; } ;
struct TYPE_4__ {TYPE_1__* layer; int dentry; } ;
struct TYPE_3__ {int mnt; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct dentry*,struct path*) ;

int FUNC_2(int VAR_0, struct dentry *VAR_1, struct path *VAR_2)
{
 struct ovl_entry *VAR_3 = VAR_1->d_fsdata;

 FUNC_0(VAR_0 < 0);
 if (VAR_0 == 0) {
  FUNC_1(VAR_1, VAR_2);
  if (VAR_2->dentry)
   return VAR_3->numlower ? 1 : -1;
  VAR_0++;
 }
 FUNC_0(VAR_0 > VAR_3->numlower);
 VAR_2->dentry = VAR_3->lowerstack[VAR_0 - 1].dentry;
 VAR_2->mnt = VAR_3->lowerstack[VAR_0 - 1].layer->mnt;

 return (VAR_0 < VAR_3->numlower) ? VAR_0 + 1 : -1;
}
