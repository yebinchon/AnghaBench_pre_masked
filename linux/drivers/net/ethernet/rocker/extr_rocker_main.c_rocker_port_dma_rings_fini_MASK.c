
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_port {int tx_ring; int rx_ring; struct rocker* rocker; } ;
struct rocker {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rocker*,int *,int ) ;
 int FUNC_1 (struct rocker*,int *) ;
 int FUNC_2 (struct rocker_port*) ;

__attribute__((used)) static void FUNC_3(struct rocker_port *VAR_2)
{
 struct rocker *VAR_3 = VAR_2->rocker;

 FUNC_2(VAR_2);
 FUNC_0(VAR_3, &VAR_2->rx_ring,
      VAR_0);
 FUNC_1(VAR_3, &VAR_2->rx_ring);
 FUNC_0(VAR_3, &VAR_2->tx_ring,
      VAR_1);
 FUNC_1(VAR_3, &VAR_2->tx_ring);
}
