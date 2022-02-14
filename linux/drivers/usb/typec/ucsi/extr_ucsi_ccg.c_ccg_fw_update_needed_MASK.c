
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int version ;
typedef int u8 ;
struct TYPE_2__ {int build; } ;
struct version_info {int app; TYPE_1__ base; } ;
struct ucsi_ccg {int info; struct device* dev; } ;
struct device {int dummy; } ;
typedef enum enum_flash_mode { ____Placeholder_enum_flash_mode } enum_flash_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct ucsi_ccg*,int ,int *) ;
 int * VAR_8 ;
 int FUNC_1 (struct ucsi_ccg*,int ,int *,int) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*,...) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct version_info*,char*,int) ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static int FUNC_6(struct ucsi_ccg *VAR_10,
    enum enum_flash_mode *VAR_11)
{
 struct device *VAR_12 = VAR_10->dev;
 int VAR_13;
 struct version_info VAR_14[3];

 VAR_13 = FUNC_1(VAR_10, VAR_0, (u8 *)(&VAR_10->info),
         sizeof(VAR_10->info));
 if (VAR_13) {
  FUNC_2(VAR_12, "read device mode failed\n");
  return VAR_13;
 }

 VAR_13 = FUNC_1(VAR_10, VAR_1, (u8 *)VAR_14,
         sizeof(VAR_14));
 if (VAR_13) {
  FUNC_2(VAR_12, "read device mode failed\n");
  return VAR_13;
 }

 if (FUNC_5(&VAR_14[VAR_3], "\0\0\0\0\0\0\0\0",
     sizeof(struct version_info)) == 0) {
  FUNC_3(VAR_12, "secondary fw is not flashed\n");
  *VAR_11 = VAR_7;
 } else if (FUNC_4(VAR_14[VAR_3].base.build) <
  VAR_9) {
  FUNC_3(VAR_12, "secondary fw version is too low (< %d)\n",
    VAR_9);
  *VAR_11 = VAR_6;
 } else if (FUNC_5(&VAR_14[VAR_4], "\0\0\0\0\0\0\0\0",
     sizeof(struct version_info)) == 0) {
  FUNC_3(VAR_12, "primary fw is not flashed\n");
  *VAR_11 = VAR_5;
 } else if (FUNC_0(VAR_10, VAR_8[VAR_5],
     &VAR_14[VAR_4].app)) {
  FUNC_3(VAR_12, "found primary fw with later version\n");
  *VAR_11 = VAR_5;
 } else {
  FUNC_3(VAR_12, "secondary and primary fw are the latest\n");
  *VAR_11 = VAR_2;
 }
 return 0;
}
