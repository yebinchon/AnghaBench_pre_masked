
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t line; int adapter_num; int port_num; int max_frame_size; int irq_level; int phys_lcr_base; int phys_statctrl_base; int phys_memory_base; int phys_sca_base; int device_name; struct TYPE_5__* next_device; } ;
typedef TYPE_1__ SLMP_INFO ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int* VAR_1 ;
 int FUNC_1 (char*,int ,int ,int ,int ,int ,int ,int) ;
 int FUNC_2 (int ,char*,int,int) ;
 size_t VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int FUNC_3(SLMP_INFO *VAR_4)
{
 VAR_4->next_device = ((void*)0);
 VAR_4->line = VAR_2;
 FUNC_2(VAR_4->device_name,"ttySLM%dp%d",VAR_4->adapter_num,VAR_4->port_num);

 if (VAR_4->line < VAR_0) {
  if (VAR_1[VAR_4->line])
   VAR_4->max_frame_size = VAR_1[VAR_4->line];
 }

 VAR_2++;

 if ( !VAR_3 )
  VAR_3 = VAR_4;
 else {
  SLMP_INFO *VAR_5 = VAR_3;
  while( VAR_5->next_device )
   VAR_5 = VAR_5->next_device;
  VAR_5->next_device = VAR_4;
 }

 if ( VAR_4->max_frame_size < 4096 )
  VAR_4->max_frame_size = 4096;
 else if ( VAR_4->max_frame_size > 65535 )
  VAR_4->max_frame_size = 65535;

 FUNC_1( "SyncLink MultiPort %s: "
  "Mem=(%08x %08X %08x %08X) IRQ=%d MaxFrameSize=%u\n",
  VAR_4->device_name,
  VAR_4->phys_sca_base,
  VAR_4->phys_memory_base,
  VAR_4->phys_statctrl_base,
  VAR_4->phys_lcr_base,
  VAR_4->irq_level,
  VAR_4->max_frame_size );




 return 0;

}
