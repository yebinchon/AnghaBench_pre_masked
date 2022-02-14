
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct map_info {int dummy; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_3__ {int * x; } ;
typedef TYPE_1__ map_word ;


 int FUNC_0 (struct map_info*,TYPE_1__,unsigned long) ;

__attribute__((used)) static void FUNC_1(struct map_info *VAR_0, unsigned long VAR_1, const void *VAR_2, ssize_t VAR_3)
{
 while (VAR_3 > 0) {
  map_word VAR_4;
  VAR_4.x[0] = *((uint32_t*)VAR_2);
  FUNC_0(VAR_0, VAR_4, VAR_1);
  VAR_2 += 4;
  VAR_1 += 4;
  VAR_3 -= 4;
 }
}
