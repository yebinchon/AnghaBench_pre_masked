
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct stfsm_seq {int seq_cfg; int addr1; int addr2; int data_size; } ;
struct stfsm {int configuration; scalar_t__ fifo_dir_delay; scalar_t__ base; int dev; struct stfsm_seq stfsm_seq_write; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (int*,int const*,int) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct stfsm*,int) ;
 int FUNC_6 (struct stfsm*,struct stfsm_seq*) ;
 int FUNC_7 (struct stfsm*) ;
 int FUNC_8 (struct stfsm*) ;
 int FUNC_9 (struct stfsm*) ;
 int FUNC_10 (struct stfsm*,int*,int) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct stfsm *VAR_4, const uint8_t *VAR_5,
         uint32_t VAR_6, uint32_t VAR_7)
{
 struct stfsm_seq *VAR_8 = &VAR_4->stfsm_seq_write;
 uint32_t VAR_9;
 uint32_t VAR_10;
 uint32_t VAR_11;
 uint32_t VAR_12;
 uint32_t VAR_13;
 uint32_t VAR_14[4];
 uint32_t VAR_15;
 uint32_t VAR_16[VAR_2];
 uint8_t *VAR_17 = (uint8_t *)&VAR_14;
 const uint8_t *VAR_18;
 int VAR_19;

 FUNC_1(VAR_4->dev, "writing %d bytes to 0x%08x\n", VAR_6, VAR_7);


 if (VAR_4->configuration & VAR_1)
  FUNC_5(VAR_4, 1);


 VAR_9 = ((VAR_8->seq_cfg >> 16) & 0x3) + 1;
 VAR_10 = (VAR_9 << 2) - 1;


 if ((uintptr_t)VAR_5 & 0x3) {
  FUNC_2(VAR_16, VAR_5, VAR_6);
  VAR_18 = (uint8_t *)VAR_16;
 } else {
  VAR_18 = VAR_5;
 }


 VAR_11 = (VAR_6 + VAR_10) & ~VAR_10;
 VAR_12 = VAR_6 & ~VAR_10;
 VAR_13 = VAR_6 & VAR_10;

 VAR_8->data_size = FUNC_0(VAR_11);
 VAR_8->addr1 = (VAR_7 >> 16) & 0xffff;
 VAR_8->addr2 = VAR_7 & 0xffff;




 FUNC_12(0x00040000, VAR_4->base + VAR_3);





 if (VAR_4->fifo_dir_delay == 0)
  FUNC_4(VAR_4->base + VAR_3);
 else
  FUNC_11(VAR_4->fifo_dir_delay);



 if (VAR_12) {
  FUNC_10(VAR_4, (uint32_t *)VAR_18, VAR_12);
  VAR_18 += VAR_12;
 }


 if (VAR_13) {
  FUNC_3(VAR_17, 0xff, VAR_10 + 1);
  for (VAR_15 = 0; VAR_15 < VAR_13; VAR_15++)
   VAR_17[VAR_15] = *VAR_18++;

  FUNC_10(VAR_4, VAR_14, VAR_10 + 1);
 }


 FUNC_6(VAR_4, VAR_8);


 FUNC_9(VAR_4);


 VAR_19 = FUNC_8(VAR_4);
 if (VAR_19 && VAR_4->configuration & VAR_0)
  FUNC_7(VAR_4);


 if (VAR_4->configuration & VAR_1)
  FUNC_5(VAR_4, 0);

 return 0;
}
