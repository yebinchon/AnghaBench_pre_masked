
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_info {struct mdev_part* priv; } ;
struct memcard {int blocklen; int writecnt; } ;
struct mdev_part {int partition; struct maple_device* mdev; } ;
struct maple_device {int unit; int port; int dev; TYPE_1__* mq; int busy; int maple_wait; } ;
typedef int __be32 ;
struct TYPE_2__ {int list; int * sendbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,char*,int ,int ) ;
 int FUNC_4 (int *,char*,int ,int ) ;
 int FUNC_5 (int *,char*,int ,int ,unsigned int,int) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct maple_device*,int ,int ,int,int *) ;
 struct memcard* FUNC_10 (struct maple_device*) ;
 int FUNC_11 (int *,unsigned char const*,int) ;
 int FUNC_12 (int ,int,int) ;

__attribute__((used)) static int FUNC_13(unsigned int VAR_8, const unsigned char *VAR_9,
 struct mtd_info *VAR_10)
{
 struct memcard *VAR_11;
 struct mdev_part *VAR_12;
 struct maple_device *VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 __be32 *VAR_20;

 VAR_12 = VAR_10->priv;
 VAR_13 = VAR_12->mdev;
 VAR_14 = VAR_12->partition;
 VAR_11 = FUNC_10(VAR_13);

 VAR_18 = VAR_11->blocklen/VAR_11->writecnt;

 VAR_20 = FUNC_7(VAR_18 + 4, VAR_4);
 if (!VAR_20) {
  VAR_15 = -VAR_2;
  goto fail_nosendbuf;
 }
 for (VAR_17 = 0; VAR_17 < VAR_11->writecnt; VAR_17++) {
  VAR_20[0] = FUNC_2(VAR_14 << 24 | VAR_17 << 16 | VAR_8);
  FUNC_11(&VAR_20[1], VAR_9 + VAR_18 * VAR_17, VAR_18);


  if (FUNC_0(&VAR_13->busy) == 1) {
   FUNC_12(VAR_13->maple_wait,
    FUNC_0(&VAR_13->busy) == 0, VAR_5);
   if (FUNC_0(&VAR_13->busy) == 1) {
    VAR_15 = -VAR_0;
    FUNC_4(&VAR_13->dev, "VMU write at (%d, %d)"
     "failed - device is busy\n",
     VAR_13->port, VAR_13->unit);
    goto fail_nolock;
   }
  }
  FUNC_1(&VAR_13->busy, 1);

  VAR_16 = FUNC_9(VAR_13, VAR_7,
   VAR_6, VAR_18 / 4 + 2, VAR_20);
  VAR_19 = FUNC_12(VAR_13->maple_wait,
   FUNC_0(&VAR_13->busy) == 0, VAR_5/10);
  if (VAR_16) {
   VAR_15 = -VAR_1;
   FUNC_1(&VAR_13->busy, 0);
   goto fail_nolock;
  }
  if (FUNC_0(&VAR_13->busy) == 2) {
   FUNC_1(&VAR_13->busy, 0);
  } else if (VAR_19 == 0 || VAR_19 == -VAR_3) {
   VAR_15 = -VAR_1;
   FUNC_5(&VAR_13->dev, "Write at (%d, %d) of block"
    " 0x%X at phase %d failed: could not"
    " communicate with VMU", VAR_13->port,
    VAR_13->unit, VAR_8, VAR_17);
   FUNC_1(&VAR_13->busy, 0);
   FUNC_6(VAR_13->mq->sendbuf);
   VAR_13->mq->sendbuf = ((void*)0);
   FUNC_8(&(VAR_13->mq->list));
   goto fail_nolock;
  }
 }
 FUNC_6(VAR_20);

 return VAR_11->blocklen;

fail_nolock:
 FUNC_6(VAR_20);
fail_nosendbuf:
 FUNC_3(&VAR_13->dev, "VMU (%d, %d): write failed\n", VAR_13->port,
  VAR_13->unit);
 return VAR_15;
}
