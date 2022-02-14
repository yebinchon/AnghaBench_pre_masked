
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct wmi_smbios_priv {int req_buf_size; TYPE_1__* buf; int wdev; } ;
struct calling_interface_buffer {int dummy; } ;
struct TYPE_2__ {struct calling_interface_buffer std; int ext; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct wmi_smbios_priv* FUNC_0 () ;
 int FUNC_1 (struct calling_interface_buffer*,struct calling_interface_buffer*,size_t) ;
 int FUNC_2 (int *,int ,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct calling_interface_buffer *VAR_2)
{
 struct wmi_smbios_priv *VAR_3;
 size_t VAR_4;
 size_t VAR_5;
 int VAR_6;

 FUNC_3(&VAR_1);
 VAR_3 = FUNC_0();
 if (!VAR_3) {
  VAR_6 = -VAR_0;
  goto out_wmi_call;
 }

 VAR_5 = sizeof(struct calling_interface_buffer);
 VAR_4 = VAR_3->req_buf_size - sizeof(u64) - VAR_5;

 FUNC_2(&VAR_3->buf->ext, 0, VAR_4);
 FUNC_1(&VAR_3->buf->std, VAR_2, VAR_5);
 VAR_6 = FUNC_5(VAR_3->wdev);
 FUNC_1(VAR_2, &VAR_3->buf->std, VAR_5);
out_wmi_call:
 FUNC_4(&VAR_1);

 return VAR_6;
}
