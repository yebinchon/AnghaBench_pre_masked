
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fm10k_mbx_info {int mbx_hdr; int head; int remote; int tail; int mbx_lock; scalar_t__ local; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_1(struct fm10k_mbx_info *VAR_5, u8 VAR_6)
{
 if (VAR_5->local)
  VAR_5->mbx_lock |= VAR_0;

 VAR_5->mbx_hdr = FUNC_0(VAR_5->tail, VAR_3) |
         FUNC_0(VAR_5->remote, VAR_4) |
         FUNC_0(VAR_5->head, VAR_2) |
         FUNC_0(VAR_6, VAR_1);
}
