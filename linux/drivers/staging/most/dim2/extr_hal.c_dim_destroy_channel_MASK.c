
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct dim_channel {scalar_t__ addr; scalar_t__ dbr_addr; int dbr_size; } ;
struct TYPE_5__ {scalar_t__ ch_addr; } ;
struct TYPE_6__ {TYPE_2__ atx_dbr; TYPE_1__* dim2; int dim_is_initialized; } ;
struct TYPE_4__ {int MIEN; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;
 TYPE_3__ VAR_3 ;
 int FUNC_2 (int ,int *) ;

u8 FUNC_3(struct dim_channel *VAR_4)
{
 if (!VAR_3.dim_is_initialized || !VAR_4)
  return VAR_1;

 if (VAR_4->addr == VAR_3.atx_dbr.ch_addr) {
  FUNC_2(0, &VAR_3.dim2->MIEN);
  VAR_3.atx_dbr.ch_addr = 0;
 }

 FUNC_0(VAR_4->addr);
 if (VAR_4->dbr_addr < VAR_0)
  FUNC_1(VAR_4->dbr_addr, VAR_4->dbr_size);
 VAR_4->dbr_addr = VAR_0;

 return VAR_2;
}
