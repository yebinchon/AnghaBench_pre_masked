
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct mace_data {scalar_t__ rx_tail; scalar_t__ rx_ring_phys; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct mace_data* FUNC_0 (struct net_device*) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_4, int VAR_5)
{
 struct mace_data *VAR_6 = FUNC_0(VAR_4);

 FUNC_2(VAR_2 + VAR_5, 0x0100);
 FUNC_1(VAR_1 + VAR_5, (u32) VAR_6->rx_ring_phys);
 FUNC_1(VAR_3 + VAR_5, VAR_0);
 FUNC_2(VAR_2 + VAR_5, 0x9800);
 VAR_6->rx_tail = 0;
}
