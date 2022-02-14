
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef size_t u32 ;
struct TYPE_5__ {size_t consumed; scalar_t__* addr; int length; } ;
struct sdhci_host {TYPE_2__ sg_miter; TYPE_1__* data; } ;
struct TYPE_4__ {size_t blksz; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 size_t FUNC_4 (int ,size_t) ;
 int FUNC_5 (struct sdhci_host*,size_t,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_8(struct sdhci_host *VAR_1)
{
 unsigned long VAR_2;
 size_t VAR_3, VAR_4, VAR_5;
 u32 VAR_6;
 u8 *VAR_7;

 FUNC_1("PIO writing\n");

 VAR_3 = VAR_1->data->blksz;
 VAR_5 = 0;
 VAR_6 = 0;

 FUNC_3(VAR_2);

 while (VAR_3) {
  FUNC_0(!FUNC_6(&VAR_1->sg_miter));

  VAR_4 = FUNC_4(VAR_1->sg_miter.length, VAR_3);

  VAR_3 -= VAR_4;
  VAR_1->sg_miter.consumed = VAR_4;

  VAR_7 = VAR_1->sg_miter.addr;

  while (VAR_4) {
   VAR_6 |= (u32)*VAR_7 << (VAR_5 * 8);

   VAR_7++;
   VAR_5++;
   VAR_4--;

   if ((VAR_5 == 4) || ((VAR_4 == 0) && (VAR_3 == 0))) {
    FUNC_5(VAR_1, VAR_6, VAR_0);
    VAR_5 = 0;
    VAR_6 = 0;
   }
  }
 }

 FUNC_7(&VAR_1->sg_miter);

 FUNC_2(VAR_2);
}
