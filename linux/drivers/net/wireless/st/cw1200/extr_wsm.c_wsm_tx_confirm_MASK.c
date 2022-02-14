
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wsm_tx_confirm {void* tx_queue_delay; void* media_delay; int flags; void* ack_failures; void* tx_rate; void* status; void* packet_id; } ;
struct wsm_buf {int dummy; } ;
struct cw1200_common {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct wsm_buf*) ;
 void* FUNC_2 (struct wsm_buf*) ;
 void* FUNC_3 (struct wsm_buf*) ;
 int FUNC_4 (struct cw1200_common*,int,struct wsm_tx_confirm*) ;

__attribute__((used)) static int FUNC_5(struct cw1200_common *VAR_1,
     struct wsm_buf *VAR_2,
     int VAR_3)
{
 struct wsm_tx_confirm VAR_4;

 VAR_4.packet_id = FUNC_2(VAR_2);
 VAR_4.status = FUNC_2(VAR_2);
 VAR_4.tx_rate = FUNC_3(VAR_2);
 VAR_4.ack_failures = FUNC_3(VAR_2);
 VAR_4.flags = FUNC_1(VAR_2);
 VAR_4.media_delay = FUNC_2(VAR_2);
 VAR_4.tx_queue_delay = FUNC_2(VAR_2);

 FUNC_4(VAR_1, VAR_3, &VAR_4);
 return 0;

underflow:
 FUNC_0(1);
 return -VAR_0;
}
