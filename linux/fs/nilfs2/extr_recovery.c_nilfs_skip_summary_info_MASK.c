
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int ns_blocksize; int ns_bdev; } ;
struct buffer_head {unsigned int b_size; scalar_t__ b_blocknr; } ;
typedef scalar_t__ sector_t ;


 unsigned int FUNC_0 (unsigned long,unsigned int) ;
 struct buffer_head* FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (struct buffer_head*) ;

__attribute__((used)) static void FUNC_3(struct the_nilfs *VAR_0,
        struct buffer_head **VAR_1,
        unsigned int *VAR_2, unsigned int VAR_3,
        unsigned long VAR_4)
{
 unsigned int VAR_5
  = ((*VAR_1)->b_size - *VAR_2) / VAR_3;

 if (VAR_4 <= VAR_5) {
  *VAR_2 += VAR_3 * VAR_4;
 } else {
  sector_t VAR_6 = (*VAR_1)->b_blocknr;
  unsigned int VAR_7 = (*VAR_1)->b_size / VAR_3;
  unsigned int VAR_8;

  VAR_4 -= VAR_5;
  VAR_8 = FUNC_0(VAR_4, VAR_7);
  *VAR_2 = VAR_3 * (VAR_4 - (VAR_8 - 1) * VAR_7);

  FUNC_2(*VAR_1);
  *VAR_1 = FUNC_1(VAR_0->ns_bdev, VAR_6 + VAR_8,
          VAR_0->ns_blocksize);
 }
}
