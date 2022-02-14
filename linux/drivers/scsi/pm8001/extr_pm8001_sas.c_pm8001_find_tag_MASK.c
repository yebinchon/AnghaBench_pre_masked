
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sas_task {struct pm8001_ccb_info* lldd_task; } ;
struct pm8001_ccb_info {int ccb_tag; } ;



__attribute__((used)) static int FUNC_0(struct sas_task *VAR_0, u32 *VAR_1)
{
 if (VAR_0->lldd_task) {
  struct pm8001_ccb_info *VAR_2;
  VAR_2 = VAR_0->lldd_task;
  *VAR_1 = VAR_2->ccb_tag;
  return 1;
 }
 return 0;
}
