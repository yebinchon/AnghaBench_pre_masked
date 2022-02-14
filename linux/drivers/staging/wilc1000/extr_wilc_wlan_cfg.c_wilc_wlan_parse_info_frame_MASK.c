
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
struct TYPE_3__ {TYPE_2__* b; } ;
struct wilc {TYPE_1__ cfg; } ;
struct TYPE_4__ {scalar_t__ id; void* val; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void**) ;

__attribute__((used)) static void FUNC_1(struct wilc *VAR_2, u8 *VAR_3)
{
 u32 VAR_4, VAR_5;

 VAR_4 = FUNC_0(VAR_3);

 VAR_5 = VAR_3[2];

 if (VAR_5 == 1 && VAR_4 == VAR_1) {
  int VAR_6 = 0;

  do {
   if (VAR_2->cfg.b[VAR_6].id == VAR_0)
    break;

   if (VAR_2->cfg.b[VAR_6].id == VAR_4) {
    VAR_2->cfg.b[VAR_6].val = VAR_3[3];
    break;
   }
   VAR_6++;
  } while (1);
 }
}
