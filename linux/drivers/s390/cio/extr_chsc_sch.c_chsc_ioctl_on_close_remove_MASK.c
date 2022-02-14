
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dbf ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_5 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_6(void)
{
 char VAR_4[13];
 int VAR_5;

 FUNC_3(&VAR_2);
 if (!VAR_1) {
  VAR_5 = -VAR_0;
  goto out_unlock;
 }
 FUNC_1((unsigned long)VAR_1);
 VAR_1 = ((void*)0);
 FUNC_2(VAR_3);
 VAR_3 = ((void*)0);
 VAR_5 = 0;
out_unlock:
 FUNC_4(&VAR_2);
 FUNC_5(VAR_4, sizeof(VAR_4), "ocrret:%d", VAR_5);
 FUNC_0(0, VAR_4);
 return VAR_5;
}
