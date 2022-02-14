
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct lpc18xx_otp {scalar_t__ base; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(void *VAR_2, unsigned int VAR_3,
       void *VAR_4, size_t VAR_5)
{
 struct lpc18xx_otp *VAR_6 = VAR_2;
 unsigned int VAR_7 = VAR_5 >> 2;
 u32 VAR_8 = VAR_3 >> 2;
 u32 *VAR_9 = VAR_4;
 int VAR_10;

 if (VAR_7 > (VAR_0 - VAR_8))
  VAR_7 = VAR_0 - VAR_8;

 for (VAR_10 = VAR_8; VAR_10 < (VAR_8 + VAR_7); VAR_10++)
  *VAR_9++ = FUNC_0(VAR_6->base + VAR_10 * VAR_1);

 return 0;
}
