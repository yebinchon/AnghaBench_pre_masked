
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct pg_help_data {TYPE_1__* data; } ;
struct cos_help_data {TYPE_4__* data; } ;
struct TYPE_6__ {int* traffic_type_priority; } ;
struct TYPE_7__ {TYPE_2__ app; } ;
struct bnx2x {TYPE_3__ dcbx_port_params; } ;
struct TYPE_8__ {int pausable; int cos_bw; int pri_join_mask; void* strict; } ;
struct TYPE_5__ {scalar_t__ pg; } ;


 void* VAR_0 ;
 void* FUNC_0 (void*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (struct bnx2x*,int) ;
 scalar_t__ FUNC_3 (struct bnx2x*,int) ;
 scalar_t__ FUNC_4 (struct bnx2x*,int) ;
 int FUNC_5 (struct bnx2x*,int) ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct bnx2x*,struct cos_help_data*,int) ;

__attribute__((used)) static void FUNC_8(struct bnx2x *VAR_4,
           struct pg_help_data *VAR_5,
           struct cos_help_data *VAR_6,
           u32 VAR_7,
           u8 VAR_8)
{
 u8 VAR_9 = 0;
 u32 VAR_10 = 0;
 u32 VAR_11 = 0;
 u32 *VAR_12 = VAR_4->dcbx_port_params.app.traffic_type_priority;

 if (VAR_8 == 1) {
  FUNC_7(VAR_4, VAR_6, VAR_7);
  return;
 }

 if (VAR_5->data[0].pg < VAR_1) {




  if (FUNC_4(VAR_4, VAR_7)) {

   VAR_6->data[0].pausable = 1;

   VAR_6->data[1].pausable = 0;

   if (2 == VAR_8) {
    VAR_6->data[0].cos_bw = 50;
    VAR_6->data[1].cos_bw = 50;
   }

   if (3 == VAR_8) {
    if (FUNC_6(FUNC_3(VAR_4,
       VAR_7))) {
     VAR_6->data[0].cos_bw = 33;
     VAR_6->data[1].cos_bw = 67;
    } else {
     VAR_6->data[0].cos_bw = 67;
     VAR_6->data[1].cos_bw = 33;
    }
   }

  } else if (FUNC_5(VAR_4, VAR_7)) {




   if (2 == VAR_8) {
    VAR_6->data[0].cos_bw = 50;
    VAR_6->data[1].cos_bw = 50;
   } else {
    VAR_6->data[0].cos_bw = 67;
    VAR_6->data[1].cos_bw = 33;
   }
   VAR_6->data[1].pausable = 1;
   VAR_6->data[0].pausable = 1;

   VAR_6->data[0].pri_join_mask = (VAR_7 &
    ((u8)~(1 << VAR_12[VAR_3])));

   VAR_6->data[1].pri_join_mask =
    (1 << VAR_12[VAR_3]);
  } else



   FUNC_7(VAR_4,
      VAR_6, VAR_7);
 } else {

  if (FUNC_4(VAR_4, VAR_7)) {





   if (FUNC_3(VAR_4, VAR_7) >
       FUNC_2(VAR_4, VAR_7)) {
    VAR_6->data[0].strict =
     VAR_0;
    VAR_6->data[1].strict =
     FUNC_0(
      VAR_0);
   } else {
    VAR_6->data[0].strict =
     FUNC_0(
      VAR_0);
    VAR_6->data[1].strict =
     VAR_0;
   }

   VAR_6->data[0].pausable = 1;

   VAR_6->data[1].pausable = 0;
  } else {





   VAR_6->data[0].pausable =
    VAR_6->data[1].pausable =
    FUNC_5(VAR_4, VAR_7);

   for (VAR_9 = 0 ; VAR_9 < VAR_2; VAR_9++) {
    VAR_10 = 1 << VAR_4->dcbx_port_params.
     app.traffic_type_priority[VAR_9];

    VAR_11 =
     (VAR_7 & ((u8)(~VAR_10)));
    if (VAR_11 < VAR_10)
     break;
   }

   if (VAR_9 == VAR_2)
    FUNC_1("Invalid value for pri_join_mask - could not find a priority\n");

   VAR_6->data[0].pri_join_mask = VAR_11;
   VAR_6->data[1].pri_join_mask = VAR_10;




   VAR_6->data[0].strict =
     FUNC_0(
      VAR_0);
   VAR_6->data[1].strict =
     VAR_0;
  }
 }
}
