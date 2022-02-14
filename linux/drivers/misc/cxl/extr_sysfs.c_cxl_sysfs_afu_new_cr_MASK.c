
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int kobj; } ;
struct cxl_afu {TYPE_2__ dev; int crs_len; } ;
struct TYPE_7__ {char* name; int mode; } ;
struct TYPE_9__ {int read; int size; TYPE_1__ attr; } ;
struct afu_config_record {int cr; int class; int kobj; TYPE_3__ config_attr; int vendor; int device; } ;
struct TYPE_10__ {int (* afu_cr_read16 ) (struct cxl_afu*,int,int ,int *) ;int (* afu_cr_read32 ) (struct cxl_afu*,int,int ,int*) ;} ;


 int VAR_0 ;
 struct afu_config_record* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_6__* VAR_9 ;
 int FUNC_1 (struct afu_config_record*) ;
 int FUNC_2 (int *,int *,int *,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 struct afu_config_record* FUNC_5 (int,int ) ;
 int FUNC_6 (struct cxl_afu*,int,int ,int *) ;
 int FUNC_7 (struct cxl_afu*,int,int ,int *) ;
 int FUNC_8 (struct cxl_afu*,int,int ,int*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (int *,TYPE_3__*) ;
 int FUNC_11 (int *,TYPE_3__*) ;

__attribute__((used)) static struct afu_config_record *FUNC_12(struct cxl_afu *VAR_10, int VAR_11)
{
 struct afu_config_record *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_5(sizeof(struct afu_config_record), VAR_1);
 if (!VAR_12)
  return FUNC_0(-VAR_0);

 VAR_12->cr = VAR_11;

 VAR_13 = VAR_9->afu_cr_read16(VAR_10, VAR_11, VAR_4, &VAR_12->device);
 if (VAR_13)
  goto err;
 VAR_13 = VAR_9->afu_cr_read16(VAR_10, VAR_11, VAR_5, &VAR_12->vendor);
 if (VAR_13)
  goto err;
 VAR_13 = VAR_9->afu_cr_read32(VAR_10, VAR_11, VAR_3, &VAR_12->class);
 if (VAR_13)
  goto err;
 VAR_12->class >>= 8;
 FUNC_9(&VAR_12->config_attr);
 VAR_12->config_attr.attr.name = "config";
 VAR_12->config_attr.attr.mode = VAR_6;
 VAR_12->config_attr.size = VAR_10->crs_len;
 VAR_12->config_attr.read = VAR_8;

 VAR_13 = FUNC_2(&VAR_12->kobj, &VAR_7,
      &VAR_10->dev.kobj, "cr%i", VAR_12->cr);
 if (VAR_13)
  goto err;

 VAR_13 = FUNC_10(&VAR_12->kobj, &VAR_12->config_attr);
 if (VAR_13)
  goto err1;

 VAR_13 = FUNC_4(&VAR_12->kobj, VAR_2);
 if (VAR_13)
  goto err2;

 return VAR_12;
err2:
 FUNC_11(&VAR_12->kobj, &VAR_12->config_attr);
err1:
 FUNC_3(&VAR_12->kobj);
 return FUNC_0(VAR_13);
err:
 FUNC_1(VAR_12);
 return FUNC_0(VAR_13);
}
