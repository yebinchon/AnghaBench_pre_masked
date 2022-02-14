
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int ns_blocksize; int ns_bdev; } ;
struct buffer_head {unsigned int b_size; void* b_data; scalar_t__ b_blocknr; } ;
typedef scalar_t__ sector_t ;


 int FUNC_0 (int) ;
 struct buffer_head* FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void *FUNC_4(struct the_nilfs *VAR_0,
         struct buffer_head **VAR_1,
         unsigned int *VAR_2, unsigned int VAR_3)
{
 void *VAR_4;
 sector_t VAR_5;

 FUNC_0((*VAR_1)->b_size < *VAR_2);
 if (VAR_3 > (*VAR_1)->b_size - *VAR_2) {
  VAR_5 = (*VAR_1)->b_blocknr;
  FUNC_2(*VAR_1);
  *VAR_1 = FUNC_1(VAR_0->ns_bdev, VAR_5 + 1,
          VAR_0->ns_blocksize);
  if (FUNC_3(!*VAR_1))
   return ((void*)0);
  *VAR_2 = 0;
 }
 VAR_4 = (*VAR_1)->b_data + *VAR_2;
 *VAR_2 += VAR_3;
 return VAR_4;
}
