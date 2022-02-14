
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct controller {int pending_events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct controller*) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct controller*) ;
 int FUNC_4 (struct controller*,int ,int ) ;
 int FUNC_5 (struct controller*,int) ;

__attribute__((used)) static void FUNC_6(struct controller *VAR_4, bool VAR_5)
{
 FUNC_5(VAR_4, VAR_5);

 if (FUNC_0(VAR_4)) {
  FUNC_3(VAR_4);






  FUNC_2(1000);


  FUNC_1(~(VAR_2 | VAR_3),
      &VAR_4->pending_events);
 }

 FUNC_4(VAR_4, VAR_1,
         VAR_0);
}
