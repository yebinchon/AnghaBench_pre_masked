
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct esp {scalar_t__ rev; scalar_t__ prev_cfg3; TYPE_1__* target; } ;
struct TYPE_2__ {scalar_t__ esp_config3; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct esp *VAR_2, int VAR_3)
{
 if (VAR_2->rev > VAR_0) {
  u8 VAR_4 = VAR_2->target[VAR_3].esp_config3;

  if (VAR_4 != VAR_2->prev_cfg3) {
   VAR_2->prev_cfg3 = VAR_4;
   FUNC_0(VAR_4, VAR_1);
  }
 }
}
