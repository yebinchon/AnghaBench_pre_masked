
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct dim_channel {int dbr_size; scalar_t__ addr; } ;
struct TYPE_4__ {scalar_t__ ch_addr; } ;
struct TYPE_6__ {TYPE_2__* dim2; TYPE_1__ atx_dbr; } ;
struct TYPE_5__ {int MIEN; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int ) ;
 TYPE_3__ VAR_1 ;
 scalar_t__ FUNC_2 (struct dim_channel*,int ,scalar_t__,int ,int ) ;
 int FUNC_3 (int ,int *) ;

u8 FUNC_4(struct dim_channel *VAR_2, u8 VAR_3, u16 VAR_4,
    u16 VAR_5)
{
 u8 VAR_6 = FUNC_2(VAR_2, VAR_0, VAR_3, VAR_4,
     VAR_5);

 if (VAR_3 && !VAR_1.atx_dbr.ch_addr) {
  VAR_1.atx_dbr.ch_addr = VAR_2->addr;
  FUNC_1(VAR_2->addr, VAR_2->dbr_size);
  FUNC_3(FUNC_0(20), &VAR_1.dim2->MIEN);
 }

 return VAR_6;
}
