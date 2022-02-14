
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct inode {int dummy; } ;
typedef scalar_t__ loff_t ;


 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,void const*,int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, const void *VAR_1,
     u64 VAR_2, int VAR_3)
{
 loff_t VAR_4 = FUNC_0(VAR_0) + (VAR_2 << VAR_3);

 return FUNC_1(VAR_0, VAR_1, 1 << VAR_3, VAR_4);
}
