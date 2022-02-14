
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct can_rx_offload {scalar_t__ inc; } ;



__attribute__((used)) static inline bool FUNC_0(struct can_rx_offload *VAR_0, unsigned int VAR_1, unsigned int VAR_2)
{
 if (VAR_0->inc)
  return VAR_1 <= VAR_2;
 else
  return VAR_1 >= VAR_2;
}
