
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tun_flow_entry {scalar_t__ rps_rxhash; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(struct tun_flow_entry *VAR_0, u32 VAR_1)
{
 if (FUNC_0(VAR_0->rps_rxhash != VAR_1))
  VAR_0->rps_rxhash = VAR_1;
}
