
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firmware {int size; int data; } ;
struct fb_info {struct broadsheetfb_par* par; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct broadsheetfb_par {int io_lock; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct broadsheetfb_par*,int ,int) ;
 int FUNC_1 (struct device*,char*) ;
 struct fb_info* FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct firmware const*) ;
 int FUNC_7 (struct firmware const**,char*,struct device*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_1,
      struct device_attribute *VAR_2,
      const char *VAR_3, size_t VAR_4)
{
 int VAR_5;
 struct fb_info *VAR_6 = FUNC_2(VAR_1);
 struct broadsheetfb_par *VAR_7 = VAR_6->par;
 const struct firmware *VAR_8;

 if (VAR_4 < 1)
  return -VAR_0;

 VAR_5 = FUNC_7(&VAR_8, "broadsheet.wbf", VAR_1);
 if (VAR_5 < 0) {
  FUNC_1(VAR_1, "Failed to get broadsheet waveform\n");
  goto err_failed;
 }


 if ((VAR_8->size < 8*1024) || (VAR_8->size > 64*1024)) {
  FUNC_1(VAR_1, "Invalid waveform\n");
  VAR_5 = -VAR_0;
  goto err_fw;
 }

 FUNC_4(&(VAR_7->io_lock));
 VAR_5 = FUNC_0(VAR_7, VAR_8->data,
       VAR_8->size);

 FUNC_5(&(VAR_7->io_lock));
 if (VAR_5 < 0) {
  FUNC_1(VAR_1, "Failed to store broadsheet waveform\n");
  goto err_fw;
 }

 FUNC_3(VAR_1, "Stored broadsheet waveform, size %zd\n", VAR_8->size);

 VAR_5 = VAR_4;

err_fw:
 FUNC_6(VAR_8);
err_failed:
 return VAR_5;
}
