
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ,int ,int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 () ;

int FUNC_3(void)
{
 int VAR_7;

 FUNC_1(&VAR_3, VAR_0,
       VAR_4, ((void*)0), VAR_2);
 FUNC_1(&VAR_6, VAR_1,
       VAR_5, ((void*)0), VAR_2);

 VAR_7 = FUNC_0(((void*)0), &VAR_6);
 if (VAR_7 == 0)
  VAR_7 = FUNC_0(((void*)0), &VAR_3);

 if (VAR_7)
  FUNC_2();

 return VAR_7;
}
