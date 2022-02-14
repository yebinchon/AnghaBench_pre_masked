
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dentry {TYPE_1__* d_sb; } ;
struct TYPE_8__ {TYPE_3__* lowerstack; } ;
struct TYPE_7__ {TYPE_2__* layer; } ;
struct TYPE_6__ {int idx; } ;
struct TYPE_5__ {struct dentry* s_root; } ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (struct dentry*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct dentry*) ;
 struct dentry* FUNC_3 (struct dentry*) ;
 struct dentry* FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (struct dentry*) ;
 int FUNC_8 (int ,struct dentry*) ;
 scalar_t__ FUNC_9 (int ,struct dentry*) ;
 int FUNC_10 (struct dentry*) ;
 scalar_t__ FUNC_11 (int ,int ) ;

__attribute__((used)) static int FUNC_12(struct dentry *VAR_3)
{
 struct dentry *VAR_4, *VAR_5 = ((void*)0);
 int VAR_6;
 int VAR_7 = 0;

 if (FUNC_1(VAR_3 == VAR_3->d_sb->s_root) ||
     FUNC_1(!FUNC_7(VAR_3)))
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_3)->lowerstack[0].layer->idx;
 if (FUNC_9(VAR_1, VAR_3))
  return VAR_6;


 VAR_4 = FUNC_3(VAR_3);
 for (;;) {
  VAR_5 = FUNC_4(VAR_4);
  if (FUNC_1(VAR_5 == VAR_4)) {
   VAR_7 = -VAR_0;
   break;
  }





  if (FUNC_6(VAR_5) < VAR_6) {
   VAR_7 = FUNC_10(VAR_4);
   break;
  }


  if (FUNC_9(VAR_1, VAR_5) ||
      FUNC_11(VAR_2, FUNC_2(VAR_5)))
   break;

  FUNC_5(VAR_4);
  VAR_4 = VAR_5;
 }

 FUNC_5(VAR_5);
 FUNC_5(VAR_4);

 if (!VAR_7)
  FUNC_8(VAR_1, VAR_3);

 return VAR_7 ?: VAR_6;
}
