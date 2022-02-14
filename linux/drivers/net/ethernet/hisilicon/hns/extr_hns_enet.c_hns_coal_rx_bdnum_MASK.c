
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct hnae_ring {scalar_t__ coal_last_rx_bytes; TYPE_2__* q; } ;
struct TYPE_4__ {TYPE_1__* handle; } ;
struct TYPE_3__ {int coal_adapt_en; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static u32 FUNC_0(struct hnae_ring *VAR_2)
{
 bool VAR_3 = VAR_2->q->handle->coal_adapt_en;

 if (VAR_3 &&
     VAR_2->coal_last_rx_bytes > VAR_1)
  return VAR_0;
 else
  return 0;
}
