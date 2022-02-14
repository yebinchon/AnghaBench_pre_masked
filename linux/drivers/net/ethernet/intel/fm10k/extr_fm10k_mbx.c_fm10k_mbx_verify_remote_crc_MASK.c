
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct fm10k_mbx_fifo {int dummy; } ;
struct fm10k_mbx_info {int remote; int mbx_hdr; int pushed; scalar_t__ head_len; struct fm10k_mbx_fifo rx; } ;
typedef int s32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct fm10k_mbx_fifo*,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (struct fm10k_mbx_fifo*,int ) ;

__attribute__((used)) static s32 FUNC_3(struct fm10k_mbx_info *VAR_1)
{
 struct fm10k_mbx_fifo *VAR_2 = &VAR_1->rx;
 u16 VAR_3 = VAR_1->head_len;
 u16 VAR_4 = FUNC_2(VAR_2, VAR_1->pushed) - VAR_3;
 u16 VAR_5;


 if (VAR_3)
  VAR_1->remote = FUNC_1(VAR_2, VAR_4, VAR_3, VAR_1->remote);


 VAR_5 = FUNC_0(&VAR_1->mbx_hdr, VAR_1->remote, 1);


 return VAR_5 ? VAR_0 : 0;
}
