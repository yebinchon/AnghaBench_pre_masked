
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int h_buffer_credits; } ;
typedef TYPE_1__ handle_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;

int FUNC_5(handle_t *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;

 FUNC_0(!VAR_1);

 VAR_4 = VAR_1->h_buffer_credits;
 FUNC_4(VAR_4, VAR_2);

 if (VAR_4 < VAR_2)
  return 0;

 VAR_3 = FUNC_1(VAR_1, VAR_0);
 if (VAR_3 < 0) {
  FUNC_3(VAR_3);
  goto bail;
 }

 if (VAR_3 > 0) {
  VAR_3 = FUNC_2(VAR_1, VAR_0);
  if (VAR_3 < 0)
   FUNC_3(VAR_3);
 }

bail:
 return VAR_3;
}
