
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pm8001_device {int * sas_device; int device_id; int dev_type; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pm8001_device*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct pm8001_device *VAR_2)
{
 u32 VAR_3 = VAR_2->id;
 FUNC_0(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->id = VAR_3;
 VAR_2->dev_type = VAR_1;
 VAR_2->device_id = VAR_0;
 VAR_2->sas_device = ((void*)0);
}
