
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ubifs_znode {size_t iip; TYPE_1__* parent; } ;
struct ubifs_zbranch {scalar_t__ len; scalar_t__ offs; scalar_t__ lnum; } ;
struct TYPE_4__ {scalar_t__ len; scalar_t__ offs; scalar_t__ lnum; } ;
struct ubifs_info {TYPE_2__ zroot; } ;
struct TYPE_3__ {struct ubifs_zbranch* zbranch; } ;


 int FUNC_0 (struct ubifs_info*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct ubifs_info *VAR_0,
     struct ubifs_znode *VAR_1)
{
 int VAR_2;

 if (VAR_1->parent) {
  struct ubifs_zbranch *VAR_3;

  VAR_3 = &VAR_1->parent->zbranch[VAR_1->iip];
  if (VAR_3->len) {
   VAR_2 = FUNC_0(VAR_0, VAR_3->lnum, VAR_3->offs);
   if (VAR_2)
    return VAR_2;
   VAR_3->lnum = 0;
   VAR_3->offs = 0;
   VAR_3->len = 0;
  }
 } else
  if (VAR_0->zroot.len) {
   VAR_2 = FUNC_0(VAR_0, VAR_0->zroot.lnum, VAR_0->zroot.offs);
   if (VAR_2)
    return VAR_2;
   VAR_0->zroot.lnum = 0;
   VAR_0->zroot.offs = 0;
   VAR_0->zroot.len = 0;
  }
 return 0;
}
