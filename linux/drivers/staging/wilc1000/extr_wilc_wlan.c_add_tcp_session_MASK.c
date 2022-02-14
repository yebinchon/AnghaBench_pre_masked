
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct tcp_ack_filter {int tcp_session; TYPE_1__* ack_session_info; } ;
struct wilc_vif {struct tcp_ack_filter ack_filter; } ;
struct TYPE_2__ {void* dst_port; void* src_port; scalar_t__ bigger_ack_num; void* seq_num; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct wilc_vif *VAR_1, u32 VAR_2,
       u32 VAR_3, u32 VAR_4)
{
 struct tcp_ack_filter *VAR_5 = &VAR_1->ack_filter;

 if (VAR_5->tcp_session < 2 * VAR_0) {
  VAR_5->ack_session_info[VAR_5->tcp_session].seq_num = VAR_4;
  VAR_5->ack_session_info[VAR_5->tcp_session].bigger_ack_num = 0;
  VAR_5->ack_session_info[VAR_5->tcp_session].src_port = VAR_2;
  VAR_5->ack_session_info[VAR_5->tcp_session].dst_port = VAR_3;
  VAR_5->tcp_session++;
 }
}
