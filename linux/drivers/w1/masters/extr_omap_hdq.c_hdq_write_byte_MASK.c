
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hdq_data {int hdq_irqstatus; int dev; int hdq_spinlock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct hdq_data*,int ) ;
 int FUNC_2 (struct hdq_data*,int ,int,int) ;
 int FUNC_3 (struct hdq_data*,int ,int) ;
 int FUNC_4 (struct hdq_data*,int ,int,int ,int*) ;
 int VAR_9 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int ,int,int ) ;

__attribute__((used)) static int FUNC_8(struct hdq_data *VAR_10, u8 VAR_11, u8 *VAR_12)
{
 int VAR_13;
 u8 VAR_14;
 unsigned long VAR_15;

 *VAR_12 = 0;

 FUNC_5(&VAR_10->hdq_spinlock, VAR_15);

 FUNC_1(VAR_10, VAR_5);

 VAR_10->hdq_irqstatus = 0;
 FUNC_6(&VAR_10->hdq_spinlock, VAR_15);

 FUNC_3(VAR_10, VAR_8, VAR_11);


 FUNC_2(VAR_10, VAR_1, VAR_3,
  VAR_2 | VAR_3);

 VAR_13 = FUNC_7(VAR_9,
  VAR_10->hdq_irqstatus, VAR_7);
 if (VAR_13 == 0) {
  FUNC_0(VAR_10->dev, "TX wait elapsed\n");
  VAR_13 = -VAR_0;
  goto out;
 }

 *VAR_12 = VAR_10->hdq_irqstatus;

 if (!(*VAR_12 & VAR_6)) {
  FUNC_0(VAR_10->dev, "timeout waiting for"
   " TXCOMPLETE/RXCOMPLETE, %x", *VAR_12);
  VAR_13 = -VAR_0;
  goto out;
 }


 VAR_13 = FUNC_4(VAR_10, VAR_1,
   VAR_3,
   VAR_4, &VAR_14);
 if (VAR_13) {
  FUNC_0(VAR_10->dev, "timeout waiting GO bit"
   " return to zero, %x", VAR_14);
 }

out:
 return VAR_13;
}
