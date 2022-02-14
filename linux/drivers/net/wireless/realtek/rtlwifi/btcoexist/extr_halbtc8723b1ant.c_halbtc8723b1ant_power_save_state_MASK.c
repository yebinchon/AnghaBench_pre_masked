
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct btc_coexist {int (* btc_set ) (struct btc_coexist*,int ,int*) ;} ;
struct TYPE_2__ {int force_lps_on; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_0 (struct btc_coexist*,int ,int,int) ;
 int FUNC_1 (struct btc_coexist*,int) ;
 int FUNC_2 (struct btc_coexist*,int ,int*) ;
 int FUNC_3 (struct btc_coexist*,int ,int*) ;
 int FUNC_4 (struct btc_coexist*,int ,int*) ;
 int FUNC_5 (struct btc_coexist*,int ,int*) ;
 int FUNC_6 (struct btc_coexist*,int ,int*) ;

__attribute__((used)) static void FUNC_7(struct btc_coexist *VAR_6,
          u8 VAR_7, u8 VAR_8,
          u8 VAR_9)
{
 bool VAR_10 = 0;

 switch (VAR_7) {
 case 128:

  VAR_10 = 0;
  VAR_6->btc_set(VAR_6, VAR_0,
       &VAR_10);
  VAR_6->btc_set(VAR_6, VAR_3, ((void*)0));
  VAR_5->force_lps_on = 0;
  break;
 case 129:
  FUNC_1(VAR_6, 1);
  FUNC_0(VAR_6, VAR_4, VAR_8,
      VAR_9);

  VAR_10 = 1;
  VAR_6->btc_set(VAR_6, VAR_0,
       &VAR_10);

  VAR_6->btc_set(VAR_6, VAR_1, ((void*)0));
  VAR_5->force_lps_on = 1;
  break;
 case 130:
  FUNC_1(VAR_6, 0);
  VAR_6->btc_set(VAR_6, VAR_2, ((void*)0));
  VAR_5->force_lps_on = 0;
  break;
 default:
  break;
 }
}
