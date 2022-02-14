
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct pm8001_hba_info {TYPE_1__* io_mem; } ;
struct TYPE_2__ {size_t memvirtaddr; } ;


 int FUNC_0 (size_t,size_t) ;

__attribute__((used)) static inline void FUNC_1(struct pm8001_hba_info *VAR_0, u32 VAR_1,
  u32 VAR_2, u32 VAR_3)
{
 FUNC_0(VAR_3, VAR_0->io_mem[VAR_1].memvirtaddr + VAR_2);
}
