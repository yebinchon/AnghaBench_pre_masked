
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct fm10k_mbx_fifo {int dummy; } ;
struct fm10k_mbx_info {int mbx_hdr; int local; int tail_len; int pulled; int mbx_lock; struct fm10k_mbx_fifo tx; int head; int tail; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (struct fm10k_mbx_fifo*,int ,int ,int ) ;
 int FUNC_3 (struct fm10k_mbx_fifo*,int ) ;

__attribute__((used)) static void FUNC_4(struct fm10k_mbx_info *VAR_6)
{
 u32 VAR_7 = FUNC_0(VAR_2, VAR_5) |
    FUNC_0(VAR_6->tail, VAR_4) |
    FUNC_0(VAR_6->head, VAR_3);
 struct fm10k_mbx_fifo *VAR_8 = &VAR_6->tx;
 u16 VAR_9;

 if (VAR_6->tail_len)
  VAR_6->mbx_lock |= VAR_1;


 VAR_9 = FUNC_2(VAR_8, FUNC_3(VAR_8, VAR_6->pulled),
        VAR_6->tail_len, VAR_6->local);
 VAR_9 = FUNC_1(&VAR_7, VAR_9, 1);


 VAR_6->mbx_hdr = VAR_7 | FUNC_0(VAR_9, VAR_0);
}
