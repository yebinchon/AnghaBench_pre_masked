
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_instruction {long baddr0; } ;


 int FUNC_0 (unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int,unsigned int,int ,int ,int ,int ) ;
 int FUNC_2 (struct gru_instruction*,int ) ;

__attribute__((used)) static inline void FUNC_3(void *VAR_2, int VAR_3, unsigned long VAR_4,
  unsigned int VAR_5, unsigned long VAR_6)
{
 struct gru_instruction *VAR_7 = (void *)VAR_2;

 VAR_7->baddr0 = (long)VAR_4;
 FUNC_2(VAR_7, FUNC_1(VAR_1, VAR_3, VAR_5, VAR_0, 0,
     0, FUNC_0(VAR_6)));
}
