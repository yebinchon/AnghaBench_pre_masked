
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int d1; } ;
struct wil_rx_status_extended {TYPE_1__ ext; } ;
struct wil6210_priv {scalar_t__ use_compressed_rx_status; } ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static inline int FUNC_1(struct wil6210_priv *VAR_0, void *VAR_1)
{
 if (VAR_0->use_compressed_rx_status)
  return 0;

 return FUNC_0(((struct wil_rx_status_extended *)VAR_1)->ext.d1,
       0, 5) << 2;
}
