
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct iomap {int flags; } ;
struct inode {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct page*,int,int,int *,struct iomap*) ;
 int FUNC_3 (struct page*,int ,int) ;
 int FUNC_4 (struct inode*,struct page*) ;
 int FUNC_5 (struct page*) ;

__attribute__((used)) static loff_t
FUNC_6(struct inode *VAR_1, loff_t VAR_2, loff_t VAR_3,
  void *VAR_4, struct iomap *VAR_5)
{
 struct page *VAR_6 = VAR_4;
 int VAR_7;

 if (VAR_5->flags & VAR_0) {
  VAR_7 = FUNC_2(VAR_6, VAR_2, VAR_3, ((void*)0), VAR_5);
  if (VAR_7)
   return VAR_7;
  FUNC_3(VAR_6, 0, VAR_3);
 } else {
  FUNC_1(!FUNC_0(VAR_6));
  FUNC_4(VAR_1, VAR_6);
  FUNC_5(VAR_6);
 }

 return VAR_3;
}
