
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct nicvf {TYPE_1__* qs; } ;
struct TYPE_4__ {char* name; } ;
struct TYPE_3__ {int rq_cnt; int sq_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 (int *,char*,int,char*) ;

__attribute__((used)) static void FUNC_1(struct nicvf *VAR_4, u8 **VAR_5, int VAR_6)
{
 int VAR_7, VAR_8;
 int VAR_9 = VAR_6 * VAR_1;

 for (VAR_8 = 0; VAR_8 < VAR_4->qs->rq_cnt; VAR_8++) {
  for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
   FUNC_0(*VAR_5, "rxq%d: %s", VAR_8 + VAR_9,
    VAR_3[VAR_7].name);
   *VAR_5 += VAR_0;
  }
 }

 for (VAR_8 = 0; VAR_8 < VAR_4->qs->sq_cnt; VAR_8++) {
  for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
   FUNC_0(*VAR_5, "txq%d: %s", VAR_8 + VAR_9,
    VAR_3[VAR_7].name);
   *VAR_5 += VAR_0;
  }
 }
}
