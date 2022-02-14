
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct stfsm_seq {int seq_cfg; int addr1; int addr2; int data_size; } ;
struct stfsm {int configuration; int dev; struct stfsm_seq stfsm_seq_read; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (int *,...) ;
 int FUNC_3 (struct stfsm*) ;
 int FUNC_4 (struct stfsm*,int) ;
 int FUNC_5 (struct stfsm*,struct stfsm_seq*) ;
 int FUNC_6 (struct stfsm*,int*,int) ;
 int FUNC_7 (struct stfsm*) ;

__attribute__((used)) static int FUNC_8(struct stfsm *VAR_2, uint8_t *VAR_3, uint32_t VAR_4,
        uint32_t VAR_5)
{
 struct stfsm_seq *VAR_6 = &VAR_2->stfsm_seq_read;
 uint32_t VAR_7;
 uint32_t VAR_8;
 uint32_t VAR_9;
 uint32_t VAR_10;
 uint32_t VAR_11;
 uint32_t VAR_12[4];
 uint32_t VAR_13[VAR_1];
 uint8_t *VAR_14;

 FUNC_1(VAR_2->dev, "reading %d bytes from 0x%08x\n", VAR_4, VAR_5);


 if (VAR_2->configuration & VAR_0)
  FUNC_4(VAR_2, 1);


 VAR_7 = ((VAR_6->seq_cfg >> 16) & 0x3) + 1;
 VAR_8 = (VAR_7 << 2) - 1;


 VAR_14 = ((uintptr_t)VAR_3 & 0x3) ? (uint8_t *)VAR_13 : VAR_3;


 VAR_9 = (VAR_4 + VAR_8) & ~VAR_8;
 VAR_10 = VAR_4 & ~VAR_8;
 VAR_11 = VAR_4 & VAR_8;

 VAR_6->data_size = FUNC_0(VAR_9);
 VAR_6->addr1 = (VAR_5 >> 16) & 0xffff;
 VAR_6->addr2 = VAR_5 & 0xffff;

 FUNC_5(VAR_2, VAR_6);

 if (VAR_10)
  FUNC_6(VAR_2, (uint32_t *)VAR_14, VAR_10);

 if (VAR_11) {
  FUNC_6(VAR_2, VAR_12, VAR_8 + 1);
  FUNC_2(VAR_14 + VAR_10, &VAR_12, VAR_11);
 }


 if ((uintptr_t)VAR_3 & 0x3)
  FUNC_2(VAR_3, VAR_13, VAR_4);


 FUNC_7(VAR_2);

 FUNC_3(VAR_2);


 if (VAR_2->configuration & VAR_0)
  FUNC_4(VAR_2, 0);

 return 0;
}
