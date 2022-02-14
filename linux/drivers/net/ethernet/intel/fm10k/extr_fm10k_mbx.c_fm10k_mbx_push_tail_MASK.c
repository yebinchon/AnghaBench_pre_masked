
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct fm10k_mbx_fifo {int tail; } ;
struct fm10k_mbx_info {scalar_t__ pushed; int rx_dwords; int rx_messages; scalar_t__ head_len; int head; struct fm10k_mbx_fifo rx; } ;
struct fm10k_hw {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct fm10k_mbx_fifo*) ;
 int FUNC_1 (struct fm10k_mbx_info*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct fm10k_mbx_info*,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (struct fm10k_mbx_info*) ;
 int FUNC_4 (struct fm10k_hw*,struct fm10k_mbx_info*) ;
 scalar_t__ FUNC_5 (struct fm10k_mbx_info*,scalar_t__) ;

__attribute__((used)) static s32 FUNC_6(struct fm10k_hw *VAR_1,
          struct fm10k_mbx_info *VAR_2,
          u16 VAR_3)
{
 struct fm10k_mbx_fifo *VAR_4 = &VAR_2->rx;
 u16 VAR_5, VAR_6 = FUNC_2(VAR_2, VAR_2->head, VAR_3);


 VAR_5 = FUNC_0(VAR_4) - VAR_2->pushed;
 if (VAR_5 > VAR_6)
  VAR_5 = VAR_6;


 VAR_2->head = FUNC_1(VAR_2, VAR_5);
 VAR_2->head_len = VAR_5;


 if (!VAR_5)
  return 0;


 FUNC_4(VAR_1, VAR_2);


 if (FUNC_5(VAR_2, VAR_5))
  return VAR_0;


 VAR_2->pushed += VAR_5;


 for (VAR_5 = FUNC_3(VAR_2);
      VAR_5 && (VAR_2->pushed >= VAR_5);
      VAR_5 = FUNC_3(VAR_2)) {
  VAR_4->tail += VAR_5;
  VAR_2->pushed -= VAR_5;
  VAR_2->rx_messages++;
  VAR_2->rx_dwords += VAR_5;
 }

 return 0;
}
