
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dbell_entry {int idx; int node; int resource; } ;
struct TYPE_2__ {int lock; int * entries; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__ VAR_5 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct dbell_entry *VAR_6)
{
 u32 VAR_7;
 u32 VAR_8;

 FUNC_5(&VAR_6->resource);

 FUNC_3(&VAR_5.lock);
 if (VAR_3 < VAR_0 || VAR_4 < VAR_0) {
  if (VAR_1 < VAR_3 &&
      !FUNC_1(VAR_1)) {
   VAR_8 = VAR_1;
   VAR_1 = VAR_0;
  } else {
   bool VAR_9 = 0;
   VAR_8 = VAR_2;
   if (VAR_4 + 1 < VAR_3) {
    do {
     if (!FUNC_1
         (VAR_8)) {
      VAR_9 = 1;
      break;
     }
     VAR_8 = (VAR_8 + 1) %
         VAR_3;
    } while (VAR_8 !=
      VAR_1);
   }
   if (!VAR_9) {
    VAR_8 = VAR_3;
    VAR_3++;
   }
  }
 } else {
  VAR_8 = (VAR_2 + 1) % VAR_0;
 }

 VAR_2 = VAR_8;
 VAR_4++;

 VAR_6->idx = VAR_8;
 VAR_7 = FUNC_0(VAR_6->idx);
 FUNC_2(&VAR_6->node, &VAR_5.entries[VAR_7]);

 FUNC_4(&VAR_5.lock);
}
