
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_instruction {long baddr0; int nelem; int op1_stride; } ;


 int FUNC_0 (unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int,int ,unsigned long,int ) ;
 int FUNC_2 (struct gru_instruction*,int ) ;

__attribute__((used)) static inline void FUNC_3(void *VAR_2, unsigned long VAR_3,
  unsigned int VAR_4, int VAR_5, unsigned long VAR_6)
{
 struct gru_instruction *VAR_7 = (struct gru_instruction *)VAR_2;

 VAR_7->baddr0 = (long)VAR_3 | ((unsigned long)VAR_5 << 62);
 VAR_7->nelem = 1;
 VAR_7->op1_stride = 1;
 FUNC_2(VAR_7, FUNC_1(VAR_0, 0, VAR_1, VAR_5, 0,
     (unsigned long)VAR_4, FUNC_0(VAR_6)));
}
