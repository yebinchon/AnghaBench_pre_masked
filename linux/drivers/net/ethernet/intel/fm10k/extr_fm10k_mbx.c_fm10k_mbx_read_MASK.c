
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fm10k_mbx_info {int mbx_hdr; int mbx_reg; int mbmem_reg; int mbmem_len; int mbx_lock; } ;
struct fm10k_hw {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fm10k_hw*,int) ;
 int FUNC_1 (struct fm10k_hw*,int,int) ;

__attribute__((used)) static s32 FUNC_2(struct fm10k_hw *VAR_4, struct fm10k_mbx_info *VAR_5)
{

 if (VAR_5->mbx_hdr)
  return VAR_2;


 if (FUNC_0(VAR_4, VAR_5->mbx_reg) & VAR_3)
  VAR_5->mbx_lock = VAR_0;


 FUNC_1(VAR_4, VAR_5->mbx_reg,
   VAR_3 | VAR_1);


 VAR_5->mbx_hdr = FUNC_0(VAR_4, VAR_5->mbmem_reg ^ VAR_5->mbmem_len);

 return 0;
}
