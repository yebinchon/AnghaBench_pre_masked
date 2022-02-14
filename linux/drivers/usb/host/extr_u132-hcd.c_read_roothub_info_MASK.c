
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct u132 {int hc_control; int hc_roothub_status; int hc_roothub_a; int num_ports; int* hc_roothub_portstatus; TYPE_1__* platform_dev; } ;
struct TYPE_4__ {int status; int a; int* portstatus; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int,...) ;
 TYPE_2__ VAR_2 ;
 int FUNC_1 (struct u132*,int,int*) ;

__attribute__((used)) static int FUNC_2(struct u132 *VAR_3)
{
 u32 VAR_4;
 int VAR_5;
 VAR_5 = FUNC_1(VAR_3, VAR_4, &VAR_4);
 if (VAR_5) {
  FUNC_0(&VAR_3->platform_dev->dev, "error %d accessing device co"
   "ntrol\n", VAR_5);
  return VAR_5;
 } else if ((VAR_4 & 0xFF) == 0x10) {
 } else if ((VAR_4 & 0xFF) == 0x11) {
 } else {
  FUNC_0(&VAR_3->platform_dev->dev, "device revision is not valid"
   " %08X\n", VAR_4);
  return -VAR_0;
 }
 VAR_5 = FUNC_1(VAR_3, VAR_1, &VAR_3->hc_control);
 if (VAR_5) {
  FUNC_0(&VAR_3->platform_dev->dev, "error %d accessing device co"
   "ntrol\n", VAR_5);
  return VAR_5;
 }
 VAR_5 = FUNC_1(VAR_3, VAR_2.status,
  &VAR_3->hc_roothub_status);
 if (VAR_5) {
  FUNC_0(&VAR_3->platform_dev->dev, "error %d accessing device re"
   "g roothub.status\n", VAR_5);
  return VAR_5;
 }
 VAR_5 = FUNC_1(VAR_3, VAR_2.a, &VAR_3->hc_roothub_a);
 if (VAR_5) {
  FUNC_0(&VAR_3->platform_dev->dev, "error %d accessing device re"
   "g roothub.a\n", VAR_5);
  return VAR_5;
 }
 {
  int VAR_6 = VAR_3->num_ports;
  int VAR_7 = 0;
  while (VAR_6-- > 0) {
   VAR_5 = FUNC_1(VAR_3, VAR_2.portstatus[VAR_7],
    &VAR_3->hc_roothub_portstatus[VAR_7]);
   if (VAR_5) {
    FUNC_0(&VAR_3->platform_dev->dev, "error %d acc"
     "essing device roothub.portstatus[%d]\n"
     , VAR_5, VAR_7);
    return VAR_5;
   } else
    VAR_7 += 1;
  }
 }
 return 0;
}
