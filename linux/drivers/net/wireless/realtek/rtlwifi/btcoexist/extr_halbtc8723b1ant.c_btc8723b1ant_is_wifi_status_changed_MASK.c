
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btc_coexist {int (* btc_get ) (struct btc_coexist*,int ,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct btc_coexist*,int ,int*) ;
 int FUNC_1 (struct btc_coexist*,int ,int*) ;
 int FUNC_2 (struct btc_coexist*,int ,int*) ;
 int FUNC_3 (struct btc_coexist*,int ,int*) ;

__attribute__((used)) static bool FUNC_4(struct btc_coexist *VAR_4)
{
 static bool VAR_5;
 static bool VAR_6, VAR_7;
 bool VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;
 bool VAR_11 = 0;

 VAR_4->btc_get(VAR_4, VAR_3,
      &VAR_11);
 VAR_4->btc_get(VAR_4, VAR_2, &VAR_8);
 VAR_4->btc_get(VAR_4, VAR_0, &VAR_10);
 VAR_4->btc_get(VAR_4, VAR_1,
      &VAR_9);

 if (VAR_11) {
  if (VAR_8 != VAR_5) {
   VAR_5 = VAR_8;
   return 1;
  }
  if (VAR_9 != VAR_6) {
   VAR_6 = VAR_9;
   return 1;
  }
  if (VAR_10 != VAR_7) {
   VAR_7 = VAR_10;
   return 1;
  }
 }

 return 0;
}
