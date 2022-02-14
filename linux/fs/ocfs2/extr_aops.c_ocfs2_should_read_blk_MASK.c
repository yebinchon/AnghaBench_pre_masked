
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct page {int dummy; } ;
struct inode {int i_sb; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct page*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_0, struct page *VAR_1,
     unsigned int VAR_2)
{
 u64 VAR_3 = FUNC_3(VAR_1) + VAR_2;

 if (FUNC_2(FUNC_0(VAR_0->i_sb)))
  return 1;

 if (FUNC_1(VAR_0) > VAR_3)
  return 1;

 return 0;
}
