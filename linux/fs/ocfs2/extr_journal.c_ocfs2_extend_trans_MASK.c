
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int h_buffer_credits; } ;
typedef TYPE_1__ handle_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int) ;

int FUNC_6(handle_t *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3;

 FUNC_0(!VAR_0);
 FUNC_0(VAR_1 < 0);

 if (!VAR_1)
  return 0;

 VAR_3 = VAR_0->h_buffer_credits;

 FUNC_4(VAR_3, VAR_1);




 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2 < 0) {
  FUNC_3(VAR_2);
  goto bail;
 }


 if (VAR_2 > 0) {
  FUNC_5(VAR_3 + VAR_1);
  VAR_2 = FUNC_2(VAR_0,
           VAR_3 + VAR_1);
  if (VAR_2 < 0) {
   FUNC_3(VAR_2);
   goto bail;
  }
 }

 VAR_2 = 0;
bail:
 return VAR_2;
}
