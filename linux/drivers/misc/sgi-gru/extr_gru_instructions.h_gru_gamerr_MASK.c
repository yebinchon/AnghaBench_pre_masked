
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_instruction {long baddr0; unsigned long op1_stride; unsigned long op2_value_baddr1; } ;


 int FUNC_0 (unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int,unsigned int,int ,int ,int ,int ) ;
 int FUNC_2 (struct gru_instruction*,int ) ;

__attribute__((used)) static inline void FUNC_3(void *VAR_2, int VAR_3, unsigned long VAR_4,
  unsigned int VAR_5, unsigned long VAR_6,
  unsigned long VAR_7, unsigned long VAR_8)
{
 struct gru_instruction *VAR_9 = (void *)VAR_2;

 VAR_9->baddr0 = (long)VAR_4;
 VAR_9->op1_stride = VAR_6;
 VAR_9->op2_value_baddr1 = VAR_7;
 FUNC_2(VAR_9, FUNC_1(VAR_1, VAR_3, VAR_5, VAR_0, 0,
     0, FUNC_0(VAR_8)));
}
