
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_context {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct pvr2_context*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct pvr2_context* VAR_3 ;
 int FUNC_2 (struct pvr2_context*,int ) ;
 scalar_t__ FUNC_3 () ;
 int VAR_4 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(void *VAR_5)
{
 struct pvr2_context *VAR_6;

 FUNC_4(VAR_0,"pvr2_context thread start");

 do {
  while ((VAR_6 = VAR_3) != ((void*)0)) {
   FUNC_2(VAR_6, 0);
   FUNC_1(VAR_6);
  }
  FUNC_5(
   VAR_4,
   ((VAR_3 != ((void*)0)) ||
    FUNC_3()));
 } while (!FUNC_3());

 VAR_1 = !0;
 FUNC_6(&VAR_2);

 FUNC_4(VAR_0,"pvr2_context thread cleaned up");

 FUNC_5(
  VAR_4,
  FUNC_0());

 FUNC_4(VAR_0,"pvr2_context thread end");

 return 0;
}
