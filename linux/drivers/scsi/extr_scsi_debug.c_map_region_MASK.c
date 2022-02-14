
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sector_t ;


 unsigned long FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (unsigned long,int ) ;

__attribute__((used)) static void FUNC_3(sector_t VAR_2, unsigned int VAR_3)
{
 sector_t VAR_4 = VAR_2 + VAR_3;

 while (VAR_2 < VAR_4) {
  unsigned long VAR_5 = FUNC_0(VAR_2);

  if (VAR_5 < VAR_0)
   FUNC_2(VAR_5, VAR_1);

  VAR_2 = FUNC_1(VAR_5 + 1);
 }
}
