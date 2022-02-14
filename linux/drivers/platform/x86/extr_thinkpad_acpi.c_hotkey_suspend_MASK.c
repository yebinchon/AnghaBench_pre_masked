
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ has_adaptive_kbd; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,char*,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static void FUNC_2(void)
{

 VAR_4 = VAR_0;
 VAR_3 = 0;


 if (VAR_5.has_adaptive_kbd) {
  if (!FUNC_0(VAR_2, &VAR_1,
     "GTRW", "dd", 0)) {
   FUNC_1("Cannot read adaptive keyboard mode.\n");
  }
 }
}
