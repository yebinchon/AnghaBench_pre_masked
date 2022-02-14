
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct pm8001_hba_info {struct pm8001_device* devices; } ;
struct pm8001_device {scalar_t__ dev_type; size_t id; } ;


 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,size_t) ;

__attribute__((used)) static struct pm8001_device *FUNC_2(struct pm8001_hba_info *VAR_2)
{
 u32 VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_2->devices[VAR_3].dev_type == VAR_1) {
   VAR_2->devices[VAR_3].id = VAR_3;
   return &VAR_2->devices[VAR_3];
  }
 }
 if (VAR_3 == VAR_0) {
  FUNC_0(VAR_2,
   FUNC_1("max support %d devices, ignore ..\n",
   VAR_0));
 }
 return ((void*)0);
}
