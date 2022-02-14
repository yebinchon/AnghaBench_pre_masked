
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int name; } ;
struct device_attribute {TYPE_1__ attr; } ;
struct TYPE_6__ {char* name; int mode; } ;
struct TYPE_7__ {int read; scalar_t__ size; TYPE_2__ attr; } ;
struct cxl_afu {int crs_num; int dev; scalar_t__ eb_len; int crs; TYPE_3__ attr_eb; } ;
struct afu_config_record {int list; } ;
struct TYPE_8__ {scalar_t__ (* support_attributes ) (int ,int ) ;} ;


 int FUNC_0 (struct device_attribute*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct afu_config_record*) ;
 int FUNC_3 (struct afu_config_record*) ;
 int VAR_1 ;
 struct device_attribute* VAR_2 ;
 int VAR_3 ;
 TYPE_4__* VAR_4 ;
 struct afu_config_record* FUNC_4 (struct cxl_afu*,int) ;
 int FUNC_5 (struct cxl_afu*) ;
 int FUNC_6 (int *,char*,int) ;
 int FUNC_7 (int *,TYPE_3__*) ;
 int FUNC_8 (int *,struct device_attribute*) ;
 int FUNC_9 (int *,struct device_attribute*) ;
 int FUNC_10 (int *,int *) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 int FUNC_13 (TYPE_2__*) ;

int FUNC_14(struct cxl_afu *VAR_5)
{
 struct device_attribute *VAR_6;
 struct afu_config_record *VAR_7;
 int VAR_8, VAR_9;

 FUNC_1(&VAR_5->crs);

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_2); VAR_8++) {
  VAR_6 = &VAR_2[VAR_8];
  if (VAR_4->support_attributes(VAR_6->attr.name,
      VAR_0)) {
   if ((VAR_9 = FUNC_8(&VAR_5->dev, &VAR_2[VAR_8])))
    goto err;
  }
 }


 if (VAR_5->eb_len) {
  FUNC_13(&VAR_5->attr_eb.attr);

  VAR_5->attr_eb.attr.name = "afu_err_buff";
  VAR_5->attr_eb.attr.mode = VAR_1;
  VAR_5->attr_eb.size = VAR_5->eb_len;
  VAR_5->attr_eb.read = VAR_3;

  VAR_9 = FUNC_7(&VAR_5->dev, &VAR_5->attr_eb);
  if (VAR_9) {
   FUNC_6(&VAR_5->dev,
    "Unable to create eb attr for the afu. Err(%d)\n",
    VAR_9);
   goto err;
  }
 }

 for (VAR_8 = 0; VAR_8 < VAR_5->crs_num; VAR_8++) {
  VAR_7 = FUNC_4(VAR_5, VAR_8);
  if (FUNC_2(VAR_7)) {
   VAR_9 = FUNC_3(VAR_7);
   goto err1;
  }
  FUNC_10(&VAR_7->list, &VAR_5->crs);
 }

 return 0;

err1:
 FUNC_5(VAR_5);
 return VAR_9;
err:

 VAR_5->eb_len = 0;

 for (VAR_8--; VAR_8 >= 0; VAR_8--) {
  VAR_6 = &VAR_2[VAR_8];
  if (VAR_4->support_attributes(VAR_6->attr.name,
      VAR_0))
  FUNC_9(&VAR_5->dev, &VAR_2[VAR_8]);
 }
 return VAR_9;
}
