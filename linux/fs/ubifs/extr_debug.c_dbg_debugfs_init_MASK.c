
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int *) ;
 void* FUNC_1 (char const*,int,int ,int *,int *) ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;

void FUNC_2(void)
{
 const char *VAR_10;

 VAR_10 = "ubifs";
 VAR_8 = FUNC_0(VAR_10, ((void*)0));

 VAR_10 = "chk_general";
 VAR_3 = FUNC_1(VAR_10, VAR_0 | VAR_1, VAR_8,
       ((void*)0), &VAR_7);

 VAR_10 = "chk_index";
 VAR_4 = FUNC_1(VAR_10, VAR_0 | VAR_1,
         VAR_8, ((void*)0), &VAR_7);

 VAR_10 = "chk_orphans";
 VAR_6 = FUNC_1(VAR_10, VAR_0 | VAR_1,
        VAR_8, ((void*)0), &VAR_7);

 VAR_10 = "chk_lprops";
 VAR_5 = FUNC_1(VAR_10, VAR_0 | VAR_1,
          VAR_8, ((void*)0), &VAR_7);

 VAR_10 = "chk_fs";
 VAR_2 = FUNC_1(VAR_10, VAR_0 | VAR_1, VAR_8,
      ((void*)0), &VAR_7);

 VAR_10 = "tst_recovery";
 VAR_9 = FUNC_1(VAR_10, VAR_0 | VAR_1,
         VAR_8, ((void*)0), &VAR_7);
}
