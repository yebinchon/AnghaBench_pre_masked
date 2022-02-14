
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rpm_regulator_req {void* value; void* nbytes; void* key; } ;
struct qcom_rpm_reg {int is_enabled; int uV; int load; scalar_t__ load_updated; scalar_t__ uv_updated; scalar_t__ enabled_updated; int id; int type; int rpm; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int ,struct rpm_regulator_req*,int) ;

__attribute__((used)) static int FUNC_2(struct qcom_rpm_reg *VAR_4)
{
 struct rpm_regulator_req VAR_5[3];
 int VAR_6 = 0;
 int VAR_7;

 if (VAR_4->enabled_updated) {
  VAR_5[VAR_6].key = FUNC_0(VAR_2);
  VAR_5[VAR_6].nbytes = FUNC_0(sizeof(u32));
  VAR_5[VAR_6].value = FUNC_0(VAR_4->is_enabled);
  VAR_6++;
 }

 if (VAR_4->uv_updated && VAR_4->is_enabled) {
  VAR_5[VAR_6].key = FUNC_0(VAR_3);
  VAR_5[VAR_6].nbytes = FUNC_0(sizeof(u32));
  VAR_5[VAR_6].value = FUNC_0(VAR_4->uV);
  VAR_6++;
 }

 if (VAR_4->load_updated && VAR_4->is_enabled) {
  VAR_5[VAR_6].key = FUNC_0(VAR_1);
  VAR_5[VAR_6].nbytes = FUNC_0(sizeof(u32));
  VAR_5[VAR_6].value = FUNC_0(VAR_4->load / 1000);
  VAR_6++;
 }

 if (!VAR_6)
  return 0;

 VAR_7 = FUNC_1(VAR_4->rpm, VAR_0,
     VAR_4->type, VAR_4->id,
     VAR_5, sizeof(VAR_5[0]) * VAR_6);
 if (!VAR_7) {
  VAR_4->enabled_updated = 0;
  VAR_4->uv_updated = 0;
  VAR_4->load_updated = 0;
 }

 return VAR_7;
}
