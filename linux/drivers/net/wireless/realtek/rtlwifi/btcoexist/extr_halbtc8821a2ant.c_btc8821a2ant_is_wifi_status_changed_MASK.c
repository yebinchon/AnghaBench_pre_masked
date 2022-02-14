
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct btc_coexist {int (* btc_get ) (struct btc_coexist*,int ,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct btc_coexist*,int,int,int ,int ) ;
 int FUNC_1 (struct btc_coexist*,int ,int*) ;
 int FUNC_2 (struct btc_coexist*,int ,int*) ;
 int FUNC_3 (struct btc_coexist*,int ,int*) ;
 int FUNC_4 (struct btc_coexist*,int ,int*) ;

__attribute__((used)) static bool FUNC_5(struct btc_coexist *VAR_7)
{
 static bool VAR_8 = 1;
 static bool VAR_9 = 1;
 static bool VAR_10 = 1;
 bool VAR_11 = 0, VAR_12 = 0, VAR_13 = 0;
 bool VAR_14 = 0;
 u8 VAR_15 = VAR_4;

 VAR_7->btc_get(VAR_7, VAR_3,
      &VAR_14);
 VAR_7->btc_get(VAR_7, VAR_2, &VAR_11);
 VAR_7->btc_get(VAR_7, VAR_0, &VAR_13);
 VAR_7->btc_get(VAR_7, VAR_1,
      &VAR_12);

 if (VAR_14) {
  if (VAR_11 != VAR_8) {
   VAR_8 = VAR_11;
   return 1;
  }
  if (VAR_12 != VAR_9) {
   VAR_9 = VAR_12;
   return 1;
  }
  if (VAR_13 != VAR_10) {
   VAR_10 = VAR_13;
   return 1;
  }

  VAR_15 = FUNC_0(VAR_7, 3, 2,
    VAR_6, 0);

  if ((VAR_15 == VAR_4) ||
      (VAR_15 == VAR_5))
   return 1;
 }

 return 0;
}
