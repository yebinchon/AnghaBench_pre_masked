
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct adapter* private; } ;
struct TYPE_2__ {int chip; } ;
struct adapter {TYPE_1__ params; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline void *FUNC_1(struct seq_file *VAR_2, loff_t VAR_3)
{
 struct adapter *VAR_4 = VAR_2->private;
 int VAR_5 = FUNC_0(VAR_4->params.chip) ?
    VAR_0 :
    VAR_1;
 return ((VAR_3 <= VAR_5) ? (void *)(uintptr_t)(VAR_3 + 1) : ((void*)0));
}
