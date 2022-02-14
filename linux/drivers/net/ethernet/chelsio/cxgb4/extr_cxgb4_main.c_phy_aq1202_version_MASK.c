
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;

__attribute__((used)) static int FUNC_2(const u8 *VAR_0,
         size_t VAR_1)
{
 int VAR_2;
 VAR_2 = (((VAR_0 + 0x8)[0] | ((VAR_0 + 0x8)[1] << 8)) | ((VAR_0 + 0x8)[2] << 16)) << 12;
 VAR_2 = (((VAR_0 + VAR_2 + 0xa)[0] | ((VAR_0 + VAR_2 + 0xa)[1] << 8)) | ((VAR_0 + VAR_2 + 0xa)[2] << 16));
 return (((VAR_0 + VAR_2 + 0x27e)[0] << 8) | (VAR_0 + VAR_2 + 0x27e)[1]);




}
