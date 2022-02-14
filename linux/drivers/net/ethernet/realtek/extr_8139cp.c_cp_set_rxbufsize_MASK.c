
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cp_private {scalar_t__ rx_buf_sz; TYPE_1__* dev; } ;
struct TYPE_2__ {unsigned int mtu; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline void FUNC_0 (struct cp_private *VAR_3)
{
 unsigned int VAR_4 = VAR_3->dev->mtu;

 if (VAR_4 > VAR_0)

  VAR_3->rx_buf_sz = VAR_4 + VAR_1 + 8;
 else
  VAR_3->rx_buf_sz = VAR_2;
}
