
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {unsigned long max_ddbs; } ;
struct asd_ha_struct {TYPE_1__ hw_prof; } ;
typedef int dma_addr_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (struct asd_ha_struct*,int ) ;
 int FUNC_1 (struct asd_ha_struct*,int ,int ) ;
 int FUNC_2 (struct asd_ha_struct*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct asd_ha_struct *VAR_5)
{
 unsigned long VAR_6 = VAR_4;
 u32 VAR_7;

 VAR_6 -= VAR_5->hw_prof.max_ddbs * VAR_0;
 FUNC_1(VAR_5, VAR_2, (dma_addr_t) VAR_6);
 VAR_7 = FUNC_0(VAR_5, VAR_1);
 VAR_7 |= 4;
 FUNC_2(VAR_5, VAR_1, VAR_7);
 VAR_5->hw_prof.max_ddbs += VAR_3;
}
