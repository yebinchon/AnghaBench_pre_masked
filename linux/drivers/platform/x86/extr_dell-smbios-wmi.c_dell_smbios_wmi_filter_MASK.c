
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wmi_smbios_priv {int req_buf_size; struct wmi_ioctl_buffer* buf; int wdev; } ;
struct TYPE_2__ {int * input; int cmd_select; int cmd_class; } ;
struct wmi_ioctl_buffer {TYPE_1__ std; } ;
struct wmi_device {int dev; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,char*,int ,int ,int ) ;
 struct wmi_smbios_priv* FUNC_2 (int *) ;
 int FUNC_3 (struct wmi_ioctl_buffer*,struct wmi_ioctl_buffer*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static long FUNC_7(struct wmi_device *VAR_4, unsigned int VAR_5,
       struct wmi_ioctl_buffer *VAR_6)
{
 struct wmi_smbios_priv *VAR_7;
 int VAR_8 = 0;

 switch (VAR_5) {
 case 128:
  FUNC_4(&VAR_3);
  VAR_7 = FUNC_2(&VAR_4->dev);
  if (!VAR_7) {
   VAR_8 = -VAR_1;
   goto fail_smbios_cmd;
  }
  FUNC_3(VAR_7->buf, VAR_6, VAR_7->req_buf_size);
  if (FUNC_0(&VAR_4->dev, &VAR_7->buf->std)) {
   FUNC_1(&VAR_4->dev, "Invalid call %d/%d:%8x\n",
    VAR_7->buf->std.cmd_class,
    VAR_7->buf->std.cmd_select,
    VAR_7->buf->std.input[0]);
   VAR_8 = -VAR_0;
   goto fail_smbios_cmd;
  }
  VAR_8 = FUNC_6(VAR_7->wdev);
  if (VAR_8)
   goto fail_smbios_cmd;
  FUNC_3(VAR_6, VAR_7->buf, VAR_7->req_buf_size);
fail_smbios_cmd:
  FUNC_5(&VAR_3);
  break;
 default:
  VAR_8 = -VAR_2;
 }
 return VAR_8;
}
