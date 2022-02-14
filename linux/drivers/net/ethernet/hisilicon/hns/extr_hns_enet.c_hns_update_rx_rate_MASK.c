
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_6__ {scalar_t__ rx_bytes; } ;
struct hnae_ring {void* coal_last_jiffies; scalar_t__ coal_last_rx_bytes; int coal_rx_rate; TYPE_3__ stats; TYPE_2__* q; } ;
struct TYPE_5__ {TYPE_1__* handle; } ;
struct TYPE_4__ {int coal_adapt_en; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 void* VAR_1 ;
 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (void*,void*) ;

__attribute__((used)) static void FUNC_3(struct hnae_ring *VAR_2)
{
 bool VAR_3 = VAR_2->q->handle->coal_adapt_en;
 u32 VAR_4;
 u64 VAR_5;

 if (!VAR_3 ||
     FUNC_2(VAR_1, VAR_2->coal_last_jiffies + (VAR_0 >> 4)))
  return;


 if (VAR_2->coal_last_rx_bytes > VAR_2->stats.rx_bytes) {
  VAR_2->coal_last_rx_bytes = VAR_2->stats.rx_bytes;
  VAR_2->coal_last_jiffies = VAR_1;
  return;
 }

 VAR_5 = VAR_2->stats.rx_bytes - VAR_2->coal_last_rx_bytes;
 VAR_4 = FUNC_1(VAR_1 - VAR_2->coal_last_jiffies);
 FUNC_0(VAR_5, VAR_4);
 VAR_2->coal_rx_rate = VAR_5 >> 10;

 VAR_2->coal_last_rx_bytes = VAR_2->stats.rx_bytes;
 VAR_2->coal_last_jiffies = VAR_1;
}
