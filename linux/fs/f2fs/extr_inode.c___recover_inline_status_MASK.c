
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int dummy; } ;
typedef int __le32 ;


 int FUNC_0 (struct page*) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int FUNC_2 (struct page*,int ,int,int) ;
 void* FUNC_3 (struct inode*,struct page*) ;
 int FUNC_4 (struct inode*,int ) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct inode*,int ) ;

__attribute__((used)) static void FUNC_7(struct inode *VAR_2, struct page *VAR_3)
{
 void *VAR_4 = FUNC_3(VAR_2, VAR_3);
 __le32 *VAR_5 = VAR_4;
 __le32 *VAR_6 = VAR_5 + FUNC_1(VAR_2) / sizeof(__le32);

 while (VAR_5 < VAR_6) {
  if (*VAR_5++) {
   FUNC_2(VAR_3, VAR_1, 1, 1);

   FUNC_4(VAR_2, VAR_0);
   FUNC_6(VAR_2, FUNC_0(VAR_3));
   FUNC_5(VAR_3);
   return;
  }
 }
 return;
}
