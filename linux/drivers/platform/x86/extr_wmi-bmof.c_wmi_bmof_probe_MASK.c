
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int kobj; } ;
struct wmi_device {TYPE_7__ dev; } ;
struct TYPE_10__ {char* name; int mode; } ;
struct TYPE_13__ {int size; int read; TYPE_1__ attr; } ;
struct bmof_priv {TYPE_3__* bmofdata; TYPE_4__ bmof_bin_attr; } ;
struct TYPE_11__ {int length; } ;
struct TYPE_12__ {scalar_t__ type; TYPE_2__ buffer; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_7__*,char*) ;
 int FUNC_1 (TYPE_7__*,struct bmof_priv*) ;
 struct bmof_priv* FUNC_2 (TYPE_7__*,int,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_4 ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int *,TYPE_4__*) ;
 TYPE_3__* FUNC_6 (struct wmi_device*,int ) ;

__attribute__((used)) static int FUNC_7(struct wmi_device *VAR_5, const void *VAR_6)
{
 struct bmof_priv *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(&VAR_5->dev, sizeof(struct bmof_priv), VAR_3);
 if (!VAR_7)
  return -VAR_2;

 FUNC_1(&VAR_5->dev, VAR_7);

 VAR_7->bmofdata = FUNC_6(VAR_5, 0);
 if (!VAR_7->bmofdata) {
  FUNC_0(&VAR_5->dev, "failed to read Binary MOF\n");
  return -VAR_1;
 }

 if (VAR_7->bmofdata->type != VAR_0) {
  FUNC_0(&VAR_5->dev, "Binary MOF is not a buffer\n");
  VAR_8 = -VAR_1;
  goto err_free;
 }

 FUNC_4(&VAR_7->bmof_bin_attr);
 VAR_7->bmof_bin_attr.attr.name = "bmof";
 VAR_7->bmof_bin_attr.attr.mode = 0400;
 VAR_7->bmof_bin_attr.read = VAR_4;
 VAR_7->bmof_bin_attr.size = VAR_7->bmofdata->buffer.length;

 VAR_8 = FUNC_5(&VAR_5->dev.kobj, &VAR_7->bmof_bin_attr);
 if (VAR_8)
  goto err_free;

 return 0;

 err_free:
 FUNC_3(VAR_7->bmofdata);
 return VAR_8;
}
