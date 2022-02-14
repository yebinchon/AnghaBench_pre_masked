
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct bio_vec {scalar_t__ bv_offset; scalar_t__ bv_len; int bv_page; } ;
struct bio {int dummy; } ;


 struct bio_vec* FUNC_0 (struct bio*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static u64 FUNC_2(struct bio *VAR_0)
{
 struct bio_vec *VAR_1 = FUNC_0(VAR_0);

 return FUNC_1(VAR_1->bv_page) + VAR_1->bv_len + VAR_1->bv_offset;
}
