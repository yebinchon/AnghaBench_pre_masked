
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct the_nilfs {int ns_blocksize_bits; int ns_bdev; } ;
struct TYPE_2__ {int bi_sector; } ;
struct bio {TYPE_1__ bi_iter; } ;
typedef int sector_t ;


 int VAR_0 ;
 struct bio* FUNC_0 (int ,int) ;
 int FUNC_1 (struct bio*,int ) ;
 scalar_t__ FUNC_2 (struct bio*) ;

__attribute__((used)) static struct bio *FUNC_3(struct the_nilfs *VAR_1, sector_t VAR_2,
           int VAR_3)
{
 struct bio *VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_3);
 if (VAR_4 == ((void*)0)) {
  while (!VAR_4 && (VAR_3 >>= 1))
   VAR_4 = FUNC_0(VAR_0, VAR_3);
 }
 if (FUNC_2(VAR_4)) {
  FUNC_1(VAR_4, VAR_1->ns_bdev);
  VAR_4->bi_iter.bi_sector =
   VAR_2 << (VAR_1->ns_blocksize_bits - 9);
 }
 return VAR_4;
}
