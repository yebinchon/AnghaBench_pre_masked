
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ScsiInqData {int DevType; } ;
struct DeviceCtlBlk {int dev_type; } ;
struct AdapterCtlBlk {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct DeviceCtlBlk*,struct ScsiInqData*) ;

__attribute__((used)) static void FUNC_1(struct AdapterCtlBlk *VAR_1, struct DeviceCtlBlk *VAR_2,
  struct ScsiInqData *VAR_3)
{
 u8 VAR_4 = VAR_3->DevType & VAR_0;
 VAR_2->dev_type = VAR_4;

 FUNC_0(VAR_2, VAR_3);
}
