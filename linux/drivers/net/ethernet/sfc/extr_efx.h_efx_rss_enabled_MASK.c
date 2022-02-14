
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int rss_spread; } ;



__attribute__((used)) static inline bool FUNC_0(struct efx_nic *VAR_0)
{
 return VAR_0->rss_spread > 1;
}
