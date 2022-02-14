
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hal_com_data {int odmpriv; } ;
struct adapter {int hw_init_completed; int mlmepriv; } ;
struct TYPE_2__ {int bFwCurrentInPSMode; } ;


 struct hal_com_data* FUNC_0 (struct adapter*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 TYPE_1__* FUNC_3 (struct adapter*) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (struct adapter*) ;
 int FUNC_6 (struct adapter*) ;
 int FUNC_7 (struct adapter*) ;
 int FUNC_8 (struct adapter*,int ,int*) ;
 scalar_t__ FUNC_9 (struct adapter*) ;

void FUNC_10(struct adapter *VAR_5)
{
 bool VAR_6 = 0;
 bool VAR_7 = 1;
 u8 VAR_8 = 0;
 struct hal_com_data *VAR_9 = FUNC_0(VAR_5);

 VAR_8 = VAR_5->hw_init_completed;

 if (VAR_8 == 0)
  goto skip_dm;

 VAR_6 = FUNC_3(VAR_5)->bFwCurrentInPSMode;
 FUNC_8(VAR_5, VAR_0, (u8 *)(&VAR_7));

 if (
  (VAR_8 == 1) &&
  ((!VAR_6) && VAR_7)
 ) {



  FUNC_5(VAR_5);
  FUNC_7(VAR_5);
 }


 if (VAR_8 == 1) {
  u8 VAR_10 = 0;
  u8 VAR_11 = 0;
  bool VAR_12 = 1;

  if (FUNC_9(VAR_5)) {
   VAR_10 = 1;
   if (FUNC_4(&VAR_5->mlmepriv, VAR_4))
    VAR_11 = 1;
  }

  FUNC_1(&VAR_9->odmpriv, VAR_2, VAR_10);
  FUNC_1(&VAR_9->odmpriv, VAR_3, VAR_11);



  VAR_12 = FUNC_6(VAR_5);

  FUNC_1(&VAR_9->odmpriv, VAR_1, ((VAR_12 == 1)?0:1));

  FUNC_2(&VAR_9->odmpriv);
 }

skip_dm:
 return;
}
