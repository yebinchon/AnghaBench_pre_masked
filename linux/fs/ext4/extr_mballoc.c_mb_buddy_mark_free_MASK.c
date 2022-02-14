
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ext4_buddy {TYPE_1__* bd_info; } ;
struct TYPE_2__ {int* bb_counters; } ;


 scalar_t__ FUNC_0 (int*,void*,int) ;
 int FUNC_1 (void*,int,int) ;
 void* FUNC_2 (struct ext4_buddy*,int,int*) ;

__attribute__((used)) static void FUNC_3(struct ext4_buddy *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3;
 int VAR_4 = 1;
 void *VAR_5 = FUNC_2(VAR_0, VAR_4, &VAR_3);

 while (VAR_5) {
  void *VAR_6;
  if (VAR_1 & 1)
   VAR_0->bd_info->bb_counters[VAR_4] += FUNC_0(&VAR_1, VAR_5, -1);
  if (!(VAR_2 & 1))
   VAR_0->bd_info->bb_counters[VAR_4] += FUNC_0(&VAR_2, VAR_5, 1);
  if (VAR_1 > VAR_2)
   break;
  VAR_4++;

  if (VAR_1 == VAR_2 || !(VAR_6 = FUNC_2(VAR_0, VAR_4, &VAR_3))) {
   FUNC_1(VAR_5, VAR_1, VAR_2 - VAR_1 + 1);
   VAR_0->bd_info->bb_counters[VAR_4 - 1] += VAR_2 - VAR_1 + 1;
   break;
  }
  VAR_1 >>= 1;
  VAR_2 >>= 1;
  VAR_5 = VAR_6;
 }
}
