
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct fm10k_mbx_fifo {scalar_t__ size; int tail; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int const) ;
 scalar_t__ FUNC_1 (struct fm10k_mbx_fifo*) ;
 int FUNC_2 (struct fm10k_mbx_fifo*,int const*,int ,scalar_t__) ;
 int FUNC_3 () ;

__attribute__((used)) static s32 FUNC_4(struct fm10k_mbx_fifo *VAR_2, const u32 *VAR_3)
{
 u16 VAR_4 = FUNC_0(*VAR_3);


 if (VAR_4 > VAR_2->size)
  return VAR_1;


 if (VAR_4 > FUNC_1(VAR_2))
  return VAR_0;


 FUNC_2(VAR_2, VAR_3, 0, VAR_4);


 FUNC_3();


 VAR_2->tail += VAR_4;

 return 0;
}
