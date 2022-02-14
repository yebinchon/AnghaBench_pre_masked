
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int seq_cfg; } ;
struct stfsm {int configuration; TYPE_2__ stfsm_seq_read; int booted_from_spi; int stfsm_seq_en_32bit_addr; TYPE_1__* info; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct stfsm*) ;
 int FUNC_1 (struct stfsm*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct stfsm*) ;
 int FUNC_4 (struct stfsm*,int ,int*,int) ;
 int FUNC_5 (struct stfsm*,int ,int,int,int) ;

__attribute__((used)) static int FUNC_6(struct stfsm *VAR_7)
{
 uint32_t VAR_8 = VAR_7->info->flags;
 uint32_t VAR_9;
 uint8_t VAR_10;
 int VAR_11;
 bool VAR_12;




 VAR_11 = FUNC_3(VAR_7);
 if (VAR_11)
  return VAR_11;




 if (VAR_8 & VAR_3) {

  FUNC_2(&VAR_7->stfsm_seq_en_32bit_addr);

  VAR_12 = FUNC_0(VAR_7);
  if (VAR_12 || !VAR_7->booted_from_spi)


   FUNC_1(VAR_7, 1);

  else


   VAR_7->configuration = (VAR_1 |
           VAR_2 |
           VAR_0);
 }


 FUNC_4(VAR_7, VAR_5, &VAR_10, 1);
 VAR_9 = ((VAR_7->stfsm_seq_read.seq_cfg >> 16) & 0x3) + 1;
 if (VAR_9 == 4) {
  if (!(VAR_10 & VAR_4)) {

   VAR_10 |= VAR_4;

   FUNC_5(VAR_7, VAR_6, VAR_10, 1, 1);
  }
 } else {
  if (VAR_10 & VAR_4) {

   VAR_10 &= ~VAR_4;

   FUNC_5(VAR_7, VAR_6, VAR_10, 1, 1);
  }
 }

 return 0;
}
