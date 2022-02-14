
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hdq_data {int hdq_irqstatus; int hdq_mutex; int dev; int hdq_spinlock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct hdq_data*,int ) ;
 int FUNC_2 (struct hdq_data*,int ,int,int) ;
 int FUNC_3 (struct hdq_data*,int ,int,int ,int*) ;
 int VAR_11 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int ,int,int ) ;

__attribute__((used)) static int FUNC_9(struct hdq_data *VAR_12)
{
 int VAR_13 = 0;
 u8 VAR_14;
 unsigned long VAR_15;

 VAR_13 = FUNC_4(&VAR_12->hdq_mutex);
 if (VAR_13 < 0) {
  FUNC_0(VAR_12->dev, "Could not acquire mutex\n");
  VAR_13 = -VAR_0;
  goto rtn;
 }

 FUNC_6(&VAR_12->hdq_spinlock, VAR_15);

 FUNC_1(VAR_12, VAR_8);

 VAR_12->hdq_irqstatus = 0;
 FUNC_7(&VAR_12->hdq_spinlock, VAR_15);


 FUNC_2(VAR_12, VAR_2,
  VAR_5 | VAR_4,
  VAR_3 | VAR_5 |
  VAR_4);


 VAR_13 = FUNC_8(VAR_11,
  VAR_12->hdq_irqstatus, VAR_10);
 if (VAR_13 == 0) {
  FUNC_0(VAR_12->dev, "break wait elapsed\n");
  VAR_13 = -VAR_0;
  goto out;
 }

 VAR_14 = VAR_12->hdq_irqstatus;

 if (!(VAR_14 & VAR_9)) {
  FUNC_0(VAR_12->dev, "timeout waiting for TIMEOUT, %x",
    VAR_14);
  VAR_13 = -VAR_1;
  goto out;
 }





 if (!(FUNC_1(VAR_12, VAR_2) &
   VAR_6)) {
  FUNC_0(VAR_12->dev, "Presence bit not set\n");
  VAR_13 = -VAR_1;
  goto out;
 }





 VAR_13 = FUNC_3(VAR_12, VAR_2,
   VAR_5 |
   VAR_4, VAR_7,
   &VAR_14);
 if (VAR_13)
  FUNC_0(VAR_12->dev, "timeout waiting INIT&GO bits"
   " return to zero, %x", VAR_14);

out:
 FUNC_5(&VAR_12->hdq_mutex);
rtn:
 return VAR_13;
}
