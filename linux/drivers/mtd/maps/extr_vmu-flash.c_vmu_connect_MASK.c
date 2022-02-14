
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vmupart {int dummy; } ;
struct mtd_info {int dummy; } ;
struct memcard {unsigned long partitions; unsigned long blocklen; unsigned long writecnt; unsigned long readcnt; unsigned long removeable; struct memcard* parts; struct memcard* mtd; scalar_t__ partition; } ;
struct TYPE_2__ {int * function_data; int function; } ;
struct maple_device {int unit; int port; int dev; int busy; int maple_wait; TYPE_1__ devinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int ,int ,int) ;
 int FUNC_4 (int *,char*,int ,int ) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (struct memcard*) ;
 struct memcard* FUNC_7 (int,int ) ;
 void* FUNC_8 (unsigned long,int,int ) ;
 int FUNC_9 (struct maple_device*,int ,int ,int,int *) ;
 int FUNC_10 (struct maple_device*,int ,int ,int ) ;
 int FUNC_11 (struct maple_device*,struct memcard*) ;
 int VAR_6 ;
 int FUNC_12 (int ,int,int ) ;

__attribute__((used)) static int FUNC_13(struct maple_device *VAR_7)
{
 unsigned long VAR_8, VAR_9;
 int VAR_10, VAR_11;
 struct memcard *VAR_12;
 u32 VAR_13 = 0;

 VAR_8 = FUNC_2(VAR_7->devinfo.function);



 VAR_10 = FUNC_5(VAR_8);

 VAR_9 = FUNC_2(VAR_7->devinfo.function_data[VAR_10 - 1]);

 VAR_12 = FUNC_7(sizeof(struct memcard), VAR_2);
 if (!VAR_12) {
  VAR_11 = -VAR_1;
  goto fail_nomem;
 }

 VAR_12->partitions = (VAR_9 >> 24 & 0xFF) + 1;
 VAR_12->blocklen = ((VAR_9 >> 16 & 0xFF) + 1) << 5;
 VAR_12->writecnt = VAR_9 >> 12 & 0xF;
 VAR_12->readcnt = VAR_9 >> 8 & 0xF;
 VAR_12->removeable = VAR_9 >> 7 & 1;

 VAR_12->partition = 0;





 VAR_12->parts = FUNC_8(VAR_12->partitions, sizeof(struct vmupart),
        VAR_2);
 if (!VAR_12->parts) {
  VAR_11 = -VAR_1;
  goto fail_partitions;
 }

 VAR_12->mtd = FUNC_8(VAR_12->partitions, sizeof(struct mtd_info),
      VAR_2);
 if (!VAR_12->mtd) {
  VAR_11 = -VAR_1;
  goto fail_mtd_info;
 }

 FUNC_11(VAR_7, VAR_12);






 FUNC_10(VAR_7, VAR_6, 0,
  VAR_5);


 if (FUNC_0(&VAR_7->busy) == 1) {
  FUNC_12(VAR_7->maple_wait,
   FUNC_0(&VAR_7->busy) == 0, VAR_3);
  if (FUNC_0(&VAR_7->busy) == 1) {
   FUNC_4(&VAR_7->dev, "VMU at (%d, %d) is busy\n",
    VAR_7->port, VAR_7->unit);
   VAR_11 = -VAR_0;
   goto fail_device_busy;
  }
 }

 FUNC_1(&VAR_7->busy, 1);





 VAR_11 = FUNC_9(VAR_7, VAR_5,
  VAR_4, 2, &VAR_13);
 if (VAR_11) {
  FUNC_3(&VAR_7->dev, "Could not lock VMU at (%d, %d)"
   " error is 0x%X\n", VAR_7->port, VAR_7->unit, VAR_11);
  goto fail_mtd_info;
 }
 return 0;

fail_device_busy:
 FUNC_6(VAR_12->mtd);
fail_mtd_info:
 FUNC_6(VAR_12->parts);
fail_partitions:
 FUNC_6(VAR_12);
fail_nomem:
 return VAR_11;
}
