
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned char const*) ;

__attribute__((used)) static inline unsigned int FUNC_1(const unsigned char *VAR_1)
{
 unsigned int VAR_2 = 0;
 int VAR_3;
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1);

 VAR_4 &= 0x3f;
 for (VAR_3 = 6; --VAR_3 >= 0; ) {
  VAR_2 <<= 1;
  VAR_2 |= (VAR_4 & 0x1);
  VAR_4 >>= 1;
 }

 return VAR_2;
}
