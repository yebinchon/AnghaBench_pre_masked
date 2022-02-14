
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvs_device {int taskfileset; int dev_status; int dev_type; int device_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mvs_device*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct mvs_device *VAR_3)
{
 u32 VAR_4 = VAR_3->device_id;
 FUNC_0(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->device_id = VAR_4;
 VAR_3->dev_type = VAR_2;
 VAR_3->dev_status = VAR_0;
 VAR_3->taskfileset = VAR_1;
}
