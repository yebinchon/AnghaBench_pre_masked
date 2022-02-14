
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int efx_qword_t ;


 unsigned int VAR_0 ;

__attribute__((used)) static bool FUNC_0(unsigned VAR_1, unsigned VAR_2)
{
 unsigned VAR_3 = VAR_2 *
  sizeof(efx_qword_t) / VAR_0;

 return ((VAR_1 & (VAR_1 - 1)) || VAR_1 > VAR_3);
}
