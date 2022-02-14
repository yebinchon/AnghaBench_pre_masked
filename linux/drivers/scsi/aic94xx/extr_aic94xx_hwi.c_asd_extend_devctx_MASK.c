
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int max_ddbs; TYPE_2__* ddb_ext; } ;
struct asd_ha_struct {TYPE_1__ hw_prof; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_4__ {scalar_t__ dma_handle; } ;


 unsigned long FUNC_0 (unsigned long,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_1 (struct asd_ha_struct*,int,int ) ;
 int FUNC_2 (struct asd_ha_struct*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct asd_ha_struct*,int ) ;
 int FUNC_5 (struct asd_ha_struct*,int ,scalar_t__) ;
 int FUNC_6 (struct asd_ha_struct*,int ,int) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_7(struct asd_ha_struct *VAR_6)
{
 dma_addr_t VAR_7;
 unsigned long VAR_8;
 u32 VAR_9;
 int VAR_10;

 FUNC_2(VAR_6);

 VAR_6->hw_prof.ddb_ext = ((void*)0);
 if (VAR_5 <= VAR_6->hw_prof.max_ddbs || VAR_5 > 0xFFFF) {
  VAR_5 = VAR_6->hw_prof.max_ddbs;
  return 0;
 }

 VAR_10 = (VAR_5 - VAR_6->hw_prof.max_ddbs + 1) * VAR_0;

 VAR_6->hw_prof.ddb_ext = FUNC_1(VAR_6, VAR_10, VAR_4);
 if (!VAR_6->hw_prof.ddb_ext) {
  FUNC_3("couldn't allocate memory for %d devices\n",
      VAR_5);
  VAR_5 = VAR_6->hw_prof.max_ddbs;
  return -VAR_3;
 }
 VAR_7 = VAR_6->hw_prof.ddb_ext->dma_handle;
 VAR_8 = FUNC_0((unsigned long) VAR_7, VAR_0);
 VAR_8 -= VAR_6->hw_prof.max_ddbs * VAR_0;
 VAR_7 = (dma_addr_t) VAR_8;
 FUNC_5(VAR_6, VAR_2, VAR_7);
 VAR_9 = FUNC_4(VAR_6, VAR_1);
 VAR_9 &= ~4;
 FUNC_6(VAR_6, VAR_1, VAR_9);

 VAR_6->hw_prof.max_ddbs = VAR_5;

 return 0;
}
