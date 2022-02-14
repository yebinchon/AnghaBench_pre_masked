
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct device {int dummy; } ;
struct bcm2835_host {TYPE_1__* data; scalar_t__ ioaddr; TYPE_2__* pdev; } ;
struct TYPE_4__ {struct device dev; } ;
struct TYPE_3__ {int flags; int error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct bcm2835_host*,int) ;
 int FUNC_1 (struct device*,char*,char*,int) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct bcm2835_host *VAR_9)
{
 struct device *VAR_10 = &VAR_9->pdev->dev;
 u32 VAR_11;
 bool VAR_12;

 VAR_12 = (VAR_9->data->flags & VAR_2) != 0;
 FUNC_0(VAR_9, VAR_12);

 VAR_11 = FUNC_2(VAR_9->ioaddr + VAR_3);
 if (VAR_11 & (VAR_5 |
        VAR_6 |
        VAR_7)) {
  FUNC_1(VAR_10, "%s transfer error - HSTS %08x\n",
   VAR_12 ? "read" : "write", VAR_11);
  VAR_9->data->error = -VAR_0;
 } else if ((VAR_11 & (VAR_4 |
         VAR_8))) {
  FUNC_1(VAR_10, "%s timeout error - HSTS %08x\n",
   VAR_12 ? "read" : "write", VAR_11);
  VAR_9->data->error = -VAR_1;
 }
}
