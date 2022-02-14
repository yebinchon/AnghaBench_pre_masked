
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
struct pg_help_data {size_t num_of_pg; struct pg_entry_help_data* data; } ;
struct pg_entry_help_data {size_t pg; int pg_priority; int num_of_dif_pri; } ;
struct TYPE_3__ {size_t* traffic_type_priority; } ;
struct TYPE_4__ {TYPE_1__ app; } ;
struct bnx2x {TYPE_2__ dcbx_port_params; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,char*,size_t,char*,size_t) ;
 size_t VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static void FUNC_1(struct bnx2x *VAR_4,
         u32 *VAR_5,
         struct pg_help_data *VAR_6)
{
 bool VAR_7 = 0;
 u32 VAR_8, VAR_9, VAR_10, VAR_11;
 u32 *VAR_12 = VAR_4->dcbx_port_params.app.traffic_type_priority;
 struct pg_entry_help_data *VAR_13 = VAR_6->data;


 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
  VAR_13[VAR_8].pg = VAR_1;

 for (VAR_10 = 0;
      VAR_10 < VAR_2; VAR_10++) {
  VAR_7 = 0;
  if (VAR_12[VAR_10] < VAR_3) {
   VAR_11 = (u8)VAR_5[VAR_12[VAR_10]];
   for (VAR_9 = 0;
        VAR_9 < VAR_2;
        VAR_9++) {
    if (VAR_13[VAR_9].pg == VAR_11) {
     if (!(VAR_13[VAR_9].pg_priority &
          (1 << VAR_12[VAR_10])))
      VAR_13[VAR_9].
       num_of_dif_pri++;
     VAR_13[VAR_9].pg_priority |=
      (1 << VAR_12[VAR_10]);
     VAR_7 = 1;
     break;
    }
   }
   if (0 == VAR_7) {
    VAR_13[VAR_6->num_of_pg].pg = VAR_11;
    VAR_13[VAR_6->num_of_pg].pg_priority =
      (1 << VAR_12[VAR_10]);
    VAR_13[VAR_6->num_of_pg].num_of_dif_pri = 1;
    VAR_6->num_of_pg++;
   }
  }
  FUNC_0(VAR_0,
     "add_traf_type %d pg_found %s num_of_pg %d\n",
     VAR_10, (0 == VAR_7) ? "NO" : "YES",
     VAR_6->num_of_pg);
 }
}
