
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tcp_ack_filter {TYPE_1__* ack_session_info; } ;
struct wilc_vif {struct tcp_ack_filter ack_filter; } ;
struct TYPE_2__ {int bigger_ack_num; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct wilc_vif *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct tcp_ack_filter *VAR_4 = &VAR_1->ack_filter;

 if (VAR_2 < 2 * VAR_0 &&
     VAR_3 > VAR_4->ack_session_info[VAR_2].bigger_ack_num)
  VAR_4->ack_session_info[VAR_2].bigger_ack_num = VAR_3;
}
