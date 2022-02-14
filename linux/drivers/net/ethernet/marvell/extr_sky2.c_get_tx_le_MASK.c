
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sky2_tx_le {scalar_t__ ctrl; } ;
struct sky2_port {int tx_ring_size; struct sky2_tx_le* tx_le; } ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static inline struct sky2_tx_le *FUNC_1(struct sky2_port *VAR_0, u16 *VAR_1)
{
 struct sky2_tx_le *VAR_2 = VAR_0->tx_le + *VAR_1;

 *VAR_1 = FUNC_0(*VAR_1, VAR_0->tx_ring_size);
 VAR_2->ctrl = 0;
 return VAR_2;
}
