
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cadet {size_t is_fm_band; unsigned int curfreq; int tunestat; scalar_t__ io; scalar_t__ sigstrength; } ;
struct TYPE_2__ {int rangehigh; int rangelow; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct cadet*) ;
 int FUNC_1 (struct cadet*,unsigned int) ;
 unsigned int FUNC_2 (unsigned int,int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,scalar_t__) ;
 scalar_t__** VAR_1 ;

__attribute__((used)) static void FUNC_6(struct cadet *VAR_2, unsigned VAR_3)
{
 unsigned VAR_4;
 int VAR_5, VAR_6, VAR_7;
 int VAR_8;

 VAR_3 = FUNC_2(VAR_3, VAR_0[VAR_2->is_fm_band].rangelow,
      VAR_0[VAR_2->is_fm_band].rangehigh);
 VAR_2->curfreq = VAR_3;



 VAR_4 = 0;
 if (VAR_2->is_fm_band) {
  VAR_7 = 102400;
  VAR_3 = VAR_3 / 16;
  VAR_3 += 10700;
  for (VAR_5 = 0; VAR_5 < 14; VAR_5++) {
   VAR_4 = VAR_4 << 1;
   if (VAR_3 >= VAR_7) {
    VAR_4 |= 0x01;
    VAR_3 -= VAR_7;
   }
   VAR_7 = VAR_7 >> 1;
  }
 } else {
  VAR_4 = (VAR_3 / 16) + 450;
  VAR_4 |= 0x100000;
 }





 FUNC_5(7, VAR_2->io);
 VAR_8 = FUNC_3(VAR_2->io + 1);




 for (VAR_6 = 3; VAR_6 > -1; VAR_6--) {
  FUNC_1(VAR_2, VAR_4 | (VAR_6 << 16));

  FUNC_5(7, VAR_2->io);
  FUNC_5(VAR_8, VAR_2->io + 1);

  FUNC_4(100);

  FUNC_0(VAR_2);
  if ((VAR_2->tunestat & 0x40) == 0) {
   VAR_2->sigstrength = VAR_1[VAR_2->is_fm_band][VAR_6];
   goto reset_rds;
  }
 }
 VAR_2->sigstrength = 0;
reset_rds:
 FUNC_5(3, VAR_2->io);
 FUNC_5(FUNC_3(VAR_2->io + 1) & 0x7f, VAR_2->io + 1);
}
