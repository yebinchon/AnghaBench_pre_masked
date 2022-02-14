
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtsx_ucr {int ic_version; int is_rts5179; TYPE_1__* pusb_intf; int package; } ;
struct TYPE_2__ {int dev; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct rtsx_ucr*) ;
 int FUNC_2 (struct rtsx_ucr*,int ,int*) ;
 int FUNC_3 (struct rtsx_ucr*) ;
 int FUNC_4 (struct rtsx_ucr*,int ,int ,int) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct rtsx_ucr *VAR_13)
{
 int VAR_14;
 u8 VAR_15;

 FUNC_1(VAR_13);


 VAR_14 = FUNC_4(VAR_13,
   VAR_5, VAR_11, VAR_12);
 if (VAR_14)
  return VAR_14;

 FUNC_5(100, 1000);
 VAR_14 = FUNC_4(VAR_13, VAR_4, VAR_3, 0x00);
 if (VAR_14)
  return VAR_14;


 VAR_14 = FUNC_2(VAR_13, VAR_6, &VAR_15);
 if (VAR_14)
  return VAR_14;

 VAR_13->ic_version = VAR_15 & VAR_7;


 VAR_14 = FUNC_2(VAR_13, VAR_1, &VAR_15);
 if (VAR_14)
  return VAR_14;

 if (VAR_15 & VAR_0) {
  VAR_13->package = VAR_8;
  FUNC_0(&VAR_13->pusb_intf->dev, "Package: LQFP48\n");
 } else {
  VAR_13->package = VAR_9;
  FUNC_0(&VAR_13->pusb_intf->dev, "Package: QFN24\n");
 }


 FUNC_2(VAR_13, VAR_2, &VAR_15);
 if (VAR_15 & VAR_10) {
  VAR_13->is_rts5179 = 1;
  FUNC_0(&VAR_13->pusb_intf->dev, "Device is rts5179\n");
 } else {
  VAR_13->is_rts5179 = 0;
 }

 return FUNC_3(VAR_13);
}
