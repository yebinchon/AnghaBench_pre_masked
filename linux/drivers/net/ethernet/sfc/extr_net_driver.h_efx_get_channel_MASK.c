
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {unsigned int n_channels; struct efx_channel** channel; } ;
struct efx_channel {int dummy; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline struct efx_channel *
FUNC_1(struct efx_nic *VAR_0, unsigned VAR_1)
{
 FUNC_0(VAR_1 >= VAR_0->n_channels);
 return VAR_0->channel[VAR_1];
}
