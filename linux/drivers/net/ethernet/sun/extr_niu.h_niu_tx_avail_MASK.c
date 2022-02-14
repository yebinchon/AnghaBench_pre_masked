
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tx_ring_info {int prod; int cons; scalar_t__ pending; } ;


 int VAR_0 ;

__attribute__((used)) static inline u32 FUNC_0(struct tx_ring_info *VAR_1)
{
 return (VAR_1->pending -
  ((VAR_1->prod - VAR_1->cons) & (VAR_0 - 1)));
}
