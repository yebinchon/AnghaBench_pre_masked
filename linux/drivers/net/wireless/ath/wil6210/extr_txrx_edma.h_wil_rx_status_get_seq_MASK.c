
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int seq_num; } ;
struct wil_rx_status_extended {TYPE_1__ ext; } ;
struct wil6210_priv {scalar_t__ use_compressed_rx_status; } ;
typedef int __le16 ;



__attribute__((used)) static inline __le16 FUNC_0(struct wil6210_priv *VAR_0, void *VAR_1)
{
 if (VAR_0->use_compressed_rx_status)
  return 0;

 return ((struct wil_rx_status_extended *)VAR_1)->ext.seq_num;
}
