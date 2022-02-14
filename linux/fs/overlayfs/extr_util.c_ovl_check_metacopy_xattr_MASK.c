
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {int dummy; } ;
struct TYPE_2__ {int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct dentry*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct dentry*,int ,int *,int ) ;

int FUNC_4(struct dentry *VAR_3)
{
 int VAR_4;


 if (!FUNC_0(FUNC_1(VAR_3)->i_mode))
  return 0;

 VAR_4 = FUNC_3(VAR_3, VAR_2, ((void*)0), 0);
 if (VAR_4 < 0) {
  if (VAR_4 == -VAR_0 || VAR_4 == -VAR_1)
   return 0;
  goto out;
 }

 return 1;
out:
 FUNC_2("overlayfs: failed to get metacopy (%i)\n", VAR_4);
 return VAR_4;
}
