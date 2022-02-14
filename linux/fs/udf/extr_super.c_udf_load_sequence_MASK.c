
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int s_blocksize_bits; } ;
struct kernel_lb_addr {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_4__ {int extLength; int extLocation; } ;
struct TYPE_3__ {int extLength; int extLocation; } ;
struct anchorVolDescPtr {TYPE_2__ reserveVolDescSeqExt; TYPE_1__ mainVolDescSeqExt; } ;
typedef int sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct super_block*,int,int,struct kernel_lb_addr*) ;
 int FUNC_2 (struct super_block*) ;

__attribute__((used)) static int FUNC_3(struct super_block *VAR_2, struct buffer_head *VAR_3,
        struct kernel_lb_addr *VAR_4)
{
 struct anchorVolDescPtr *VAR_5;
 sector_t VAR_6, VAR_7, VAR_8, VAR_9;
 int VAR_10;

 VAR_5 = (struct anchorVolDescPtr *)VAR_3->b_data;


 VAR_6 = FUNC_0(VAR_5->mainVolDescSeqExt.extLocation);
 VAR_7 = FUNC_0(VAR_5->mainVolDescSeqExt.extLength);
 VAR_7 = VAR_7 >> VAR_2->s_blocksize_bits;
 VAR_7 += VAR_6 - 1;


 VAR_8 = FUNC_0(VAR_5->reserveVolDescSeqExt.extLocation);
 VAR_9 = FUNC_0(VAR_5->reserveVolDescSeqExt.extLength);
 VAR_9 = VAR_9 >> VAR_2->s_blocksize_bits;
 VAR_9 += VAR_8 - 1;



 VAR_10 = FUNC_1(VAR_2, VAR_6, VAR_7, VAR_4);
 if (VAR_10 != -VAR_0)
  return VAR_10;
 FUNC_2(VAR_2);
 VAR_10 = FUNC_1(VAR_2, VAR_8, VAR_9, VAR_4);
 if (VAR_10 < 0) {
  FUNC_2(VAR_2);

  if (VAR_10 == -VAR_0)
   VAR_10 = -VAR_1;
 }
 return VAR_10;
}
