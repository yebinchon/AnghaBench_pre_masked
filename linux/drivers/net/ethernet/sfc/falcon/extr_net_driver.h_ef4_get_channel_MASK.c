
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_nic {unsigned int n_channels; struct ef4_channel** channel; } ;
struct ef4_channel {int dummy; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline struct ef4_channel *
FUNC_1(struct ef4_nic *VAR_0, unsigned VAR_1)
{
 FUNC_0(VAR_1 >= VAR_0->n_channels);
 return VAR_0->channel[VAR_1];
}
