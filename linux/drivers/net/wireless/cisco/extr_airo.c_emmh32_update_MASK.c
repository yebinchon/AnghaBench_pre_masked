
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int * d8; int d32; } ;
struct TYPE_5__ {int position; TYPE_1__ part; } ;
typedef TYPE_2__ emmh32_context ;
typedef int __be32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(emmh32_context *VAR_0, u8 *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;

 if (VAR_2 == 0) return;

 VAR_3 = VAR_0->position >> 2;


 VAR_4 = VAR_0->position & 3;
 if (VAR_4) {

  do {
   if (VAR_2 == 0) return;
   VAR_0->part.d8[VAR_4++] = *VAR_1++;
   VAR_0->position++;
   VAR_2--;
  } while (VAR_4 < 4);
  FUNC_0(FUNC_1(VAR_0->part.d32));
 }


 while (VAR_2 >= 4) {
  FUNC_0(FUNC_1(*(__be32 *)VAR_1));
  VAR_0->position += 4;
  VAR_1 += 4;
  VAR_2 -= 4;
 }


 VAR_4 = 0;
 while (VAR_2 > 0) {
  VAR_0->part.d8[VAR_4++] = *VAR_1++;
  VAR_0->position++;
  VAR_2--;
 }
}
