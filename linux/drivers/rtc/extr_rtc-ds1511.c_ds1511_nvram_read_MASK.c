
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_2, unsigned int VAR_3, void *VAR_4,
        size_t VAR_5)
{
 int VAR_6;

 FUNC_1(VAR_3, VAR_0);
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
  *(char *)VAR_4++ = FUNC_0(VAR_1);

 return 0;
}
