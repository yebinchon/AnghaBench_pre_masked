
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int *) ;
 int FUNC_1 (char*,int,int ,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_4;

 VAR_2 = FUNC_0("visornic", ((void*)0));

 FUNC_1("info", 0400, VAR_2, ((void*)0),
       &VAR_1);
 FUNC_1("enable_ints", 0200, VAR_2, ((void*)0),
       &VAR_0);

 VAR_4 = FUNC_3(&VAR_3);
 if (VAR_4)
  FUNC_2(VAR_2);

 return VAR_4;
}
