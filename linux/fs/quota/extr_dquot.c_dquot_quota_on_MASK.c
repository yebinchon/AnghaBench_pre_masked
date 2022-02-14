
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct path {TYPE_1__* dentry; } ;
struct TYPE_3__ {struct super_block* d_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int,int,int) ;

int FUNC_3(struct super_block *VAR_3, int VAR_4, int VAR_5,
     const struct path *VAR_6)
{
 int VAR_7 = FUNC_1(VAR_6->dentry);
 if (VAR_7)
  return VAR_7;

 if (VAR_6->dentry->d_sb != VAR_3)
  VAR_7 = -VAR_2;
 else
  VAR_7 = FUNC_2(FUNC_0(VAR_6->dentry), VAR_4,
          VAR_5, VAR_1 |
          VAR_0);
 return VAR_7;
}
