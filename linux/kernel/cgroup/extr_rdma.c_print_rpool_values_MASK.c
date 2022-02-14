
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct seq_file {int dummy; } ;
struct rdmacg_resource_pool {TYPE_1__* resources; } ;
typedef enum rdmacg_file_type { ____Placeholder_rdmacg_file_type } rdmacg_file_type ;
struct TYPE_4__ {int private; } ;
struct TYPE_3__ {scalar_t__ max; scalar_t__ usage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;
 TYPE_2__* FUNC_0 (struct seq_file*) ;
 int FUNC_1 (struct seq_file*,char*,scalar_t__) ;
 int FUNC_2 (struct seq_file*,char) ;
 int FUNC_3 (struct seq_file*,int ) ;

__attribute__((used)) static void FUNC_4(struct seq_file *VAR_5,
          struct rdmacg_resource_pool *VAR_6)
{
 enum rdmacg_file_type VAR_7;
 int VAR_8;
 u32 VAR_9;

 VAR_7 = FUNC_0(VAR_5)->private;

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  FUNC_3(VAR_5, VAR_4[VAR_8]);
  FUNC_2(VAR_5, '=');
  if (VAR_7 == VAR_2) {
   if (VAR_6)
    VAR_9 = VAR_6->resources[VAR_8].max;
   else
    VAR_9 = VAR_3;
  } else {
   if (VAR_6)
    VAR_9 = VAR_6->resources[VAR_8].usage;
   else
    VAR_9 = 0;
  }

  if (VAR_9 == VAR_3)
   FUNC_3(VAR_5, VAR_0);
  else
   FUNC_1(VAR_5, "%d", VAR_9);
  FUNC_2(VAR_5, ' ');
 }
}
