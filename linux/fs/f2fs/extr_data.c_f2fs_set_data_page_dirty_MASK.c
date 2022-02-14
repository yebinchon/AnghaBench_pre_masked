
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {struct inode* host; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 scalar_t__ FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*,struct page*) ;
 int FUNC_9 (struct inode*,struct page*) ;
 TYPE_1__* FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*,int ) ;

__attribute__((used)) static int FUNC_12(struct page *VAR_1)
{
 struct inode *VAR_2 = FUNC_10(VAR_1)->host;

 FUNC_11(VAR_1, VAR_0);

 if (!FUNC_3(VAR_1))
  FUNC_4(VAR_1);
 if (FUNC_2(VAR_1))
  return FUNC_5(VAR_1);

 if (FUNC_6(VAR_2) && !FUNC_7(VAR_2)) {
  if (!FUNC_0(VAR_1)) {
   FUNC_8(VAR_2, VAR_1);
   return 1;
  }




  return 0;
 }

 if (!FUNC_1(VAR_1)) {
  FUNC_5(VAR_1);
  FUNC_9(VAR_2, VAR_1);
  return 1;
 }
 return 0;
}
