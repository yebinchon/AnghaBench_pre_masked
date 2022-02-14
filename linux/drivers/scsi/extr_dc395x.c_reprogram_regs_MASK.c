
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct DeviceCtlBlk {int sync_offset; int sync_period; int target_id; } ;
struct AdapterCtlBlk {int dummy; } ;


 int FUNC_0 (struct AdapterCtlBlk*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct AdapterCtlBlk*,struct DeviceCtlBlk*) ;

__attribute__((used)) static inline void FUNC_2(struct AdapterCtlBlk *VAR_3,
  struct DeviceCtlBlk *VAR_4)
{
 FUNC_0(VAR_3, VAR_2, VAR_4->target_id);
 FUNC_0(VAR_3, VAR_1, VAR_4->sync_period);
 FUNC_0(VAR_3, VAR_0, VAR_4->sync_offset);
 FUNC_1(VAR_3, VAR_4);
}
