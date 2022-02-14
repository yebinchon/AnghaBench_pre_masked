
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_3__ {scalar_t__ NVM_Signature; scalar_t__ NVM_CheckSum; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (unsigned long,int) ;

__attribute__((used)) static int FUNC_1(unsigned long VAR_3)
{
 int VAR_4;
 u16 VAR_5 = 0;
 u16 *VAR_6;

 VAR_2 = &VAR_1;
 VAR_6 = (u16 *) VAR_2;
 for (VAR_4 = 0; VAR_4 < 32; VAR_4++)
  *VAR_6++ = FUNC_0(VAR_3, VAR_4);


 if (VAR_2->NVM_Signature != VAR_0)
  return -1;

 VAR_6 = (u16 *) VAR_2;
 for (VAR_4 = 0; VAR_4 < 31; VAR_4++)
  VAR_5 += *VAR_6++;
 if (VAR_2->NVM_CheckSum != VAR_5)
  return -1;
 return 1;
}
