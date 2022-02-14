
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct bnx2x {int dummy; } ;
struct TYPE_6__ {int max_fcoe_conn; } ;
struct TYPE_5__ {int func_cfg; } ;
struct TYPE_4__ {int config; } ;


 int FUNC_0 (struct bnx2x*) ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 scalar_t__ FUNC_3 (struct bnx2x*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct bnx2x*,int ) ;
 int FUNC_5 (struct bnx2x*,int ) ;
 TYPE_3__* VAR_7 ;
 TYPE_2__* VAR_8 ;
 TYPE_1__* VAR_9 ;

__attribute__((used)) static int FUNC_6(struct bnx2x *VAR_10)
{
 u8 VAR_11 = 0;

 if (FUNC_2(VAR_10)) {
  u8 VAR_12;


  for (VAR_12 = FUNC_0(VAR_10); VAR_12 < VAR_0 * 2; VAR_12 += 2) {
   if (FUNC_3(VAR_10)) {
    u32 VAR_13 = FUNC_4(VAR_10,
          VAR_9[VAR_12].config);

    if (!(VAR_13 & VAR_1) &&
        ((VAR_13 & VAR_3) ==
         VAR_2))
     VAR_11++;
   } else {
    u32 VAR_14 = FUNC_4(VAR_10,
          VAR_8[VAR_12].
              func_cfg);

    if ((VAR_14 & VAR_5) &&
        (VAR_14 & VAR_6))
     VAR_11++;
   }
  }
 } else {
  int VAR_15, VAR_16 = FUNC_1(VAR_10) ? 2 : 1;

  for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++) {
   u32 VAR_17 = FUNC_5(VAR_10,
        VAR_7[VAR_15].max_fcoe_conn) ^
      VAR_4;
   if (VAR_17)
    VAR_11++;
  }
 }

 return VAR_11;
}
