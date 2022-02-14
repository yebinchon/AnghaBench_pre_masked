
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ovl_entry {unsigned int numlower; TYPE_2__* lowerstack; } ;
struct dentry {int d_flags; TYPE_1__* d_op; struct ovl_entry* d_fsdata; } ;
struct TYPE_4__ {struct dentry* dentry; } ;
struct TYPE_3__ {int (* d_weak_revalidate ) (struct dentry*,unsigned int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct dentry *VAR_1, unsigned int VAR_2)
{
 struct ovl_entry *VAR_3 = VAR_1->d_fsdata;
 unsigned int VAR_4;
 int VAR_5 = 1;

 for (VAR_4 = 0; VAR_4 < VAR_3->numlower; VAR_4++) {
  struct dentry *VAR_6 = VAR_3->lowerstack[VAR_4].dentry;

  if (VAR_6->d_flags & VAR_0) {
   VAR_5 = VAR_6->d_op->d_weak_revalidate(VAR_6, VAR_2);
   if (VAR_5 <= 0)
    break;
  }
 }
 return VAR_5;
}
