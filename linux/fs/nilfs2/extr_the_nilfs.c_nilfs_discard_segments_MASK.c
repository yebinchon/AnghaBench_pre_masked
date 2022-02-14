
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int ns_blocksize_bits; int ns_bdev; } ;
typedef scalar_t__ sector_t ;
typedef int __u64 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_2 (struct the_nilfs*,int ,scalar_t__*,scalar_t__*) ;

int FUNC_3(struct the_nilfs *VAR_1, __u64 *VAR_2,
       size_t VAR_3)
{
 sector_t VAR_4, VAR_5;
 sector_t VAR_6 = 0, VAR_7 = 0;
 unsigned int VAR_8;
 __u64 *VAR_9;
 int VAR_10 = 0;

 VAR_8 = (1 << VAR_1->ns_blocksize_bits) /
  FUNC_0(VAR_1->ns_bdev);
 for (VAR_9 = VAR_2; VAR_9 < VAR_2 + VAR_3; VAR_9++) {
  FUNC_2(VAR_1, *VAR_9, &VAR_4, &VAR_5);

  if (!VAR_7) {
   VAR_6 = VAR_4;
   VAR_7 = VAR_5 - VAR_4 + 1;
  } else if (VAR_6 + VAR_7 == VAR_4) {
   VAR_7 += VAR_5 - VAR_4 + 1;
  } else {
   VAR_10 = FUNC_1(VAR_1->ns_bdev,
         VAR_6 * VAR_8,
         VAR_7 * VAR_8,
         VAR_0, 0);
   if (VAR_10 < 0)
    return VAR_10;
   VAR_7 = 0;
  }
 }
 if (VAR_7)
  VAR_10 = FUNC_1(VAR_1->ns_bdev,
        VAR_6 * VAR_8,
        VAR_7 * VAR_8,
        VAR_0, 0);
 return VAR_10;
}
