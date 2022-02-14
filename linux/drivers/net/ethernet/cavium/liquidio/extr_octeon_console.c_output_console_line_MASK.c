
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct octeon_device {int dummy; } ;
struct octeon_console {char* leftover; int (* print ) (struct octeon_device*,int ,char*,char*) ;} ;
typedef size_t s32 ;


 size_t FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (struct octeon_device*,int ,char*,char*) ;
 int FUNC_3 (struct octeon_device*,int ,char*,char*) ;

__attribute__((used)) static void FUNC_4(struct octeon_device *VAR_0,
    struct octeon_console *VAR_1,
    size_t VAR_2,
    char *VAR_3,
    s32 VAR_4)
{
 char *VAR_5;
 s32 VAR_6;
 size_t VAR_7;

 VAR_5 = VAR_3;
 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {

  if (VAR_3[VAR_6] == '\n') {
   VAR_3[VAR_6] = '\0';







   if (VAR_1->leftover[0] &&
       (VAR_5 != VAR_1->leftover)) {
    if (VAR_1->print)
     (*VAR_1->print)(VAR_0, (u32)VAR_2,
         VAR_1->leftover,
         VAR_5);
    VAR_1->leftover[0] = '\0';
   } else {
    if (VAR_1->print)
     (*VAR_1->print)(VAR_0, (u32)VAR_2,
         VAR_5, ((void*)0));
   }
   VAR_5 = &VAR_3[VAR_6 + 1];
  }
 }


 if (VAR_5 != &VAR_3[VAR_4]) {
  VAR_3[VAR_4] = '\0';
  VAR_7 = FUNC_0(VAR_1->leftover);
  FUNC_1(&VAR_1->leftover[VAR_7], VAR_5,
   sizeof(VAR_1->leftover) - VAR_7);
 }
}
