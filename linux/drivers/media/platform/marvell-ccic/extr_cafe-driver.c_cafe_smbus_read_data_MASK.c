
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
typedef unsigned int u16 ;
struct mcam_camera {int dev_lock; } ;
struct cafe_camera {int smbus_wait; struct mcam_camera mcam; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int FUNC_0 (struct mcam_camera*) ;
 int FUNC_1 (struct cafe_camera*,char*,unsigned int,unsigned int) ;
 unsigned int FUNC_2 (struct mcam_camera*,int ) ;
 int FUNC_3 (struct mcam_camera*,int ,unsigned int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct cafe_camera *VAR_14,
  u16 VAR_15, u8 VAR_16, u8 *VAR_17)
{
 unsigned int VAR_18;
 unsigned long VAR_19;
 struct mcam_camera *VAR_20 = &VAR_14->mcam;

 FUNC_4(&VAR_20->dev_lock, VAR_19);
 VAR_18 = VAR_5 | ((VAR_15 << VAR_8) & VAR_7);
 VAR_18 |= VAR_6;



 VAR_18 |= VAR_4;
 FUNC_3(VAR_20, VAR_2, VAR_18);
 (void) FUNC_2(VAR_20, VAR_3);
 VAR_18 = VAR_12 | ((VAR_16 << VAR_10) & VAR_9);
 FUNC_3(VAR_20, VAR_3, VAR_18);
 FUNC_5(&VAR_20->dev_lock, VAR_19);

 FUNC_6(VAR_14->smbus_wait,
   FUNC_0(VAR_20), VAR_0);
 FUNC_4(&VAR_20->dev_lock, VAR_19);
 VAR_18 = FUNC_2(VAR_20, VAR_3);
 FUNC_5(&VAR_20->dev_lock, VAR_19);

 if (VAR_18 & VAR_11) {
  FUNC_1(VAR_14, "SMBUS read (%02x/%02x) error\n", VAR_15, VAR_16);
  return -VAR_1;
 }
 if (!(VAR_18 & VAR_13)) {
  FUNC_1(VAR_14, "SMBUS read (%02x/%02x) timed out\n", VAR_15,
    VAR_16);
  return -VAR_1;
 }
 *VAR_17 = VAR_18 & 0xff;
 return 0;
}
