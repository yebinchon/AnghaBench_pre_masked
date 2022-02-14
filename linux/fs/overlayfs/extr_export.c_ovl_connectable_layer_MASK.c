
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ovl_entry {int numlower; TYPE_3__* lowerstack; } ;
struct dentry {TYPE_1__* d_sb; } ;
struct TYPE_6__ {TYPE_2__* layer; } ;
struct TYPE_5__ {int idx; } ;
struct TYPE_4__ {struct dentry* s_root; } ;


 struct ovl_entry* FUNC_0 (struct dentry*) ;
 int VAR_0 ;
 int FUNC_1 (struct dentry*) ;
 scalar_t__ FUNC_2 (struct dentry*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct dentry *VAR_1)
{
 struct ovl_entry *VAR_2 = FUNC_0(VAR_1);


 if (VAR_1 == VAR_1->d_sb->s_root)
  return VAR_2->numlower;





 if (FUNC_2(VAR_1) &&
     !FUNC_3(VAR_0, FUNC_1(VAR_1)))
  return 0;


 return VAR_2->lowerstack[0].layer->idx;
}
