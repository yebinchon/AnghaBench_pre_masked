
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int pending_ring_idx_t ;


 int VAR_0 ;

__attribute__((used)) static inline pending_ring_idx_t FUNC_0(unsigned VAR_1)
{
 return VAR_1 & (VAR_0-1);
}
