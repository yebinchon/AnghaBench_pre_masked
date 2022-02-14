
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int has_gcr_regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_3 ;

int FUNC_2(u64 *VAR_4)
{
 u64 VAR_5, VAR_6;

 if (!VAR_3.has_gcr_regs)
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_1);
 VAR_6 = FUNC_1(VAR_2);

 *VAR_4 = FUNC_0(VAR_5, VAR_6);

 return 0;
}
