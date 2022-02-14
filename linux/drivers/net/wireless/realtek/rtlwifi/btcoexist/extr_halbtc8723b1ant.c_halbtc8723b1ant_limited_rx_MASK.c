
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct btc_coexist {int (* btc_set ) (struct btc_coexist*,int ,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct btc_coexist*,int ,int*) ;
 int FUNC_1 (struct btc_coexist*,int ,int*) ;
 int FUNC_2 (struct btc_coexist*,int ,int*) ;
 int FUNC_3 (struct btc_coexist*,int ,int*) ;

__attribute__((used)) static void FUNC_4(struct btc_coexist *VAR_4,
           bool VAR_5, bool VAR_6,
           bool VAR_7,
           u8 VAR_8)
{
 bool VAR_9 = VAR_6;
 bool VAR_10 = VAR_7;
 u8 VAR_11 = VAR_8;




 VAR_4->btc_set(VAR_4, VAR_2,
      &VAR_9);

 VAR_4->btc_set(VAR_4, VAR_1,
      &VAR_10);



 VAR_4->btc_set(VAR_4, VAR_3, &VAR_11);

 VAR_4->btc_set(VAR_4, VAR_0, ((void*)0));
}
