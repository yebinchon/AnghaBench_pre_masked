
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hid_device {struct gb_hid* driver_data; } ;
struct TYPE_2__ {int wReportDescLength; } ;
struct gb_hid {TYPE_1__ hdesc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct gb_hid*,char*) ;
 int FUNC_2 (struct hid_device*,char*) ;
 int FUNC_3 (struct hid_device*,char*,unsigned int) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (unsigned int,int ) ;
 unsigned int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct hid_device *VAR_4)
{
 struct gb_hid *VAR_5 = VAR_4->driver_data;
 unsigned int VAR_6;
 char *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_6(VAR_5->hdesc.wReportDescLength);
 if (!VAR_6 || VAR_6 > VAR_3) {
  FUNC_0("weird size of report descriptor (%u)\n", VAR_6);
  return -VAR_0;
 }

 VAR_7 = FUNC_5(VAR_6, VAR_2);
 if (!VAR_7) {
  return -VAR_1;
 }

 VAR_8 = FUNC_1(VAR_5, VAR_7);
 if (VAR_8) {
  FUNC_2(VAR_4, "reading report descriptor failed\n");
  goto free_rdesc;
 }

 VAR_8 = FUNC_3(VAR_4, VAR_7, VAR_6);
 if (VAR_8)
  FUNC_0("parsing report descriptor failed\n");

free_rdesc:
 FUNC_4(VAR_7);

 return VAR_8;
}
