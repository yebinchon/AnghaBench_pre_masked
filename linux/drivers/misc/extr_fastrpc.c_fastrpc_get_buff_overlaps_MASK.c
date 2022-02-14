
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct fastrpc_invoke_ctx {int nbufs; TYPE_2__* olaps; TYPE_1__* args; } ;
struct TYPE_4__ {scalar_t__ start; scalar_t__ end; int raix; scalar_t__ mstart; scalar_t__ mend; scalar_t__ offset; } ;
struct TYPE_3__ {scalar_t__ ptr; scalar_t__ length; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int,int,int ,int *) ;

__attribute__((used)) static void FUNC_1(struct fastrpc_invoke_ctx *VAR_1)
{
 u64 VAR_2 = 0;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->nbufs; ++VAR_3) {
  VAR_1->olaps[VAR_3].start = VAR_1->args[VAR_3].ptr;
  VAR_1->olaps[VAR_3].end = VAR_1->olaps[VAR_3].start + VAR_1->args[VAR_3].length;
  VAR_1->olaps[VAR_3].raix = VAR_3;
 }

 FUNC_0(VAR_1->olaps, VAR_1->nbufs, sizeof(*VAR_1->olaps), VAR_0, ((void*)0));

 for (VAR_3 = 0; VAR_3 < VAR_1->nbufs; ++VAR_3) {

  if (VAR_1->olaps[VAR_3].start < VAR_2) {
   VAR_1->olaps[VAR_3].mstart = VAR_2;
   VAR_1->olaps[VAR_3].mend = VAR_1->olaps[VAR_3].end;
   VAR_1->olaps[VAR_3].offset = VAR_2 - VAR_1->olaps[VAR_3].start;

   if (VAR_1->olaps[VAR_3].end > VAR_2) {
    VAR_2 = VAR_1->olaps[VAR_3].end;
   } else {
    VAR_1->olaps[VAR_3].mend = 0;
    VAR_1->olaps[VAR_3].mstart = 0;
   }

  } else {
   VAR_1->olaps[VAR_3].mend = VAR_1->olaps[VAR_3].end;
   VAR_1->olaps[VAR_3].mstart = VAR_1->olaps[VAR_3].start;
   VAR_1->olaps[VAR_3].offset = 0;
   VAR_2 = VAR_1->olaps[VAR_3].end;
  }
 }
}
