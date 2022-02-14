
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct fm10k_mbx_info {scalar_t__ mbmem_len; scalar_t__ head; scalar_t__ pushed; } ;
struct fm10k_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (struct fm10k_hw*,struct fm10k_mbx_info*) ;
 scalar_t__ FUNC_1 (struct fm10k_mbx_info*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct fm10k_hw*,struct fm10k_mbx_info*,scalar_t__) ;

__attribute__((used)) static s32 FUNC_3(struct fm10k_hw *VAR_0,
    struct fm10k_mbx_info *VAR_1,
    u16 VAR_2)
{

 u16 VAR_3 = VAR_1->mbmem_len - 1;
 s32 VAR_4;


 if (VAR_2 < VAR_1->head)
  VAR_2 += VAR_3;


 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2);
 if (VAR_4 < 0)
  return VAR_4;


 FUNC_0(VAR_0, VAR_1);


 VAR_1->head = FUNC_1(VAR_1, VAR_1->pushed);
 VAR_1->pushed = 0;


 if (VAR_1->head > VAR_3)
  VAR_1->head -= VAR_3;

 return VAR_4;
}
