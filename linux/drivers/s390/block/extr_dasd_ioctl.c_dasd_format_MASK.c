
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct format_data_t {int blksize; int start_unit; int intensity; int stop_unit; } ;
struct dasd_device {scalar_t__ state; TYPE_3__* discipline; TYPE_1__* cdev; } ;
struct dasd_block {int gdp; struct dasd_device* base; } ;
struct block_device {TYPE_2__* bd_inode; } ;
struct TYPE_6__ {int (* format_device ) (struct dasd_device*,struct format_data_t*,int) ;} ;
struct TYPE_5__ {int i_blkbits; } ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,struct dasd_device*,char*,int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct block_device* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct block_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (struct dasd_device*,struct format_data_t*,int) ;
 int FUNC_7 (struct dasd_device*,struct format_data_t*,int) ;

__attribute__((used)) static int
FUNC_8(struct dasd_block *VAR_5, struct format_data_t *VAR_6)
{
 struct dasd_device *VAR_7;
 int VAR_8;

 VAR_7 = VAR_5->base;
 if (VAR_7->discipline->format_device == ((void*)0))
  return -VAR_4;

 if (VAR_7->state != VAR_0) {
  FUNC_5("%s: The DASD cannot be formatted while it is enabled\n",
   FUNC_4(&VAR_7->cdev->dev));
  return -VAR_3;
 }

 FUNC_0(VAR_1, VAR_7,
        "formatting units %u to %u (%u B blocks) flags %u",
        VAR_6->start_unit,
        VAR_6->stop_unit, VAR_6->blksize, VAR_6->intensity);






 if (VAR_6->start_unit == 0) {
  struct block_device *VAR_9 = FUNC_1(VAR_5->gdp, 0);
  VAR_9->bd_inode->i_blkbits = FUNC_3(VAR_6->blksize);
  FUNC_2(VAR_9);
 }

 VAR_8 = VAR_7->discipline->format_device(VAR_7, VAR_6, 1);
 if (VAR_8 == -VAR_2)
  VAR_8 = VAR_7->discipline->format_device(VAR_7, VAR_6, 0);

 return VAR_8;
}
