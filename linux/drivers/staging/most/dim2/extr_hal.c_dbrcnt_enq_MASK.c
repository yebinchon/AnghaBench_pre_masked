
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rest_size; int* sz_queue; int wpc; } ;
struct TYPE_4__ {TYPE_1__ atx_dbr; } ;


 TYPE_2__ VAR_0 ;
 size_t FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(int VAR_1)
{
 VAR_0.atx_dbr.rest_size -= VAR_1;
 VAR_0.atx_dbr.sz_queue[FUNC_0(VAR_0.atx_dbr.wpc)] = VAR_1;
 VAR_0.atx_dbr.wpc++;
}
