
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct btc_coexist {int (* btc_get ) (struct btc_coexist*,int ,int*) ;} ;
struct TYPE_2__ {scalar_t__ switch_thres_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (struct btc_coexist*,int ,int,scalar_t__,int ) ;
 TYPE_1__* VAR_7 ;
 int FUNC_1 (struct btc_coexist*,int ,int*) ;
 int FUNC_2 (struct btc_coexist*,int ,int*) ;
 int FUNC_3 (struct btc_coexist*,int ,int*) ;
 int FUNC_4 (struct btc_coexist*,int ,int*) ;

__attribute__((used)) static bool FUNC_5(struct btc_coexist *VAR_8)
{
 static bool VAR_9;
 static bool VAR_10;
 static bool VAR_11;
 bool VAR_12 = 0, VAR_13 = 0, VAR_14 = 0;
 bool VAR_15 = 0;
 u8 VAR_16 = VAR_4;
 u8 VAR_17;

 VAR_8->btc_get(VAR_8, VAR_3,
      &VAR_15);
 VAR_8->btc_get(VAR_8, VAR_2, &VAR_12);
 VAR_8->btc_get(VAR_8, VAR_0, &VAR_14);
 VAR_8->btc_get(VAR_8, VAR_1,
      &VAR_13);

 if (VAR_15) {
  if (VAR_12 != VAR_9) {
   VAR_9 = VAR_12;
   return 1;
  }

  if (VAR_13 != VAR_10) {
   VAR_10 = VAR_13;
   return 1;
  }

  if (VAR_14 != VAR_11) {
   VAR_11 = VAR_14;
   return 1;
  }

  VAR_17 = VAR_6 -
     VAR_7->switch_thres_offset;
  VAR_16 =
       FUNC_0(VAR_8, 0, 2, VAR_17, 0);

  if ((VAR_16 == VAR_4) ||
      (VAR_16 == VAR_5))
   return 1;
 }

 return 0;
}
