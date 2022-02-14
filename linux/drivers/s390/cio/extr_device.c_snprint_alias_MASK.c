
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccw_device_id {int cu_type; int cu_model; scalar_t__ dev_type; int dev_model; } ;


 int FUNC_0 (char*,size_t,char*,...) ;

__attribute__((used)) static int FUNC_1(char *VAR_0, size_t VAR_1,
    struct ccw_device_id *VAR_2, const char *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1, "ccw:t%04Xm%02X", VAR_2->cu_type, VAR_2->cu_model);
 if (VAR_4 > VAR_1)
  return VAR_4;
 VAR_0 += VAR_4;
 VAR_1 -= VAR_4;

 if (VAR_2->dev_type != 0)
  VAR_4 += FUNC_0(VAR_0, VAR_1, "dt%04Xdm%02X%s", VAR_2->dev_type,
    VAR_2->dev_model, VAR_3);
 else
  VAR_4 += FUNC_0(VAR_0, VAR_1, "dtdm%s", VAR_3);

 return VAR_4;
}
