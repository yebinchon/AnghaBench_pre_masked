
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static int FUNC_2(const uint8_t **VAR_1, uint16_t *VAR_2, uint32_t *VAR_3,
  uint16_t *VAR_4, const uint8_t **VAR_5)
{
 uint16_t VAR_6[2];
 const uint8_t *VAR_7;
 const uint8_t *VAR_8;
 VAR_7 = *VAR_1;
 *VAR_2 = FUNC_0((void *)&VAR_7[0]);
 *VAR_3 = FUNC_1((void *)&VAR_7[2]);
 *VAR_4 = FUNC_0((void *)&VAR_7[6]);
 *VAR_5 = &VAR_7[8];

 VAR_8 = &VAR_7[8 + *VAR_4];
 VAR_6[0] = FUNC_0((void *)VAR_8);
 for (VAR_6[1] = 0; VAR_7 < VAR_8; ++VAR_7)
  VAR_6[1] += *VAR_7;
 if (VAR_6[0] != VAR_6[1])
  return -VAR_0;

 *VAR_1 += 10 + *VAR_4;
 return 0;
}
