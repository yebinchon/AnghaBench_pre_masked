
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_2__ {int mnt_sb; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,int *,int ) ;
 struct inode* FUNC_1 (int ) ;
 TYPE_1__* VAR_1 ;

struct inode *FUNC_2(void)
{
 struct inode *VAR_2;

 VAR_2 = FUNC_1(VAR_1->mnt_sb);
 if (VAR_2)
  FUNC_0(VAR_2, ((void*)0), VAR_0);

 return VAR_2;
}
