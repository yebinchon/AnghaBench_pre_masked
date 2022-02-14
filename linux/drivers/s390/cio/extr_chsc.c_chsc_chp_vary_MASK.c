
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chp_id {int dummy; } ;
struct channel_path {int dummy; } ;


 int FUNC_0 (struct channel_path*) ;
 struct channel_path* FUNC_1 (struct chp_id) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int *,struct chp_id*) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_5(struct chp_id VAR_2, int VAR_3)
{
 struct channel_path *VAR_4 = FUNC_1(VAR_2);


 FUNC_3();



 if (VAR_3) {

  FUNC_0(VAR_4);
  FUNC_4(VAR_1,
        ((void*)0), &VAR_2);
  FUNC_2();
 } else
  FUNC_4(VAR_0,
        ((void*)0), &VAR_2);

 return 0;
}
