
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ovl_entry {unsigned int numlower; TYPE_2__* lowerstack; } ;
struct dentry {int d_flags; TYPE_1__* d_op; struct ovl_entry* d_fsdata; } ;
struct TYPE_4__ {struct dentry* dentry; } ;
struct TYPE_3__ {int (* d_revalidate ) (struct dentry*,unsigned int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct dentry *VAR_3, unsigned int VAR_4)
{
 struct ovl_entry *VAR_5 = VAR_3->d_fsdata;
 unsigned int VAR_6;
 int VAR_7 = 1;

 for (VAR_6 = 0; VAR_6 < VAR_5->numlower; VAR_6++) {
  struct dentry *VAR_8 = VAR_5->lowerstack[VAR_6].dentry;

  if (VAR_8->d_flags & VAR_0) {
   VAR_7 = VAR_8->d_op->d_revalidate(VAR_8, VAR_4);
   if (VAR_7 < 0)
    return VAR_7;
   if (!VAR_7) {
    if (!(VAR_4 & VAR_2))
     FUNC_0(VAR_8);
    return -VAR_1;
   }
  }
 }
 return 1;
}
