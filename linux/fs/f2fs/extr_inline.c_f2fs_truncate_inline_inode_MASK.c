
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct page {int dummy; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int FUNC_1 (struct inode*,int ) ;
 int FUNC_2 (struct page*,int ,int,int) ;
 void* FUNC_3 (struct inode*,struct page*) ;
 int FUNC_4 (void*,int ,scalar_t__) ;
 int FUNC_5 (struct page*) ;

void FUNC_6(struct inode *VAR_2,
     struct page *VAR_3, u64 VAR_4)
{
 void *VAR_5;

 if (VAR_4 >= FUNC_0(VAR_2))
  return;

 VAR_5 = FUNC_3(VAR_2, VAR_3);

 FUNC_2(VAR_3, VAR_1, 1, 1);
 FUNC_4(VAR_5 + VAR_4, 0, FUNC_0(VAR_2) - VAR_4);
 FUNC_5(VAR_3);

 if (VAR_4 == 0)
  FUNC_1(VAR_2, VAR_0);
}
