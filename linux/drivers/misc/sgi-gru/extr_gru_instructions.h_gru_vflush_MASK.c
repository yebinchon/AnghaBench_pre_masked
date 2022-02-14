
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_instruction {long baddr0; unsigned long op1_stride; unsigned long nelem; } ;


 int FUNC_0 (unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,unsigned char,int ,int ,int ,int ) ;
 int FUNC_2 (struct gru_instruction*,int ) ;

__attribute__((used)) static inline void FUNC_3(void *VAR_2, unsigned long VAR_3,
  unsigned long VAR_4, unsigned char VAR_5, unsigned long VAR_6,
  unsigned long VAR_7)
{
 struct gru_instruction *VAR_8 = (void *)VAR_2;

 VAR_8->baddr0 = (long)VAR_3;
 VAR_8->op1_stride = VAR_6;
 VAR_8->nelem = VAR_4;
 FUNC_2(VAR_8, FUNC_1(VAR_1, 0, VAR_5, VAR_0, 0,
     0, FUNC_0(VAR_7)));
}
