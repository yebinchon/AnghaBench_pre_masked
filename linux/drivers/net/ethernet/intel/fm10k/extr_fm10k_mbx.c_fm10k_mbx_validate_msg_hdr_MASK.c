
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct fm10k_mbx_info {int head; int tail; int mbmem_len; int tail_len; int mbx_hdr; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int FUNC_0 (int const,int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct fm10k_mbx_info*,int,int) ;

__attribute__((used)) static s32 FUNC_3(struct fm10k_mbx_info *VAR_11)
{
 u16 VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 const u32 *VAR_17 = &VAR_11->mbx_hdr;

 VAR_12 = FUNC_0(*VAR_17, VAR_10);
 VAR_13 = FUNC_0(*VAR_17, VAR_8);
 VAR_15 = FUNC_0(*VAR_17, VAR_9);
 VAR_14 = FUNC_0(*VAR_17, VAR_7);
 VAR_16 = FUNC_0(*VAR_17, VAR_0);

 if (VAR_13)
  return VAR_2;

 switch (VAR_12) {
 case 129:

  if (VAR_15 != VAR_11->head)
   return VAR_4;


 case 130:

  if (!VAR_14 || (VAR_14 == FUNC_1(VAR_7)))
   return VAR_1;
  if (FUNC_2(VAR_11, VAR_14, VAR_11->tail) > VAR_11->tail_len)
   return VAR_1;


  if (!VAR_15 || (VAR_15 == FUNC_1(VAR_9)))
   return VAR_4;
  if (FUNC_2(VAR_11, VAR_11->head, VAR_15) < VAR_11->mbmem_len)
   break;

  return VAR_4;
 case 131:

  if ((VAR_16 < VAR_6) || (VAR_16 & (VAR_16 + 1)))
   return VAR_3;


 case 128:
  if (!VAR_14 || (VAR_14 == FUNC_1(VAR_7)))
   return VAR_1;

  if (VAR_15)
   return VAR_4;

  break;
 default:
  return VAR_5;
 }

 return 0;
}
