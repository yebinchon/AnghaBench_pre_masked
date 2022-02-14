
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fm10k_mbx_info {int mbx_hdr; int head; int remote; int tail; int mbx_lock; scalar_t__ tail_len; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(struct fm10k_mbx_info *VAR_4)
{
 if (VAR_4->tail_len)
  VAR_4->mbx_lock |= VAR_0;

 VAR_4->mbx_hdr = FUNC_0(VAR_4->tail, VAR_2) |
         FUNC_0(VAR_4->remote, VAR_3) |
         FUNC_0(VAR_4->head, VAR_1);
}
