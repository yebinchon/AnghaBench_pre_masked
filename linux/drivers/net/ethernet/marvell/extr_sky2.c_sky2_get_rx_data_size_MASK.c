
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sky2_port {unsigned int rx_nfrags; TYPE_1__* netdev; } ;
struct rx_ring_info {int frag_addr; } ;
struct TYPE_2__ {scalar_t__ mtu; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static unsigned FUNC_3(struct sky2_port *VAR_4)
{
 struct rx_ring_info *VAR_5;
 unsigned VAR_6;


 VAR_6 = FUNC_2(VAR_4->netdev->mtu + VAR_0 + VAR_2, 8);

 VAR_4->rx_nfrags = VAR_6 >> VAR_1;
 FUNC_1(VAR_4->rx_nfrags > FUNC_0(VAR_5->frag_addr));


 VAR_6 -= VAR_4->rx_nfrags << VAR_1;


 if (VAR_6 < VAR_3)
  VAR_6 = VAR_3;
 if (VAR_6 < VAR_0)
  VAR_6 = VAR_0;

 return VAR_6;
}
