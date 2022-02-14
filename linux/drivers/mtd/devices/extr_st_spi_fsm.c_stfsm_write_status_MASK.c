
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct stfsm_seq {int* seq_opc; int status; int * seq; } ;
struct stfsm {int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,char*,int ,int,scalar_t__,char*) ;
 int FUNC_4 (struct stfsm*,struct stfsm_seq*) ;
 struct stfsm_seq VAR_5 ;
 int FUNC_5 (struct stfsm*) ;
 int FUNC_6 (struct stfsm*) ;

__attribute__((used)) static int FUNC_7(struct stfsm *VAR_6, uint8_t VAR_7,
       uint16_t VAR_8, int VAR_9, int VAR_10)
{
 struct stfsm_seq *VAR_11 = &VAR_5;

 FUNC_3(VAR_6->dev,
  "write 'status' register [0x%02x], %d byte(s), 0x%04x\n"
  " %s wait-busy\n", VAR_7, VAR_9, VAR_8, VAR_10 ? "with" : "no");

 FUNC_0(VAR_9 != 1 && VAR_9 != 2);

 VAR_11->seq_opc[1] = (VAR_0 | FUNC_1(8) |
      FUNC_2(VAR_7));

 VAR_11->status = (uint32_t)VAR_8 | VAR_2 | VAR_1;
 VAR_11->seq[2] = (VAR_9 == 1) ? VAR_3 : VAR_4;

 FUNC_4(VAR_6, VAR_11);

 FUNC_6(VAR_6);

 if (VAR_10)
  FUNC_5(VAR_6);

 return 0;
}
