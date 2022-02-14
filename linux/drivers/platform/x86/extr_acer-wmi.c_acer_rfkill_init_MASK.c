
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct device*,int ,char*,int) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int VAR_11 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_14)
{
 int VAR_15;

 if (FUNC_3(VAR_3)) {
  VAR_13 = FUNC_2(VAR_14, VAR_6,
   "acer-wireless", VAR_3);
  if (FUNC_0(VAR_13)) {
   VAR_15 = FUNC_1(VAR_13);
   goto error_wireless;
  }
 }

 if (FUNC_3(VAR_1)) {
  VAR_9 = FUNC_2(VAR_14,
   VAR_5, "acer-bluetooth",
   VAR_1);
  if (FUNC_0(VAR_9)) {
   VAR_15 = FUNC_1(VAR_9);
   goto error_bluetooth;
  }
 }

 if (FUNC_3(VAR_2)) {
  VAR_12 = FUNC_2(VAR_14,
   VAR_7, "acer-threeg",
   VAR_2);
  if (FUNC_0(VAR_12)) {
   VAR_15 = FUNC_1(VAR_12);
   goto error_threeg;
  }
 }

 VAR_11 = 1;

 if ((VAR_10 || !FUNC_8(VAR_0)) &&
     FUNC_3(VAR_3 | VAR_1 | VAR_2))
  FUNC_7(&VAR_8,
   FUNC_6(VAR_4));

 return 0;

error_threeg:
 if (FUNC_3(VAR_1)) {
  FUNC_5(VAR_9);
  FUNC_4(VAR_9);
 }
error_bluetooth:
 if (FUNC_3(VAR_3)) {
  FUNC_5(VAR_13);
  FUNC_4(VAR_13);
 }
error_wireless:
 return VAR_15;
}
