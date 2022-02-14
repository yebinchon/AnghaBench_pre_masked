
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct bio_vec {scalar_t__ bv_len; scalar_t__ bv_offset; struct page const* bv_page; } ;


 unsigned long FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct page const*) ;
 unsigned long FUNC_2 (int ) ;

bool FUNC_3(const struct bio_vec *VAR_0,
          const struct page *VAR_1)
{

 unsigned long VAR_2 = FUNC_2(FUNC_1(VAR_0->bv_page));
 unsigned long VAR_3 = FUNC_2(FUNC_1(VAR_1));

 return VAR_2 + FUNC_0(VAR_0->bv_offset + VAR_0->bv_len) == VAR_3;







}
