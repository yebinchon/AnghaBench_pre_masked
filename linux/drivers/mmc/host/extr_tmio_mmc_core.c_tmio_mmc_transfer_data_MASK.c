
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct tmio_mmc_host {TYPE_2__* pdata; TYPE_1__* data; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,unsigned int) ;
 int FUNC_1 (struct tmio_mmc_host*,int ) ;
 int FUNC_2 (struct tmio_mmc_host*,int ,unsigned short*,unsigned int) ;
 int FUNC_3 (struct tmio_mmc_host*,int ,int *,int) ;
 int FUNC_4 (struct tmio_mmc_host*,int ,int) ;
 int FUNC_5 (struct tmio_mmc_host*,int ,unsigned short*,unsigned int) ;
 int FUNC_6 (struct tmio_mmc_host*,int ,int *,int) ;

__attribute__((used)) static void FUNC_7(struct tmio_mmc_host *VAR_3,
       unsigned short *VAR_4,
       unsigned int VAR_5)
{
 int VAR_6 = VAR_3->data->flags & VAR_1;
 u8 *VAR_7;




 if (VAR_3->pdata->flags & VAR_2) {
  u32 VAR_8 = 0;
  u32 *VAR_9 = (u32 *)VAR_4;

  if (VAR_6)
   FUNC_3(VAR_3, VAR_0, VAR_9,
        VAR_5 >> 2);
  else
   FUNC_6(VAR_3, VAR_0, VAR_9,
         VAR_5 >> 2);


  if (!(VAR_5 & 0x3))
   return;

  VAR_9 += VAR_5 >> 2;
  VAR_5 %= 4;

  if (VAR_6) {
   FUNC_3(VAR_3, VAR_0, &VAR_8, 1);
   FUNC_0(VAR_9, &VAR_8, VAR_5);
  } else {
   FUNC_0(&VAR_8, VAR_9, VAR_5);
   FUNC_6(VAR_3, VAR_0, &VAR_8, 1);
  }

  return;
 }

 if (VAR_6)
  FUNC_2(VAR_3, VAR_0, VAR_4, VAR_5 >> 1);
 else
  FUNC_5(VAR_3, VAR_0, VAR_4, VAR_5 >> 1);


 if (!(VAR_5 & 0x1))
  return;


 VAR_7 = (u8 *)(VAR_4 + (VAR_5 >> 1));







 if (VAR_6)
  *VAR_7 = FUNC_1(VAR_3, VAR_0) & 0xff;
 else
  FUNC_4(VAR_3, VAR_0, *VAR_7);
}
