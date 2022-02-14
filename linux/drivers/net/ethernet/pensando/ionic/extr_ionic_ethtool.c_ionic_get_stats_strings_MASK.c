
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct ionic_lif {int dummy; } ;
struct TYPE_2__ {int (* get_strings ) (struct ionic_lif*,int **) ;} ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct ionic_lif*,int **) ;

__attribute__((used)) static void FUNC_1(struct ionic_lif *VAR_2, u8 *VAR_3)
{
 u32 VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_1[VAR_4].get_strings(VAR_2, &VAR_3);
}
