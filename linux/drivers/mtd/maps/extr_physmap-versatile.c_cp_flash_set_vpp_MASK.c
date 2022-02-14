
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_2(struct map_info *VAR_5, int VAR_6)
{
 int VAR_7;

 if (VAR_6) {
  VAR_7 = FUNC_1(VAR_4,
    VAR_3,
    VAR_0,
    VAR_1 | VAR_2);
  if (VAR_7)
   FUNC_0("error setting CP VPP\n");
 } else {
  VAR_7 = FUNC_1(VAR_4,
    VAR_3,
    VAR_0,
    0);
  if (VAR_7)
   FUNC_0("error setting CP VPP\n");
 }
}
