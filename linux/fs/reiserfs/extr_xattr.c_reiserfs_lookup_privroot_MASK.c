
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct super_block {struct dentry* s_root; } ;
struct dentry {int dummy; } ;
struct TYPE_6__ {struct dentry* priv_root; } ;
struct TYPE_5__ {int i_flags; } ;


 int FUNC_0 (struct dentry*) ;
 int VAR_0 ;
 int FUNC_1 (struct dentry*) ;
 TYPE_4__* FUNC_2 (struct super_block*) ;
 int VAR_1 ;
 TYPE_1__* FUNC_3 (struct dentry*) ;
 scalar_t__ FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct dentry*,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 struct dentry* FUNC_8 (int ,struct dentry*,int ) ;
 int FUNC_9 (int ) ;
 int VAR_2 ;

int FUNC_10(struct super_block *VAR_3)
{
 struct dentry *VAR_4;
 int VAR_5 = 0;


 FUNC_6(FUNC_3(VAR_3->s_root));
 VAR_4 = FUNC_8(VAR_0, VAR_3->s_root,
    FUNC_9(VAR_0));
 if (!FUNC_0(VAR_4)) {
  FUNC_2(VAR_3)->priv_root = VAR_4;
  FUNC_5(VAR_4, &VAR_2);
  if (FUNC_4(VAR_4))
   FUNC_3(VAR_4)->i_flags |= VAR_1;
 } else
  VAR_5 = FUNC_1(VAR_4);
 FUNC_7(FUNC_3(VAR_3->s_root));

 return VAR_5;
}
