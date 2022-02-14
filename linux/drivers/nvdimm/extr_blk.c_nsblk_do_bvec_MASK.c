
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct page {int dummy; } ;
struct nd_namespace_blk {int dummy; } ;
struct nd_blk_region {int (* do_io ) (struct nd_blk_region*,scalar_t__,void*,unsigned int,int) ;} ;
struct bio_integrity_payload {int dummy; } ;
typedef scalar_t__ sector_t ;
typedef scalar_t__ resource_size_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 void* FUNC_1 (struct page*) ;
 int FUNC_2 (void*) ;
 unsigned int FUNC_3 (unsigned int,scalar_t__) ;
 int FUNC_4 (struct nd_namespace_blk*,struct bio_integrity_payload*,scalar_t__,int) ;
 scalar_t__ FUNC_5 (struct nd_namespace_blk*) ;
 scalar_t__ FUNC_6 (struct nd_namespace_blk*) ;
 int FUNC_7 (struct nd_blk_region*,scalar_t__,void*,unsigned int,int) ;
 scalar_t__ FUNC_8 (struct nd_namespace_blk*,scalar_t__,unsigned int) ;
 struct nd_blk_region* FUNC_9 (struct nd_namespace_blk*) ;

__attribute__((used)) static int FUNC_10(struct nd_namespace_blk *VAR_3,
  struct bio_integrity_payload *VAR_4, struct page *VAR_5,
  unsigned int VAR_6, unsigned int VAR_7, int VAR_8, sector_t VAR_9)
{
 struct nd_blk_region *VAR_10 = FUNC_9(VAR_3);
 resource_size_t VAR_11, VAR_12;
 u32 VAR_13, VAR_14;
 int VAR_15 = 0;
 void *VAR_16;
 u64 VAR_17;

 VAR_13 = FUNC_5(VAR_3);
 VAR_14 = FUNC_6(VAR_3);
 while (VAR_6) {
  unsigned int VAR_18;







  VAR_18 = VAR_4 ? FUNC_3(VAR_6, VAR_14) : VAR_6;

  VAR_17 = FUNC_0(VAR_9 << VAR_1, VAR_14);
  VAR_12 = VAR_17 * VAR_13;
  VAR_11 = FUNC_8(VAR_3, VAR_12, VAR_18);
  if (VAR_11 == VAR_2)
   return -VAR_0;

  VAR_16 = FUNC_1(VAR_5);
  VAR_15 = VAR_10->do_io(VAR_10, VAR_11, VAR_16 + VAR_7, VAR_18, VAR_8);
  FUNC_2(VAR_16);
  if (VAR_15)
   return VAR_15;

  if (VAR_4) {
   VAR_15 = FUNC_4(VAR_3, VAR_4, VAR_17, VAR_8);
   if (VAR_15)
    return VAR_15;
  }
  VAR_6 -= VAR_18;
  VAR_7 += VAR_18;
  VAR_9 += VAR_14 >> VAR_1;
 }

 return VAR_15;
}
