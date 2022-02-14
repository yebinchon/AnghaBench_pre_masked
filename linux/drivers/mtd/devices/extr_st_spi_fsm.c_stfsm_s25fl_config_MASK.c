
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_2__ {int seq_cfg; } ;
struct stfsm {int configuration; TYPE_1__ stfsm_seq_read; TYPE_1__ stfsm_seq_write; struct flash_info* info; } ;
struct flash_info {int flags; int sector_size; int n_sectors; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct stfsm*) ;
 int FUNC_1 (struct stfsm*,int ,int*,int) ;
 int FUNC_2 (int *) ;
 int VAR_7 ;
 int FUNC_3 (struct stfsm*,int,int*) ;
 int VAR_8 ;
 int FUNC_4 (struct stfsm*,int,int) ;
 int FUNC_5 (struct stfsm*,TYPE_1__*,int ) ;
 int VAR_9 ;
 int FUNC_6 (struct stfsm*,int ,int,int,int) ;

__attribute__((used)) static int FUNC_7(struct stfsm *VAR_10)
{
 struct flash_info *VAR_11 = VAR_10->info;
 uint32_t VAR_12 = VAR_11->flags;
 uint32_t VAR_13;
 uint32_t VAR_14;
 uint16_t VAR_15;
 uint8_t VAR_16, VAR_17, VAR_18;
 int VAR_19 = 0;
 int VAR_20;

 if (VAR_12 & VAR_1) {




  VAR_20 = FUNC_5(VAR_10, &VAR_10->stfsm_seq_read,
        VAR_7);
  if (VAR_20)
   return VAR_20;

  VAR_20 = FUNC_5(VAR_10, &VAR_10->stfsm_seq_write,
        VAR_8);
  if (VAR_20)
   return VAR_20;

  FUNC_2(&VAR_9);

 } else {

  VAR_20 = FUNC_0(VAR_10);
  if (VAR_20)
   return VAR_20;
 }






 if (VAR_12 & VAR_2) {
  VAR_14 = 0;
  for (VAR_14 = 0; VAR_14 < VAR_11->sector_size * VAR_11->n_sectors;) {
   FUNC_3(VAR_10, VAR_14, &VAR_18);
   if (VAR_18 == 0x00)
    FUNC_4(VAR_10, VAR_14, 0xff);


   if ((VAR_14 < VAR_11->sector_size * 2) ||
       (VAR_14 >= (VAR_11->sector_size - VAR_11->n_sectors * 4)))
    VAR_14 += 0x1000;
   else
    VAR_14 += 0x10000;
  }
 }


 FUNC_1(VAR_10, VAR_3, &VAR_17, 1);
 VAR_13 = ((VAR_10->stfsm_seq_read.seq_cfg >> 16) & 0x3) + 1;
 if (VAR_13 == 4) {
  if (!(VAR_17 & VAR_6)) {

   VAR_17 |= VAR_6;

   VAR_19 = 1;
  }
 } else {
  if (VAR_17 & VAR_6) {

   VAR_17 &= ~VAR_6;

   VAR_19 = 1;
  }
 }
 if (VAR_19) {
  FUNC_1(VAR_10, VAR_4, &VAR_16, 1);
  VAR_15 = ((uint16_t)VAR_17 << 8) | VAR_16;
  FUNC_6(VAR_10, VAR_5, VAR_15, 2, 1);
 }





 VAR_10->configuration |= VAR_0;

 return 0;
}
