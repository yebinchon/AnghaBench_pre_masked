
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char const VAR_0 ;
 unsigned char const VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static unsigned int FUNC_0(const char *VAR_3)
{
 const unsigned char *VAR_4 = (const unsigned char*)VAR_3;
 unsigned int VAR_5 = 0;

 if (*VAR_4 < 0x80) {
  VAR_5 = *VAR_4;
 } else if (*VAR_4 < VAR_0) {
  VAR_5 = *VAR_4++ & 0x1F;
  VAR_5 <<= VAR_2;
  VAR_5 |= *VAR_4 & 0x3F;
 } else if (*VAR_4 < VAR_1) {
  VAR_5 = *VAR_4++ & 0x0F;
  VAR_5 <<= VAR_2;
  VAR_5 |= *VAR_4++ & 0x3F;
  VAR_5 <<= VAR_2;
  VAR_5 |= *VAR_4 & 0x3F;
 } else {
  VAR_5 = *VAR_4++ & 0x0F;
  VAR_5 <<= VAR_2;
  VAR_5 |= *VAR_4++ & 0x3F;
  VAR_5 <<= VAR_2;
  VAR_5 |= *VAR_4++ & 0x3F;
  VAR_5 <<= VAR_2;
  VAR_5 |= *VAR_4 & 0x3F;
 }
 return VAR_5;
}
