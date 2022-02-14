
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int (* fBtcGet ) (TYPE_1__*,int ,int*) ;} ;
typedef TYPE_1__* PBTC_COEXIST ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,int*) ;
 int FUNC_1 (TYPE_1__*,int ,int*) ;
 int FUNC_2 (TYPE_1__*,int ,int*) ;
 int FUNC_3 (TYPE_1__*,int ,int*) ;

__attribute__((used)) static bool FUNC_4(PBTC_COEXIST VAR_4)
{
 static bool VAR_5, VAR_6, VAR_7;
 bool VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;
 bool VAR_11 = 0;

 VAR_4->fBtcGet(
  VAR_4, VAR_3, &VAR_11
 );
 VAR_4->fBtcGet(VAR_4, VAR_2, &VAR_8);
 VAR_4->fBtcGet(VAR_4, VAR_0, &VAR_10);
 VAR_4->fBtcGet(
  VAR_4, VAR_1, &VAR_9
 );

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
