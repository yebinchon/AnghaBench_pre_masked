
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,unsigned int,int *) ;
 int FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (unsigned int,unsigned int,int const*) ;

__attribute__((used)) static u8 FUNC_3(unsigned int VAR_2, unsigned int VAR_3,
          const u8 *VAR_4)
{
 int VAR_5 = FUNC_1(VAR_2, VAR_3);

 if (VAR_5 < 0)
  return 0;

 return VAR_5 ?
  FUNC_0(VAR_1,
      VAR_2 - VAR_0,
      VAR_3, (u8 *)VAR_4) :
  FUNC_2(VAR_2, VAR_3, VAR_4);
}
