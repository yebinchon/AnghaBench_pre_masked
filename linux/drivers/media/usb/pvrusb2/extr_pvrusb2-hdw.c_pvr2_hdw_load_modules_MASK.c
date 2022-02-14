
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pvr2_string_table {unsigned int cnt; int * lst; } ;
struct pvr2_hdw {int flag_modulefail; TYPE_1__* hdw_desc; } ;
struct pvr2_device_client_table {unsigned int cnt; int * lst; } ;
struct TYPE_2__ {struct pvr2_device_client_table client_table; struct pvr2_string_table client_modules; } ;


 scalar_t__ FUNC_0 (struct pvr2_hdw*,int *) ;
 int FUNC_1 (struct pvr2_hdw*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct pvr2_hdw *VAR_0)
{
 unsigned int VAR_1;
 const struct pvr2_string_table *VAR_2;
 const struct pvr2_device_client_table *VAR_3;
 int VAR_4 = !0;

 VAR_2 = &VAR_0->hdw_desc->client_modules;
 for (VAR_1 = 0; VAR_1 < VAR_2->cnt; VAR_1++) {
  FUNC_2(VAR_2->lst[VAR_1]);
 }

 VAR_3 = &VAR_0->hdw_desc->client_table;
 for (VAR_1 = 0; VAR_1 < VAR_3->cnt; VAR_1++) {
  if (FUNC_0(VAR_0, &VAR_3->lst[VAR_1]) < 0) VAR_4 = 0;
 }
 if (!VAR_4) {
  VAR_0->flag_modulefail = !0;
  FUNC_1(VAR_0);
 }
}
