
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radio_isa_card {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(struct radio_isa_card *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;

 VAR_5 = FUNC_0(VAR_3);


 for (VAR_4 = 0; VAR_4 < 3; ++VAR_4) {
  FUNC_1(1 << VAR_4, VAR_3);
  FUNC_2(VAR_1);

  if ((FUNC_0(VAR_3) & ~VAR_0) != (0x17 | (1 << (VAR_4 + 5))))
   return 0;
 }
 FUNC_1(VAR_5 >> 5, VAR_3);
 FUNC_2(VAR_1);
 return 1;
}
