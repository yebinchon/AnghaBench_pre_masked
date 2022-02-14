
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct u300_pmx_mask {int mask; int bits; } ;
struct u300_pmx {scalar_t__ virtbase; } ;
struct TYPE_2__ {struct u300_pmx_mask* mask; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_1__* VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct u300_pmx *VAR_2, unsigned VAR_3,
          bool VAR_4)
{
 u16 VAR_5, VAR_6, VAR_7;
 int VAR_8;
 const struct u300_pmx_mask *VAR_9;

 VAR_9 = VAR_0[VAR_3].mask;
 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_1); VAR_8++) {
  if (VAR_4)
   VAR_6 = VAR_9->bits;
  else
   VAR_6 = 0;

  VAR_7 = VAR_9->mask;
  if (VAR_7 != 0) {
   VAR_5 = FUNC_1(VAR_2->virtbase + VAR_1[VAR_8]);
   VAR_5 &= ~VAR_7;
   VAR_5 |= VAR_6;
   FUNC_2(VAR_5, VAR_2->virtbase + VAR_1[VAR_8]);
  }
  VAR_9++;
 }
}
