
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rx_ring_info {scalar_t__ data_addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;
 unsigned int VAR_1 ;

__attribute__((used)) static inline bool FUNC_1(const struct rx_ring_info *VAR_2,
         unsigned VAR_3)
{


 if (!FUNC_0(VAR_2->data_addr + VAR_0, sizeof(u32)))
  return 1;

 return VAR_3 < VAR_1;
}
