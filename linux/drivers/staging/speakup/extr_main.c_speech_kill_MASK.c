
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vc_data {int dummy; } ;
struct TYPE_3__ {char (* is_alive ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 char FUNC_1 (TYPE_1__*) ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static void FUNC_3(struct vc_data *VAR_5)
{
 char VAR_6 = VAR_4->is_alive(VAR_4);

 if (VAR_6 == 0)
  return;


 if (VAR_6 == 2 || VAR_2) {

  VAR_3 &= ~0x40;
  FUNC_2("%s\n", FUNC_0(VAR_0));
 } else {
  FUNC_2("%s\n", FUNC_0(VAR_1));
  VAR_3 |= 0x40;
 }
}
