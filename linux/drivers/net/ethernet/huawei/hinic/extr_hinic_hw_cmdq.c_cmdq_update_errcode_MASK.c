
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct hinic_cmdq {int** errcode; } ;



__attribute__((used)) static void FUNC_0(struct hinic_cmdq *VAR_0, u16 VAR_1,
    int VAR_2)
{
 if (VAR_0->errcode[VAR_1])
  *VAR_0->errcode[VAR_1] = VAR_2;
}
