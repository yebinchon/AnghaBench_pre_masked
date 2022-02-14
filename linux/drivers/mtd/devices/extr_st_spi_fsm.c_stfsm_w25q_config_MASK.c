
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_2__ {int seq_cfg; } ;
struct stfsm {TYPE_1__ stfsm_seq_read; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct stfsm*) ;
 int FUNC_1 (struct stfsm*,int ,int*,int) ;
 int FUNC_2 (struct stfsm*,int ,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct stfsm *VAR_4)
{
 uint32_t VAR_5;
 uint8_t VAR_6, VAR_7;
 uint16_t VAR_8;
 int VAR_9 = 0;
 int VAR_10;

 VAR_10 = FUNC_0(VAR_4);
 if (VAR_10)
  return VAR_10;


 FUNC_1(VAR_4, VAR_0, &VAR_7, 1);
 VAR_5 = ((VAR_4->stfsm_seq_read.seq_cfg >> 16) & 0x3) + 1;
 if (VAR_5 == 4) {
  if (!(VAR_7 & VAR_3)) {

   VAR_7 |= VAR_3;
   VAR_9 = 1;
  }
 } else {
  if (VAR_7 & VAR_3) {

   VAR_7 &= ~VAR_3;
   VAR_9 = 1;
  }
 }
 if (VAR_9) {

  FUNC_1(VAR_4, VAR_1, &VAR_6, 1);
  VAR_8 = ((uint16_t)VAR_7 << 8) | VAR_6;
  FUNC_2(VAR_4, VAR_2, VAR_8, 2, 1);
 }

 return 0;
}
