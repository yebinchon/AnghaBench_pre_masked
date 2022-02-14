
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {int dummy; } ;
typedef int buf ;
struct TYPE_2__ {int i_nlink; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct dentry*) ;
 int FUNC_1 (char*,int,int*) ;
 int FUNC_2 (char*,struct dentry*,int) ;
 int FUNC_3 (struct dentry*,int ,char**,int) ;

unsigned int FUNC_4(struct dentry *VAR_1,
      struct dentry *VAR_2,
      unsigned int VAR_3)
{
 int VAR_4;
 int VAR_5;
 char VAR_6[13];
 int VAR_7;

 if (!VAR_1 || !VAR_2 || FUNC_0(VAR_1)->i_nlink == 1)
  return VAR_3;

 VAR_7 = FUNC_3(VAR_2, VAR_0, &VAR_6, sizeof(VAR_6) - 1);
 if (VAR_7 < 0)
  goto fail;

 VAR_6[VAR_7] = '\0';
 if ((VAR_6[0] != 'L' && VAR_6[0] != 'U') ||
     (VAR_6[1] != '+' && VAR_6[1] != '-'))
  goto fail;

 VAR_7 = FUNC_1(VAR_6 + 1, 10, &VAR_4);
 if (VAR_7 < 0)
  goto fail;

 VAR_5 = FUNC_0(VAR_6[0] == 'L' ? VAR_1 : VAR_2)->i_nlink;
 VAR_5 += VAR_4;

 if (VAR_5 <= 0)
  goto fail;

 return VAR_5;

fail:
 FUNC_2("overlayfs: failed to get index nlink (%pd2, err=%i)\n",
       VAR_2, VAR_7);
 return VAR_3;
}
