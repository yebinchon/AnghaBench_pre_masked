
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct fm10k_mbx_fifo {scalar_t__ head; scalar_t__ tail; scalar_t__ buffer; } ;
struct fm10k_mbx_info {int pushed; int rx_parse_err; int msg_data; struct fm10k_mbx_fifo rx; } ;
struct fm10k_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (struct fm10k_mbx_fifo*) ;
 int FUNC_1 (struct fm10k_mbx_fifo*) ;
 int FUNC_2 (struct fm10k_hw*,scalar_t__,struct fm10k_mbx_info*,int ) ;
 int FUNC_3 (scalar_t__,scalar_t__,int) ;

__attribute__((used)) static u16 FUNC_4(struct fm10k_hw *VAR_0,
    struct fm10k_mbx_info *VAR_1)
{
 struct fm10k_mbx_fifo *VAR_2 = &VAR_1->rx;
 s32 VAR_3;
 u16 VAR_4;


 for (VAR_4 = 0; !FUNC_0(VAR_2); VAR_4++) {
  VAR_3 = FUNC_2(VAR_0, VAR_2->buffer + VAR_2->head,
       VAR_1, VAR_1->msg_data);
  if (VAR_3 < 0)
   VAR_1->rx_parse_err++;

  FUNC_1(VAR_2);
 }


 FUNC_3(VAR_2->buffer, VAR_2->buffer + VAR_2->tail, VAR_1->pushed << 2);


 VAR_2->tail -= VAR_2->head;
 VAR_2->head = 0;

 return VAR_4;
}
