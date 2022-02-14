
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (unsigned int) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(void *VAR_3, unsigned int VAR_4, void *VAR_5,
      size_t VAR_6)
{
 unsigned char *VAR_7 = VAR_5;
 int VAR_8;

 VAR_4 += VAR_0;
 FUNC_2(&VAR_2);
 for (VAR_8 = 0; VAR_6; VAR_6--, VAR_4++, VAR_8++) {
  if (VAR_4 < 128)
   *VAR_7++ = FUNC_0(VAR_4);
  else if (VAR_1)
   *VAR_7++ = FUNC_1(VAR_4);
  else
   break;
 }
 FUNC_3(&VAR_2);

 return VAR_8;
}
