
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct toshsd_host {scalar_t__ ioaddr; int sg_miter; struct mmc_data* data; TYPE_1__* pdev; } ;
struct mmc_data {int flags; int blksz; int blocks; int sg_len; TYPE_2__* sg; } ;
struct TYPE_4__ {int offset; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int *,char*,int ,int ,int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int *,TYPE_2__*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct toshsd_host *VAR_6, struct mmc_data *VAR_7)
{
 unsigned int VAR_8 = VAR_3;

 FUNC_0(&VAR_6->pdev->dev, "setup data transfer: blocksize %08x  nr_blocks %d, offset: %08x\n",
  VAR_7->blksz, VAR_7->blocks, VAR_7->sg->offset);

 VAR_6->data = VAR_7;

 if (VAR_7->flags & VAR_0)
  VAR_8 |= VAR_5;
 else
  VAR_8 |= VAR_4;

 FUNC_2(&VAR_6->sg_miter, VAR_7->sg, VAR_7->sg_len, VAR_8);


 FUNC_1(VAR_7->blocks, VAR_6->ioaddr + VAR_1);
 FUNC_1(VAR_7->blksz, VAR_6->ioaddr + VAR_2);
}
