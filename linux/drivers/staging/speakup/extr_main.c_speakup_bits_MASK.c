
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vc_data {int dummy; } ;
struct TYPE_3__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 char* FUNC_0 (int ) ;
 TYPE_1__* VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (char*,char*) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_2(struct vc_data *VAR_8)
{
 int VAR_9 = VAR_7 - (VAR_0 - 1);

 if (VAR_6 || VAR_9 < 1 || VAR_9 > 6) {
  FUNC_1("%s\n", FUNC_0(VAR_2));
  return;
 }
 VAR_4 = &VAR_5[VAR_9];
 FUNC_1(FUNC_0(VAR_1), VAR_4->name);
 VAR_6 = VAR_3;
}
