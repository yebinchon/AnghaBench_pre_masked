
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct svc_rqst*) ;
 int FUNC_6 (struct svc_rqst*) ;
 int FUNC_7 (struct svc_rqst*,int ) ;

__attribute__((used)) static int
FUNC_8(void *VAR_4)
{
 int VAR_5;
 struct svc_rqst *VAR_6 = VAR_4;

 FUNC_3();

 while (!FUNC_1(((void*)0))) {

  if (FUNC_4(VAR_3))
   FUNC_0(VAR_3);



  VAR_5 = FUNC_7(VAR_6, VAR_2);
  if (VAR_5 == -VAR_0 || VAR_5 == -VAR_1)
   continue;
  FUNC_6(VAR_6);
 }
 FUNC_5(VAR_6);
 FUNC_2(0);
 return 0;
}
