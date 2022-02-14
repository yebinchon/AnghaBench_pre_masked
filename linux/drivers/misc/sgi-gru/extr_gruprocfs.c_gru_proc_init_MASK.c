
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,int ,int *) ;
 int FUNC_1 (char*,int,int ,int *) ;
 int VAR_4 ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (char*,int *) ;
 int VAR_5 ;

int FUNC_4(void)
{
 VAR_4 = FUNC_2("sgi_uv/gru", ((void*)0));
 if (!VAR_4)
  return -1;
 if (!FUNC_0("statistics", 0644, VAR_4, &VAR_5))
  goto err;
 if (!FUNC_0("mcs_statistics", 0644, VAR_4, &VAR_2))
  goto err;
 if (!FUNC_0("debug_options", 0644, VAR_4, &VAR_3))
  goto err;
 if (!FUNC_1("cch_status", 0444, VAR_4, &VAR_0))
  goto err;
 if (!FUNC_1("gru_status", 0444, VAR_4, &VAR_1))
  goto err;
 return 0;
err:
 FUNC_3("sgi_uv/gru", ((void*)0));
 return -1;
}
