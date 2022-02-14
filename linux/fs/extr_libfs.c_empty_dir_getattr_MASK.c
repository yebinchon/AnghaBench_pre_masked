
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct path {int dentry; } ;
struct kstat {int dummy; } ;
struct inode {int dummy; } ;


 struct inode* FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,struct kstat*) ;

__attribute__((used)) static int FUNC_2(const struct path *VAR_0, struct kstat *VAR_1,
        u32 VAR_2, unsigned int VAR_3)
{
 struct inode *VAR_4 = FUNC_0(VAR_0->dentry);
 FUNC_1(VAR_4, VAR_1);
 return 0;
}
