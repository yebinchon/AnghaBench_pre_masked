
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int stop_unit; int start_unit; int blksize; int intensity; } ;
struct format_check_t {int unit; int num_records; int rec; int blksize; int key_length; int result; TYPE_1__ expect; } ;
struct eckd_count {int record; int dl; int kl; scalar_t__ cyl; int head; } ;
struct ch_t {scalar_t__ cyl; int head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct eckd_count*,int,int) ;
 int FUNC_1 (struct ch_t*,int,int) ;
 int* VAR_6 ;

__attribute__((used)) static void FUNC_2(struct eckd_count *VAR_7,
          struct format_check_t *VAR_8,
          int VAR_9, int VAR_10,
          int VAR_11, int VAR_12)
{
 struct ch_t VAR_13;
 int VAR_14;
 int VAR_15 = 0;
 int VAR_16;
 int VAR_17;
 int VAR_18 = 0;
 int VAR_19, VAR_20;
 int VAR_21;

 VAR_16 = VAR_8->expect.stop_unit - VAR_8->expect.start_unit + 1;
 VAR_14 = VAR_16 * VAR_9;

 for (VAR_19 = VAR_8->expect.start_unit; VAR_19 <= VAR_8->expect.stop_unit; VAR_19++) {

  if (VAR_12) {
   while (VAR_7[VAR_18].record == 0 &&
          VAR_7[VAR_18].dl == 0) {
    if (VAR_18++ > VAR_14)
     break;
   }
  } else {
   if (VAR_19 != VAR_8->expect.start_unit)
    VAR_18 += VAR_9 - VAR_15;
  }


  FUNC_1(&VAR_13, VAR_19 / VAR_11, VAR_19 % VAR_11);


  VAR_15 = FUNC_0(VAR_7, VAR_18, VAR_18 + VAR_9);

  if (VAR_15 < VAR_10) {
   VAR_8->result = VAR_3;
   break;
  }
  if (VAR_15 > VAR_10) {
   VAR_8->result = VAR_4;
   break;
  }

  for (VAR_20 = 0; VAR_20 < VAR_15; VAR_20++, VAR_18++) {
   VAR_17 = VAR_8->expect.blksize;
   VAR_21 = 0;





   if ((VAR_8->expect.intensity & 0x08) &&
       VAR_13.cyl == 0 && VAR_13.head == 0) {
    if (VAR_20 < 3) {
     VAR_17 = VAR_6[VAR_20] - 4;
     VAR_21 = 4;
    }
   }
   if ((VAR_8->expect.intensity & 0x08) &&
       VAR_13.cyl == 0 && VAR_13.head == 1) {
    VAR_17 = VAR_5 - 44;
    VAR_21 = 44;
   }


   if (VAR_7[VAR_18].dl != VAR_17) {
    VAR_8->result = VAR_0;
    goto out;
   }

   if (VAR_7[VAR_18].kl != VAR_21) {
    VAR_8->result = VAR_1;
    goto out;
   }

   if (VAR_7[VAR_18].cyl != VAR_13.cyl ||
       VAR_7[VAR_18].head != VAR_13.head ||
       VAR_7[VAR_18].record != (VAR_20 + 1)) {
    VAR_8->result = VAR_2;
    goto out;
   }
  }
 }

out:




 if (!VAR_8->result) {
  VAR_19--;
  VAR_18--;
 }

 VAR_8->unit = VAR_19;
 VAR_8->num_records = VAR_15;
 VAR_8->rec = VAR_7[VAR_18].record;
 VAR_8->blksize = VAR_7[VAR_18].dl;
 VAR_8->key_length = VAR_7[VAR_18].kl;
}
