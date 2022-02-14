
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {struct address_space* i_mapping; } ;
struct address_space {int dummy; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int VAR_1 ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (char*,struct inode*,int ,size_t,struct page*) ;
 struct page* FUNC_4 (struct address_space*,int ,int ) ;
 int FUNC_5 (struct page*) ;
 scalar_t__ FUNC_6 (struct inode*) ;
 void* FUNC_7 (struct page*) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (struct address_space*,int ) ;
 int FUNC_10 (void*,char*,size_t) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (struct page*) ;
 int FUNC_13 (struct page*,size_t,size_t) ;

void FUNC_14(struct inode *VAR_2, struct page *VAR_3,
      char *VAR_4, size_t VAR_5)
{
 struct address_space *VAR_6 = VAR_2->i_mapping;
 struct page *VAR_7;

 if (VAR_3) {
  VAR_7 = VAR_3;
 } else {
  if (FUNC_6(VAR_2) == 0)
   return;
  VAR_7 = FUNC_4(VAR_6, 0,
        FUNC_9(VAR_6,
        ~VAR_1));
  if (!VAR_7)
   return;
  if (FUNC_0(VAR_7)) {
   FUNC_12(VAR_7);
   FUNC_11(VAR_7);
   return;
  }
 }

 FUNC_3("fill_inline_data %p %llx.%llx len %zu locked_page %p\n",
      VAR_2, FUNC_2(VAR_2), VAR_5, VAR_3);

 if (VAR_5 > 0) {
  void *VAR_8 = FUNC_7(VAR_7);
  FUNC_10(VAR_8, VAR_4, VAR_5);
  FUNC_8(VAR_8);
 }

 if (VAR_7 != VAR_3) {
  if (VAR_5 < VAR_0)
   FUNC_13(VAR_7, VAR_5, VAR_0);
  else
   FUNC_5(VAR_7);

  FUNC_1(VAR_7);
  FUNC_12(VAR_7);
  FUNC_11(VAR_7);
 }
}
