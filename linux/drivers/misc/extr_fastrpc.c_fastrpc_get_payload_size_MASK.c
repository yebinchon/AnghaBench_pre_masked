
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct fastrpc_invoke_ctx {int nscalars; TYPE_2__* olaps; TYPE_1__* args; } ;
struct TYPE_4__ {scalar_t__ offset; scalar_t__ mstart; scalar_t__ mend; } ;
struct TYPE_3__ {int fd; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;

__attribute__((used)) static u64 FUNC_1(struct fastrpc_invoke_ctx *VAR_1, int VAR_2)
{
 u64 VAR_3 = 0;
 int VAR_4;

 VAR_3 = FUNC_0(VAR_2, VAR_0);
 for (VAR_4 = 0; VAR_4 < VAR_1->nscalars; VAR_4++) {
  if (VAR_1->args[VAR_4].fd == 0 || VAR_1->args[VAR_4].fd == -1) {

   if (VAR_1->olaps[VAR_4].offset == 0)
    VAR_3 = FUNC_0(VAR_3, VAR_0);

   VAR_3 += (VAR_1->olaps[VAR_4].mend - VAR_1->olaps[VAR_4].mstart);
  }
 }

 return VAR_3;
}
