
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct be_adapter {int num_rx_qs; } ;



__attribute__((used)) static inline bool FUNC_0(const struct be_adapter *VAR_0)
{
 return VAR_0->num_rx_qs > 1;
}
