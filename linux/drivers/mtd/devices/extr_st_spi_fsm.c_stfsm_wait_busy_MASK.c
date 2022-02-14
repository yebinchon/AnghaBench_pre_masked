
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct stfsm_seq {int* seq_opc; int seq_cfg; } ;
struct stfsm {int configuration; int dev; scalar_t__ base; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*) ;
 unsigned long VAR_9 ;
 int FUNC_4 (struct stfsm*,struct stfsm_seq*) ;
 int FUNC_5 (struct stfsm*,int*,int) ;
 struct stfsm_seq VAR_10 ;
 int FUNC_6 (struct stfsm*) ;
 scalar_t__ FUNC_7 (unsigned long,unsigned long) ;
 int FUNC_8 (int ,scalar_t__) ;

__attribute__((used)) static uint8_t FUNC_9(struct stfsm *VAR_11)
{
 struct stfsm_seq *VAR_12 = &VAR_10;
 unsigned long VAR_13;
 uint32_t VAR_14;
 int VAR_15 = 0;


 VAR_12->seq_opc[0] = (VAR_6 |
      FUNC_0(8) |
      FUNC_1(VAR_7));


 FUNC_4(VAR_11, VAR_12);




 VAR_13 = VAR_9 + VAR_1;
 while (!VAR_15) {
  if (FUNC_7(VAR_9, VAR_13))
   VAR_15 = 1;

  FUNC_6(VAR_11);

  FUNC_5(VAR_11, &VAR_14, 4);

  if ((VAR_14 & VAR_2) == 0)
   return 0;

  if ((VAR_11->configuration & VAR_0) &&
      ((VAR_14 & VAR_5) ||
       (VAR_14 & VAR_4)))
   return (uint8_t)(VAR_14 & 0xff);

  if (!VAR_15)

   FUNC_8(VAR_12->seq_cfg, VAR_11->base + VAR_8);

  FUNC_2();
 }

 FUNC_3(VAR_11->dev, "timeout on wait_busy\n");

 return VAR_3;
}
