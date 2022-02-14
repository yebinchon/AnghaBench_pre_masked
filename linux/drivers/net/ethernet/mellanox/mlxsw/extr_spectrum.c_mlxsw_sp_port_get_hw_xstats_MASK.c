
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlxsw_sp_port_xstats {int * tx_bytes; int * tx_packets; int * tail_drop; int * backlog; int * wred_drop; int ecn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct net_device*,int ,int,char*) ;

__attribute__((used)) static void
FUNC_7(struct net_device *VAR_7,
       struct mlxsw_sp_port_xstats *VAR_8)
{
 char VAR_9[VAR_2];
 int VAR_10, VAR_11;

 VAR_10 = FUNC_6(VAR_7, VAR_1, 0,
       VAR_9);
 if (!VAR_10)
  VAR_8->ecn = FUNC_0(VAR_9);

 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
  VAR_10 = FUNC_6(VAR_7,
        VAR_5,
        VAR_11, VAR_9);
  if (!VAR_10)
   VAR_8->wred_drop[VAR_11] =
    FUNC_5(VAR_9);

  VAR_10 = FUNC_6(VAR_7, VAR_4,
        VAR_11, VAR_9);
  if (VAR_10)
   continue;

  VAR_8->backlog[VAR_11] =
   FUNC_2(VAR_9);
  VAR_8->tail_drop[VAR_11] =
   FUNC_1(VAR_9);
 }

 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
  VAR_10 = FUNC_6(VAR_7, VAR_3,
        VAR_11, VAR_9);
  if (VAR_10)
   continue;

  VAR_8->tx_packets[VAR_11] = FUNC_3(VAR_9);
  VAR_8->tx_bytes[VAR_11] = FUNC_4(VAR_9);
 }
}
