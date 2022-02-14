
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hdq_data {int hdq_irqstatus; int hdq_mutex; int dev; } ;


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
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (void*,int ) ;
 int FUNC_2 (void*,int ,int,int) ;
 int FUNC_3 (void*,int ,int) ;
 int VAR_10 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (int ,int,int ) ;

__attribute__((used)) static u8 FUNC_9(void *VAR_11, u8 VAR_12)
{
 u8 VAR_13, VAR_14;
 int VAR_15;
 u8 VAR_16 = 0x3;
 struct hdq_data *VAR_17 = VAR_11;
 u8 VAR_18 = VAR_4 | VAR_2 |
    VAR_3;
 u8 VAR_19 = VAR_18 | VAR_1;

 FUNC_6(VAR_11);

 VAR_15 = FUNC_4(&VAR_17->hdq_mutex);
 if (VAR_15 < 0) {
  FUNC_0(VAR_17->dev, "Could not acquire mutex\n");
  goto rtn;
 }

 VAR_17->hdq_irqstatus = 0;

 FUNC_2(VAR_11, VAR_0,
        VAR_18 | VAR_1, VAR_19);
 VAR_15 = FUNC_8(VAR_10,
     (VAR_17->hdq_irqstatus
      & VAR_5),
     VAR_8);
 if (VAR_15 == 0) {
  FUNC_0(VAR_17->dev, "RX wait elapsed\n");
  goto out;
 }
 VAR_13 = (FUNC_1(VAR_11, VAR_7) & 0x01);

 VAR_17->hdq_irqstatus = 0;

 FUNC_2(VAR_11, VAR_0,
        VAR_18 | VAR_1, VAR_19);
 VAR_15 = FUNC_8(VAR_10,
     (VAR_17->hdq_irqstatus
      & VAR_5),
     VAR_8);
 if (VAR_15 == 0) {
  FUNC_0(VAR_17->dev, "RX wait elapsed\n");
  goto out;
 }
 VAR_14 = (FUNC_1(VAR_11, VAR_7) & 0x01);

 if (VAR_13 && VAR_14) {
  VAR_16 = 0x03;
  goto out;
 }
 if (!VAR_13 && !VAR_14) {

  VAR_16 = VAR_12 ? 0x04 : 0;
 } else {

  VAR_12 = VAR_13;
  VAR_16 = VAR_13 ? 0x05 : 0x02;
 }


 FUNC_3(VAR_11, VAR_9, VAR_12);
 FUNC_2(VAR_11, VAR_0, VAR_18, VAR_19);
 VAR_15 = FUNC_8(VAR_10,
     (VAR_17->hdq_irqstatus
      & VAR_6),
     VAR_8);
 if (VAR_15 == 0) {
  FUNC_0(VAR_17->dev, "TX wait elapsed\n");
  goto out;
 }

 FUNC_2(VAR_11, VAR_0, 0,
        VAR_4);

out:
 FUNC_5(&VAR_17->hdq_mutex);
rtn:
 FUNC_7(VAR_11);
 return VAR_16;
}
