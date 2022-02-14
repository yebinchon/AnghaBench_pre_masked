
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct btc_coexist {int (* btc_get ) (struct btc_coexist*,int ,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct btc_coexist*,int ,int,int ) ;
 int FUNC_1 (struct btc_coexist*,int ,int*) ;

__attribute__((used)) static void FUNC_2(struct btc_coexist *VAR_2,
       bool VAR_3)
{
 u8 VAR_4 = 0x0;

 VAR_2->btc_get(VAR_2, VAR_0, &VAR_4);

 if (VAR_4) {

  if (VAR_3) {

  } else {

   FUNC_0(VAR_2, VAR_1,
      0, 0);
  }
 } else {

  if (VAR_3) {

   FUNC_0(VAR_2, VAR_1,
      0, 0);
  } else {

  }
 }
}
