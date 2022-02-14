
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char,int *,int ,int *,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_3, bool VAR_4)
{
 unsigned char VAR_5;
 int VAR_6;

 if (VAR_4 == VAR_2)
  return 0;

 if (VAR_4)
  VAR_5 = VAR_0;
 else
  VAR_5 = VAR_1;

 VAR_6 = FUNC_0(VAR_5, ((void*)0), 0, ((void*)0), 0);
 if (VAR_6 == 0)
  VAR_2 = VAR_4;

 return VAR_6;
}
