
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct iomap_page {int dummy; } ;
struct bio_vec {int bv_len; int bv_offset; struct page* bv_page; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct iomap_page*,struct page*) ;
 int FUNC_3 (struct page*,int ,int ) ;
 struct iomap_page* FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(struct bio_vec *VAR_0, int VAR_1)
{
 struct page *VAR_2 = VAR_0->bv_page;
 struct iomap_page *VAR_3 = FUNC_4(VAR_2);

 if (FUNC_5(VAR_1)) {
  FUNC_0(VAR_2);
  FUNC_1(VAR_2);
 } else {
  FUNC_3(VAR_2, VAR_0->bv_offset, VAR_0->bv_len);
 }

 FUNC_2(VAR_3, VAR_2);
}
