
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct stfsm_seq {int* seq_opc; } ;
struct stfsm {int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,char*,int ,int) ;
 int FUNC_4 (struct stfsm*,struct stfsm_seq*) ;
 int FUNC_5 (struct stfsm*,int *,int) ;
 struct stfsm_seq VAR_1 ;
 int FUNC_6 (struct stfsm*) ;

__attribute__((used)) static int FUNC_7(struct stfsm *VAR_2, uint8_t VAR_3,
        uint8_t *VAR_4, int VAR_5)
{
 struct stfsm_seq *VAR_6 = &VAR_1;
 uint32_t VAR_7;
 uint8_t *VAR_8 = (uint8_t *)&VAR_7;
 int VAR_9;

 FUNC_3(VAR_2->dev, "read 'status' register [0x%02x], %d byte(s)\n",
  VAR_3, VAR_5);

 FUNC_0(VAR_5 != 1 && VAR_5 != 2);

 VAR_6->seq_opc[0] = (VAR_0 | FUNC_1(8) |
      FUNC_2(VAR_3)),

 FUNC_4(VAR_2, VAR_6);

 FUNC_5(VAR_2, &VAR_7, 4);

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
  VAR_4[VAR_9] = VAR_8[VAR_9];

 FUNC_6(VAR_2);

 return 0;
}
