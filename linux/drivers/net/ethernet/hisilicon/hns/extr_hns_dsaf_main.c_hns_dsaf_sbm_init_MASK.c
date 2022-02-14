
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int name; } ;
struct dsaf_device {TYPE_1__ ae_dev; int dev; int dsaf_ver; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,int ,scalar_t__,...) ;
 scalar_t__ FUNC_2 (struct dsaf_device*,int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct dsaf_device*) ;
 int FUNC_4 (struct dsaf_device*) ;
 int FUNC_5 (struct dsaf_device*) ;
 int FUNC_6 (struct dsaf_device*) ;
 int FUNC_7 (struct dsaf_device*) ;
 int FUNC_8 (struct dsaf_device*) ;
 int FUNC_9 (int,int) ;

__attribute__((used)) static int FUNC_10(struct dsaf_device *VAR_6)
{
 u32 VAR_7;
 u32 VAR_8;
 u32 VAR_9 = 0;
 int VAR_10;

 if (FUNC_0(VAR_6->dsaf_ver)) {
  FUNC_4(VAR_6);
  VAR_8 = VAR_3;
 } else {
  FUNC_8(VAR_6);
  VAR_8 = VAR_0;
 }


 FUNC_5(VAR_6);


 VAR_10 = FUNC_6(VAR_6);
 if (VAR_10) {
  FUNC_1(VAR_6->dev,
   "hns_dsaf_sbm_cfg_mib_en fail,%s, ret=%d\n",
   VAR_6->ae_dev.name, VAR_10);
  return VAR_10;
 }


 FUNC_7(VAR_6);

 do {
  FUNC_9(200, 210);
  VAR_7 = FUNC_2(VAR_6, VAR_2,
       VAR_8, VAR_4);
  VAR_9++;
 } while (VAR_7 != (VAR_8 >> VAR_4) &&
   VAR_9 < VAR_1);

 if (VAR_7 != (VAR_8 >> VAR_4)) {
  FUNC_1(VAR_6->dev,
   "hns_dsaf_sbm_init fail %s, flag=%d, cnt=%d\n",
   VAR_6->ae_dev.name, VAR_7, VAR_9);
  return -VAR_5;
 }

 FUNC_3(VAR_6);

 return 0;
}
