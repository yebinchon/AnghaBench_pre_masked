
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spear_smi {int cmd_complete; int status; scalar_t__ io_base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 u32 VAR_5 = 0;
 struct spear_smi *VAR_6 = VAR_4;

 VAR_5 = FUNC_0(VAR_6->io_base + VAR_2);

 if (FUNC_1(!VAR_5))
  return VAR_1;


 FUNC_3(0, VAR_6->io_base + VAR_2);


 VAR_6->status |= VAR_5;


 FUNC_2(&VAR_6->cmd_complete);

 return VAR_0;
}
