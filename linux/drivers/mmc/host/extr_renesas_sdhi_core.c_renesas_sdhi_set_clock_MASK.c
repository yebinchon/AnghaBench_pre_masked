
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct tmio_mmc_host {TYPE_3__* pdata; TYPE_2__* mmc; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_4__ {scalar_t__ timing; } ;
struct TYPE_5__ {int actual_clock; TYPE_1__ ios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct tmio_mmc_host*,unsigned int) ;
 int FUNC_1 (struct tmio_mmc_host*,int ) ;
 int FUNC_2 (struct tmio_mmc_host*,int ,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct tmio_mmc_host *VAR_6,
       unsigned int VAR_7)
{
 u32 VAR_8 = 0, VAR_9;

 FUNC_2(VAR_6, VAR_2, ~VAR_1 &
  FUNC_1(VAR_6, VAR_2));

 if (VAR_7 == 0) {
  VAR_6->mmc->actual_clock = 0;
  goto out;
 }

 VAR_6->mmc->actual_clock = FUNC_0(VAR_6, VAR_7);
 VAR_9 = VAR_6->mmc->actual_clock / 512;

 for (VAR_8 = 0x80000080; VAR_7 >= (VAR_9 << 1); VAR_8 >>= 1)
  VAR_9 <<= 1;


 if ((VAR_6->pdata->flags & VAR_4) && ((VAR_8 >> 22) & 0x1)) {
  if (!(VAR_6->mmc->ios.timing == VAR_3))
   VAR_8 |= 0xff;
  else
   VAR_8 &= ~0xff;
 }

 FUNC_2(VAR_6, VAR_2, VAR_8 & VAR_0);
 if (!(VAR_6->pdata->flags & VAR_5))
  FUNC_3(10000, 11000);

 FUNC_2(VAR_6, VAR_2, VAR_1 |
  FUNC_1(VAR_6, VAR_2));

out:

 if (!(VAR_6->pdata->flags & VAR_5))
  FUNC_3(10000, 11000);
}
