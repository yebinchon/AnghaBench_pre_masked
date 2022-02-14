
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int index; } ;
struct iomap {int inline_data; } ;
struct inode {int dummy; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 size_t FUNC_3 (struct inode*) ;
 void* FUNC_4 (struct page*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*,int ,size_t) ;
 int FUNC_7 (void*,int ,size_t) ;
 size_t FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(struct inode *VAR_1, struct page *VAR_2,
  struct iomap *VAR_3)
{
 size_t VAR_4 = FUNC_3(VAR_1);
 void *VAR_5;

 if (FUNC_1(VAR_2))
  return;

 FUNC_0(VAR_2->index);
 FUNC_0(VAR_4 > VAR_0 - FUNC_8(VAR_3->inline_data));

 VAR_5 = FUNC_4(VAR_2);
 FUNC_6(VAR_5, VAR_3->inline_data, VAR_4);
 FUNC_7(VAR_5 + VAR_4, 0, VAR_0 - VAR_4);
 FUNC_5(VAR_5);
 FUNC_2(VAR_2);
}
