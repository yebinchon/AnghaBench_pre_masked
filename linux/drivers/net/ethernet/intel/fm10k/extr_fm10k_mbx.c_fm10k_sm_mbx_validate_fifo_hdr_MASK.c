
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct fm10k_mbx_info {int tail; int head; int mbmem_len; int tail_len; int mbx_hdr; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const,int ) ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct fm10k_mbx_info*,int,int) ;

__attribute__((used)) static s32 FUNC_2(struct fm10k_mbx_info *VAR_7)
{
 const u32 *VAR_8 = &VAR_7->mbx_hdr;
 u16 VAR_9, VAR_10, VAR_11;

 VAR_9 = FUNC_0(*VAR_8, VAR_5);
 VAR_11 = FUNC_0(*VAR_8, VAR_6);
 VAR_10 = FUNC_0(*VAR_8, VAR_4);

 switch (VAR_11) {
 case 0:
  break;
 case 128:
  if (!VAR_10 || VAR_10 > VAR_3)
   return VAR_0;
  if (!VAR_9 || VAR_9 > VAR_3)
   return VAR_2;
  if (VAR_7->tail < VAR_10)
   VAR_10 += VAR_7->mbmem_len - 1;
  if (VAR_9 < VAR_7->head)
   VAR_9 += VAR_7->mbmem_len - 1;
  if (FUNC_1(VAR_7, VAR_10, VAR_7->tail) > VAR_7->tail_len)
   return VAR_0;
  if (FUNC_1(VAR_7, VAR_7->head, VAR_9) < VAR_7->mbmem_len)
   break;
  return VAR_2;
 default:
  return VAR_1;
 }

 return 0;
}
