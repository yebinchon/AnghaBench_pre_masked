
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hdq_data {int hdq_irqstatus; int hdq_mutex; int dev; int hdq_usecount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct hdq_data*,int ) ;
 int FUNC_2 (struct hdq_data*,int ,int,int) ;
 int VAR_9 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int,int ) ;

__attribute__((used)) static int FUNC_6(struct hdq_data *VAR_10, u8 *VAR_11)
{
 int VAR_12 = 0;
 u8 VAR_13;

 VAR_12 = FUNC_3(&VAR_10->hdq_mutex);
 if (VAR_12 < 0) {
  VAR_12 = -VAR_0;
  goto rtn;
 }

 if (!VAR_10->hdq_usecount) {
  VAR_12 = -VAR_1;
  goto out;
 }

 if (!(VAR_10->hdq_irqstatus & VAR_6)) {
  FUNC_2(VAR_10, VAR_3,
   VAR_4 | VAR_5,
   VAR_4 | VAR_5);



  FUNC_5(VAR_9,
       (VAR_10->hdq_irqstatus
        & VAR_6),
       VAR_8);

  FUNC_2(VAR_10, VAR_3, 0,
   VAR_4);
  VAR_13 = VAR_10->hdq_irqstatus;

  if (!(VAR_13 & VAR_6)) {
   FUNC_0(VAR_10->dev, "timeout waiting for"
    " RXCOMPLETE, %x", VAR_13);
   VAR_12 = -VAR_2;
   goto out;
  }
 }

 *VAR_11 = FUNC_1(VAR_10, VAR_7);
out:
 FUNC_4(&VAR_10->hdq_mutex);
rtn:
 return VAR_12;

}
