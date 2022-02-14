
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
typedef int __le16 ;


 int FUNC_0 (int ) ;

__attribute__((used)) static u16 FUNC_1(const u8 *VAR_0,
       const u8 *VAR_1,
       size_t VAR_2,
       unsigned int *VAR_3)
{
 const u8 *VAR_4;
 unsigned int VAR_5 = *VAR_3;
 u16 VAR_6;

 if (VAR_5 < VAR_2)
  VAR_4 = VAR_0;
 else {
  VAR_4 = VAR_1;
  VAR_5 -= VAR_2;
 }
 VAR_6 = FUNC_0(*((__le16 *)(VAR_4 + VAR_5)));
 *VAR_3 += 2;

 return VAR_6;
}
