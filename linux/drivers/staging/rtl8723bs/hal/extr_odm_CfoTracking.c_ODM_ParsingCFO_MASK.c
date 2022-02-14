
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct odm_packet_info {scalar_t__ station_id; } ;
typedef scalar_t__ s8 ;
struct TYPE_4__ {int* CFO_tail; int packetCount; } ;
struct TYPE_3__ {int SupportAbility; TYPE_2__ DM_CfoTrack; } ;
typedef TYPE_1__* PDM_ODM_T ;
typedef TYPE_2__* PCFO_TRACKING ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;

void FUNC_0(void *VAR_3, void *VAR_4, s8 *VAR_5)
{
 PDM_ODM_T VAR_6 = (PDM_ODM_T)VAR_3;
 struct odm_packet_info *VAR_7 = (struct odm_packet_info *)VAR_4;
 PCFO_TRACKING VAR_8 = &VAR_6->DM_CfoTrack;
 u8 VAR_9;

 if (!(VAR_6->SupportAbility & VAR_0))
  return;

 if (VAR_7->station_id != 0) {


  for (VAR_9 = VAR_1; VAR_9 <= VAR_2; VAR_9++)
   VAR_8->CFO_tail[VAR_9] = (int)VAR_5[VAR_9];


  if (VAR_8->packetCount == 0xffffffff)
   VAR_8->packetCount = 0;
  else
   VAR_8->packetCount++;
 }
}
