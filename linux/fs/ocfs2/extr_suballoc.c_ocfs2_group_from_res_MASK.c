
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ocfs2_suballoc_result {scalar_t__ sr_blkno; int sr_bit_offset; scalar_t__ sr_bg_blkno; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static u64 FUNC_1(struct ocfs2_suballoc_result *VAR_0)
{
 if (VAR_0->sr_blkno == 0)
  return 0;

 if (VAR_0->sr_bg_blkno)
  return VAR_0->sr_bg_blkno;

 return FUNC_0(VAR_0->sr_blkno, VAR_0->sr_bit_offset);
}
