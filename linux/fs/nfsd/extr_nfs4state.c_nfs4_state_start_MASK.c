
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (char*,int ,int ,char*) ;
 int FUNC_1 (int *) ;
 int * VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 () ;

int
FUNC_4(void)
{
 int VAR_3;

 VAR_2 = FUNC_0("%s", VAR_1, 0, "nfsd4");
 if (VAR_2 == ((void*)0)) {
  VAR_3 = -VAR_0;
  goto out;
 }
 VAR_3 = FUNC_2();
 if (VAR_3)
  goto out_free_laundry;

 FUNC_3();
 return 0;

out_free_laundry:
 FUNC_1(VAR_2);
out:
 return VAR_3;
}
