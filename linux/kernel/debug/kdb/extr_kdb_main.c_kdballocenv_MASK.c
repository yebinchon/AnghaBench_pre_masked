
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static char *FUNC_0(size_t VAR_1)
{

 static char VAR_2[512];
 static int VAR_3;
 char *VAR_4 = ((void*)0);

 if ((512 - VAR_3) >= VAR_1) {
  VAR_4 = &VAR_2[VAR_3];
  VAR_3 += VAR_1;
 }
 return VAR_4;
}
