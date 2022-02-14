
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
typedef void* u16 ;
struct wilc_cfg_word {int val; void* id; } ;
struct wilc_cfg_hword {void* val; void* id; } ;
struct TYPE_6__ {TYPE_2__* s; struct wilc_cfg_word* w; struct wilc_cfg_hword* hw; TYPE_1__* b; } ;
struct wilc {TYPE_3__ cfg; } ;
struct TYPE_5__ {int str; void* id; } ;
struct TYPE_4__ {int val; void* id; } ;


 int FUNC_0 (void*) ;


 void* VAR_0 ;


 void* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_4(struct wilc *VAR_1, u8 *VAR_2, int VAR_3)
{
 u16 VAR_4;
 u32 VAR_5 = 0, VAR_6 = 0;

 while (VAR_3 > 0) {
  VAR_6 = 0;
  VAR_4 = FUNC_1(VAR_2);

  switch (FUNC_0(VAR_4)) {
  case 131:
   do {
    if (VAR_1->cfg.b[VAR_6].id == VAR_0)
     break;

    if (VAR_1->cfg.b[VAR_6].id == VAR_4) {
     VAR_1->cfg.b[VAR_6].val = VAR_2[4];
     break;
    }
    VAR_6++;
   } while (1);
   VAR_5 = 3;
   break;

  case 129:
   do {
    struct wilc_cfg_hword *VAR_7 = &VAR_1->cfg.hw[VAR_6];

    if (VAR_7->id == VAR_0)
     break;

    if (VAR_7->id == VAR_4) {
     VAR_7->val = FUNC_1(&VAR_2[4]);
     break;
    }
    VAR_6++;
   } while (1);
   VAR_5 = 4;
   break;

  case 130:
   do {
    struct wilc_cfg_word *VAR_8 = &VAR_1->cfg.w[VAR_6];

    if (VAR_8->id == VAR_0)
     break;

    if (VAR_8->id == VAR_4) {
     VAR_8->val = FUNC_2(&VAR_2[4]);
     break;
    }
    VAR_6++;
   } while (1);
   VAR_5 = 6;
   break;

  case 128:
   do {
    if (VAR_1->cfg.s[VAR_6].id == VAR_0)
     break;

    if (VAR_1->cfg.s[VAR_6].id == VAR_4) {
     FUNC_3(VAR_1->cfg.s[VAR_6].str, &VAR_2[2],
            (VAR_2[2] + 2));
     break;
    }
    VAR_6++;
   } while (1);
   VAR_5 = 2 + VAR_2[2];
   break;

  default:
   break;
  }
  VAR_3 -= (2 + VAR_5);
  VAR_2 += (2 + VAR_5);
 }
}
