
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct resource {scalar_t__ start; } ;
struct platform_device {int dev; int name; } ;
struct TYPE_6__ {scalar_t__ sch_wdtba; int unlock_sequence; } ;
struct TYPE_5__ {int * parent; int timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int) ;
 TYPE_4__ VAR_5 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_1__ VAR_6 ;
 int FUNC_5 (scalar_t__) ;
 int VAR_7 ;
 struct resource* FUNC_6 (struct platform_device*,int ,int ) ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (scalar_t__,int ,int ) ;
 int FUNC_9 (struct resource*) ;
 int FUNC_10 (int *) ;
 int VAR_8 ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_9)
{
 struct resource *VAR_10;
 u8 VAR_11;
 int VAR_12;

 VAR_10 = FUNC_6(VAR_9, VAR_2, 0);
 if (!VAR_10)
  return -VAR_1;

 if (!FUNC_8(VAR_10->start, FUNC_9(VAR_10), VAR_9->name)) {
  FUNC_1(&VAR_9->dev, "Watchdog region 0x%llx already in use!\n",
   (u64)VAR_10->start);
  return -VAR_0;
 }

 VAR_5.sch_wdtba = VAR_10->start;
 FUNC_0(&VAR_9->dev, "WDT = 0x%X\n", VAR_5.sch_wdtba);

 VAR_6.timeout = VAR_8;
 FUNC_12(&VAR_6, VAR_7);
 VAR_6.parent = &VAR_9->dev;

 FUNC_10(&VAR_5.unlock_sequence);

 VAR_11 = FUNC_5(VAR_5.sch_wdtba + VAR_3);
 if (VAR_11 & VAR_4)
  FUNC_2(&VAR_9->dev,
   "Watchdog Timer is Locked (Reg=0x%x)\n", VAR_11);

 FUNC_4();

 VAR_12 = FUNC_11(&VAR_6);
 if (VAR_12)
  goto misc_register_error;

 return 0;

misc_register_error:
 FUNC_3();
 FUNC_7(VAR_10->start, FUNC_9(VAR_10));
 VAR_5.sch_wdtba = 0;
 return VAR_12;
}
