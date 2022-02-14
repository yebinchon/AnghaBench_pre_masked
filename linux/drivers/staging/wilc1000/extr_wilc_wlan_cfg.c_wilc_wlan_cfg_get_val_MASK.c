
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_10__ {TYPE_4__* s; TYPE_3__* w; TYPE_2__* hw; TYPE_1__* b; } ;
struct wilc {TYPE_5__ cfg; } ;
struct TYPE_9__ {scalar_t__ id; int * str; } ;
struct TYPE_8__ {scalar_t__ id; int val; } ;
struct TYPE_7__ {scalar_t__ id; int val; } ;
struct TYPE_6__ {scalar_t__ id; int val; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int) ;

int FUNC_2(struct wilc *VAR_5, u16 VAR_6, u8 *VAR_7,
     u32 VAR_8)
{
 u32 VAR_9 = (VAR_6 >> 12) & 0xf;
 int VAR_10, VAR_11 = 0;

 VAR_10 = 0;
 if (VAR_9 == VAR_0) {
  do {
   if (VAR_5->cfg.b[VAR_10].id == VAR_4)
    break;

   if (VAR_5->cfg.b[VAR_10].id == VAR_6) {
    FUNC_1(VAR_7, &VAR_5->cfg.b[VAR_10].val, 1);
    VAR_11 = 1;
    break;
   }
   VAR_10++;
  } while (1);
 } else if (VAR_9 == VAR_1) {
  do {
   if (VAR_5->cfg.hw[VAR_10].id == VAR_4)
    break;

   if (VAR_5->cfg.hw[VAR_10].id == VAR_6) {
    FUNC_1(VAR_7, &VAR_5->cfg.hw[VAR_10].val, 2);
    VAR_11 = 2;
    break;
   }
   VAR_10++;
  } while (1);
 } else if (VAR_9 == VAR_3) {
  do {
   if (VAR_5->cfg.w[VAR_10].id == VAR_4)
    break;

   if (VAR_5->cfg.w[VAR_10].id == VAR_6) {
    FUNC_1(VAR_7, &VAR_5->cfg.w[VAR_10].val, 4);
    VAR_11 = 4;
    break;
   }
   VAR_10++;
  } while (1);
 } else if (VAR_9 == VAR_2) {
  do {
   u32 VAR_12 = VAR_5->cfg.s[VAR_10].id;

   if (VAR_12 == VAR_4)
    break;

   if (VAR_12 == VAR_6) {
    u16 VAR_13 = FUNC_0(VAR_5->cfg.s[VAR_10].str);

    if (VAR_8 >= VAR_13) {
     FUNC_1(VAR_7, &VAR_5->cfg.s[VAR_10].str[2],
            VAR_13);
     VAR_11 = VAR_13;
    }
    break;
   }
   VAR_10++;
  } while (1);
 }
 return VAR_11;
}
