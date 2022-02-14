
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct ehea_bmap {int dummy; } ;
struct TYPE_8__ {TYPE_2__** top; } ;
struct TYPE_7__ {TYPE_1__** dir; } ;
struct TYPE_6__ {int* ent; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 TYPE_3__* VAR_7 ;
 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (TYPE_3__*,int,int) ;
 unsigned long VAR_8 ;
 int FUNC_2 () ;
 TYPE_3__* FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(unsigned long VAR_9, unsigned long VAR_10, int VAR_11)
{
 unsigned long VAR_12, VAR_13, VAR_14;

 if (!VAR_10)
  return 0;

 if (!VAR_7) {
  VAR_7 = FUNC_3(sizeof(struct ehea_bmap), VAR_5);
  if (!VAR_7)
   return -VAR_4;
 }

 VAR_13 = (VAR_9 * VAR_6) / VAR_2;
 VAR_14 = VAR_13 + ((VAR_10 * VAR_6) / VAR_2);

 for (VAR_12 = VAR_13; VAR_12 < VAR_14; VAR_12++) {
  u64 VAR_15;
  int VAR_16 = FUNC_0(VAR_12, VAR_3);
  int VAR_17 = FUNC_0(VAR_12, VAR_0);
  int VAR_18 = VAR_12 & VAR_1;

  if (VAR_11) {
   int VAR_19 = FUNC_1(VAR_7, VAR_16, VAR_17);
   if (VAR_19)
    return VAR_19;
   VAR_15 = 1;
   VAR_8 += VAR_2;
  } else {
   if (!VAR_7->top[VAR_16])
    continue;
   if (!VAR_7->top[VAR_16]->dir[VAR_17])
    continue;
   VAR_15 = 0;
   VAR_8 -= VAR_2;
  }

  VAR_7->top[VAR_16]->dir[VAR_17]->ent[VAR_18] = VAR_15;
 }
 FUNC_2();
 return 0;
}
