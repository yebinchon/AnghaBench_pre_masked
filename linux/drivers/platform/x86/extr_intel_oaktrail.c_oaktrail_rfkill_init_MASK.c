
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int FUNC_2 () ;
 int * FUNC_3 (char*,int ,int ) ;
 int * VAR_10 ;
 int * VAR_11 ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_12;

 VAR_10 = FUNC_3("oaktrail-wifi",
       VAR_6,
       VAR_2);
 if (FUNC_0(VAR_10)) {
  VAR_12 = FUNC_1(VAR_10);
  VAR_10 = ((void*)0);
  goto cleanup;
 }

 VAR_8 = FUNC_3("oaktrail-bluetooth",
     VAR_4,
     VAR_0);
 if (FUNC_0(VAR_8)) {
  VAR_12 = FUNC_1(VAR_8);
  VAR_8 = ((void*)0);
  goto cleanup;
 }

 VAR_9 = FUNC_3("oaktrail-gps",
      VAR_5,
      VAR_1);
 if (FUNC_0(VAR_9)) {
  VAR_12 = FUNC_1(VAR_9);
  VAR_9 = ((void*)0);
  goto cleanup;
 }

 VAR_11 = FUNC_3("oaktrail-wwan",
       VAR_7,
       VAR_3);
 if (FUNC_0(VAR_11)) {
  VAR_12 = FUNC_1(VAR_11);
  VAR_11 = ((void*)0);
  goto cleanup;
 }

 return 0;

cleanup:
 FUNC_2();
 return VAR_12;
}
