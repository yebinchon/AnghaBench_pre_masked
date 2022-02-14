
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tp_tcp_stats {int tcp_retrans_segs; int tcp_out_segs; int tcp_in_segs; int tcp_out_rsts; } ;
struct seq_file {struct adapter* private; } ;
struct adapter {int stats_lock; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct adapter*,struct tp_tcp_stats*,struct tp_tcp_stats*,int) ;

__attribute__((used)) static void FUNC_4(struct seq_file *VAR_0)
{
 struct adapter *VAR_1 = VAR_0->private;
 struct tp_tcp_stats VAR_2, VAR_3;

 FUNC_1(&VAR_1->stats_lock);
 FUNC_3(VAR_1, &VAR_2, &VAR_3, 0);
 FUNC_2(&VAR_1->stats_lock);

 FUNC_0("tcp_ipv4_out_rsts:", VAR_2);
 FUNC_0("tcp_ipv4_in_segs:", VAR_2);
 FUNC_0("tcp_ipv4_out_segs:", VAR_2);
 FUNC_0("tcp_ipv4_retrans_segs:", VAR_2);
 FUNC_0("tcp_ipv6_out_rsts:", VAR_3);
 FUNC_0("tcp_ipv6_in_segs:", VAR_3);
 FUNC_0("tcp_ipv6_out_segs:", VAR_3);
 FUNC_0("tcp_ipv6_retrans_segs:", VAR_3);
}
