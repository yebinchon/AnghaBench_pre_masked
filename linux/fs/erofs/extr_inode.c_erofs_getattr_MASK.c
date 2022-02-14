
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct path {int dentry; } ;
struct kstat {int attributes; int attributes_mask; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int datalayout; } ;


 TYPE_1__* FUNC_0 (struct inode* const) ;
 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct inode* const,struct kstat*) ;

int FUNC_4(const struct path *VAR_2, struct kstat *VAR_3,
    u32 VAR_4, unsigned int VAR_5)
{
 struct inode *const VAR_6 = FUNC_1(VAR_2->dentry);

 if (FUNC_2(FUNC_0(VAR_6)->datalayout))
  VAR_3->attributes |= VAR_0;

 VAR_3->attributes |= VAR_1;
 VAR_3->attributes_mask |= (VAR_0 |
      VAR_1);

 FUNC_3(VAR_6, VAR_3);
 return 0;
}
