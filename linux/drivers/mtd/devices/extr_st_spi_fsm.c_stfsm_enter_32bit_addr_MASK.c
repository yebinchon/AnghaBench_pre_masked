
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct stfsm_seq {int* seq_opc; } ;
struct stfsm {struct stfsm_seq stfsm_seq_en_32bit_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct stfsm*,struct stfsm_seq*) ;
 int FUNC_3 (struct stfsm*) ;

__attribute__((used)) static int FUNC_4(struct stfsm *VAR_4, int VAR_5)
{
 struct stfsm_seq *VAR_6 = &VAR_4->stfsm_seq_en_32bit_addr;
 uint32_t VAR_7 = VAR_5 ? VAR_2 : VAR_3;

 VAR_6->seq_opc[0] = (VAR_1 |
      FUNC_0(8) |
      FUNC_1(VAR_7) |
      VAR_0);

 FUNC_2(VAR_4, VAR_6);

 FUNC_3(VAR_4);

 return 0;
}
