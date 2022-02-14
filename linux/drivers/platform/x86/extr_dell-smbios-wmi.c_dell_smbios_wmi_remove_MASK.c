
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_smbios_priv {scalar_t__ buf; int req_buf_size; int list; } ;
struct wmi_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct wmi_smbios_priv* FUNC_1 (int *) ;
 int FUNC_2 (unsigned long,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct wmi_device *VAR_2)
{
 struct wmi_smbios_priv *VAR_3 = FUNC_1(&VAR_2->dev);
 int VAR_4;

 FUNC_5(&VAR_0);
 FUNC_5(&VAR_1);
 FUNC_4(&VAR_3->list);
 FUNC_6(&VAR_1);
 FUNC_0(&VAR_2->dev);
 VAR_4 = FUNC_3(VAR_3->req_buf_size);
 FUNC_2((unsigned long)VAR_3->buf, VAR_4);
 FUNC_6(&VAR_0);
 return 0;
}
