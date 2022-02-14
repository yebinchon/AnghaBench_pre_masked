
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pg_help_data {int num_of_pg; TYPE_1__* data; } ;
struct dcbx_ets_feature {int pg_bw_tbl; } ;
struct bnx2x {int dummy; } ;
struct TYPE_2__ {scalar_t__ pg; scalar_t__ num_of_dif_pri; int pg_priority; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(
         struct bnx2x *VAR_2,
         struct dcbx_ets_feature *VAR_3,
         struct pg_help_data *VAR_4,
         u8 VAR_5)
{
 u8 VAR_6 = VAR_4->num_of_pg - 1;
 u8 VAR_7 = VAR_6 + 1;
 u8 VAR_8 = 0;

 if (VAR_5 == 0 || FUNC_0(VAR_4->data)
      <= VAR_4->num_of_pg) {

  FUNC_1("required_num_of_pg can't be zero\n");
  return -VAR_1;
 }

 while (VAR_5 < VAR_4->num_of_pg) {
  VAR_6 = VAR_4->num_of_pg - 2;
  VAR_7 = VAR_6 + 1;

  VAR_7 %= FUNC_0(VAR_4->data);

  VAR_4->data[VAR_6].pg_priority |=
   VAR_4->data[VAR_7].pg_priority;

  VAR_4->data[VAR_6].num_of_dif_pri +=
   VAR_4->data[VAR_7].num_of_dif_pri;

  if (VAR_4->data[VAR_6].pg == VAR_0 ||
      VAR_4->data[VAR_7].pg == VAR_0)

   VAR_4->data[VAR_6].pg =
       VAR_0;
  else {

   VAR_8 = FUNC_2(VAR_3->pg_bw_tbl,
     VAR_4->data[VAR_6].pg) +
        FUNC_2(VAR_3->pg_bw_tbl,
     VAR_4->data[VAR_7].pg);

   FUNC_3(VAR_3->pg_bw_tbl,
    VAR_4->data[VAR_6].pg, VAR_8);
  }

  VAR_4->num_of_pg--;
 }

 return 0;
}
