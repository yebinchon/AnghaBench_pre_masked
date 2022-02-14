
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (int const) ;
 int VAR_0 ;
 unsigned char* VAR_1 ;

__attribute__((used)) static void FUNC_1(const int *VAR_2, unsigned char *VAR_3, unsigned int VAR_4, unsigned int VAR_5)
{
 int VAR_6;
 const int *VAR_7 = VAR_2;
 const int *VAR_8 = VAR_2 + 4;
 unsigned char *VAR_9 = VAR_3;

 for (VAR_6 = 0; VAR_6 < 4; VAR_6++, VAR_7++, VAR_8++) {
  *VAR_9++ = FUNC_0((*VAR_7) >> VAR_5);
  *VAR_9++ = FUNC_0((*VAR_8) >> VAR_5);
 }
 VAR_7 = VAR_2 + 12;
 VAR_9 = VAR_3 + VAR_4;
 for (VAR_6 = 0; VAR_6 < 4; VAR_6++, VAR_7++, VAR_8++) {
  *VAR_9++ = FUNC_0((*VAR_7) >> VAR_5);
  *VAR_9++ = FUNC_0((*VAR_8) >> VAR_5);
 }

}
