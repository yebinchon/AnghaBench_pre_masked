
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int d0; } ;
struct vring_rx_desc {TYPE_1__ mac; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,int) ;

__attribute__((used)) static inline int FUNC_1(struct vring_rx_desc *VAR_1)
{
 return (VAR_1->mac.d0 & VAR_0) ?
  FUNC_0(VAR_1->mac.d0, 8, 9) : 0;
}
