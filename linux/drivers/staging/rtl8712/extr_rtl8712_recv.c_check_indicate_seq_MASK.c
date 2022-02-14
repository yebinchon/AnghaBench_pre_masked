
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct recv_reorder_ctrl {int wsize_b; int indicate_seq; } ;


 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct recv_reorder_ctrl *VAR_0,
         u16 VAR_1)
{
 u8 VAR_2 = VAR_0->wsize_b;
 u16 VAR_3 = (VAR_0->indicate_seq + VAR_2 - 1) % 4096;


 if (VAR_0->indicate_seq == 0xffff)
  VAR_0->indicate_seq = VAR_1;

 if (FUNC_1(VAR_1, VAR_0->indicate_seq))
  return 0;





 if (FUNC_0(VAR_1, VAR_0->indicate_seq))
  VAR_0->indicate_seq = (VAR_0->indicate_seq +
           1) % 4096;
 else if (FUNC_1(VAR_3, VAR_1)) {
  if (VAR_1 >= (VAR_2 - 1))
   VAR_0->indicate_seq = VAR_1 + 1 - VAR_2;
  else
   VAR_0->indicate_seq = 4095 - (VAR_2 -
            (VAR_1 + 1)) + 1;
 }
 return 1;
}
