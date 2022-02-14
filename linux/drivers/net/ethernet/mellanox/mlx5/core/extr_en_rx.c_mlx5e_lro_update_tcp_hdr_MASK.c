
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct tcphdr {int ack; int window; int ack_seq; int psh; scalar_t__ check; } ;
struct mlx5_cqe64 {int lro_tcp_win; int lro_ack_seq_num; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct mlx5_cqe64*) ;
 int FUNC_1 (struct mlx5_cqe64*) ;

__attribute__((used)) static void FUNC_2(struct mlx5_cqe64 *VAR_2, struct tcphdr *VAR_3)
{
 u8 VAR_4 = FUNC_0(VAR_2);
 u8 VAR_5 = (VAR_4 == VAR_1) ||
    (VAR_4 == VAR_0);

 VAR_3->check = 0;
 VAR_3->psh = FUNC_1(VAR_2);

 if (VAR_5) {
  VAR_3->ack = 1;
  VAR_3->ack_seq = VAR_2->lro_ack_seq_num;
  VAR_3->window = VAR_2->lro_tcp_win;
 }
}
