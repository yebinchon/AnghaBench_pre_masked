
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct filer_table {size_t index; TYPE_1__* fe; } ;
struct TYPE_2__ {int ctrl; int prop; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(u32 VAR_3, struct filer_table *VAR_4)
{
 VAR_4->fe[VAR_4->index].ctrl = VAR_0 | VAR_2 | VAR_1;
 VAR_4->fe[VAR_4->index].prop = VAR_3;
 VAR_4->index++;
}
