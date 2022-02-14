
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int length; int offset; } ;
struct bio_vec {int bv_len; int bv_offset; int bv_page; } ;


 int FUNC_0 (struct scatterlist*) ;

__attribute__((used)) static void FUNC_1(struct bio_vec *VAR_0, struct scatterlist *VAR_1)
{
 VAR_0->bv_page = FUNC_0(VAR_1);
 VAR_0->bv_offset = VAR_1->offset;
 VAR_0->bv_len = VAR_1->length;
}
