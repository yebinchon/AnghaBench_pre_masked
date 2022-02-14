
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;

__attribute__((used)) static void *FUNC_1( void *VAR_0, const void *VAR_1, size_t VAR_2 )

{ char *VAR_3 = VAR_0;
 const char *VAR_4 = VAR_1;

 while( VAR_2-- ) {
  *VAR_3++ = *VAR_4++;
  FUNC_0();
 }
 return VAR_0;
}
