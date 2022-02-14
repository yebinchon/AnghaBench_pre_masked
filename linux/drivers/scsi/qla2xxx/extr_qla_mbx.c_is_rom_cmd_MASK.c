
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct rom_cmd {scalar_t__ cmd; } ;


 int FUNC_0 (struct rom_cmd*) ;
 struct rom_cmd* VAR_0 ;

__attribute__((used)) static int FUNC_1(uint16_t VAR_1)
{
 int VAR_2;
 struct rom_cmd *VAR_3;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  VAR_3 = VAR_0 + VAR_2;
  if (VAR_3->cmd == VAR_1)
   return 1;
 }

 return 0;
}
