
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int d1; } ;
struct wil_rx_status_extended {TYPE_1__ ext; } ;
struct wil6210_priv {scalar_t__ use_compressed_rx_status; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static inline int FUNC_1(struct wil6210_priv *VAR_1,
            void *VAR_2)
{
 if (VAR_1->use_compressed_rx_status)
  return VAR_0;

 return FUNC_0(((struct wil_rx_status_extended *)VAR_2)->ext.d1,
       0, 1) << 2;
}
