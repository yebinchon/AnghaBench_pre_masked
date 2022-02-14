
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct fm10k_mbx_fifo {int * buffer; } ;
struct fm10k_mbx_info {scalar_t__ pushed; scalar_t__ max_size; struct fm10k_mbx_fifo rx; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct fm10k_mbx_fifo*,scalar_t__) ;

__attribute__((used)) static u16 FUNC_2(struct fm10k_mbx_info *VAR_0, u16 VAR_1)
{
 struct fm10k_mbx_fifo *VAR_2 = &VAR_0->rx;
 u16 VAR_3 = 0, VAR_4;


 VAR_1 += VAR_0->pushed;


 do {
  u32 *VAR_5;

  VAR_5 = VAR_2->buffer + FUNC_1(VAR_2, VAR_3);
  VAR_4 = FUNC_0(*VAR_5);
  VAR_3 += VAR_4;
 } while (VAR_3 < VAR_1);


 if ((VAR_1 < VAR_3) && (VAR_4 <= VAR_0->max_size))
  return 0;


 return (VAR_1 < VAR_3) ? VAR_1 : (VAR_1 - VAR_3);
}
