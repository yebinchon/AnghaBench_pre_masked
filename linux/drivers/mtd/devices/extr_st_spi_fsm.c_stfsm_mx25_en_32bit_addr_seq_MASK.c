
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stfsm_seq {int* seq_opc; int seq_cfg; int * seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_2(struct stfsm_seq *VAR_11)
{
 VAR_11->seq_opc[0] = (VAR_6 |
      FUNC_0(8) |
      FUNC_1(VAR_7) |
      VAR_5);

 VAR_11->seq[0] = VAR_8;
 VAR_11->seq[1] = VAR_10;
 VAR_11->seq[2] = VAR_9;

 VAR_11->seq_cfg = (VAR_2 |
   VAR_1 |
   VAR_3 |
   VAR_0 |
   VAR_4);

 return 0;
}
