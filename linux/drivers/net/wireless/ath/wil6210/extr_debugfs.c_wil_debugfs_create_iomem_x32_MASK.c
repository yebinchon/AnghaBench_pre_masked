
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct wil_debugfs_iomem_data {void* offset; struct wil6210_priv* wil; } ;
struct TYPE_2__ {size_t iomem_data_count; struct wil_debugfs_iomem_data* data_arr; } ;
struct wil6210_priv {TYPE_1__ dbg_data; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (char const*,int ,struct dentry*,struct wil_debugfs_iomem_data*,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(const char *VAR_1, umode_t VAR_2,
      struct dentry *VAR_3, void *VAR_4,
      struct wil6210_priv *VAR_5)
{
 struct wil_debugfs_iomem_data *VAR_6 = &VAR_5->dbg_data.data_arr[
           VAR_5->dbg_data.iomem_data_count];

 VAR_6->wil = VAR_5;
 VAR_6->offset = VAR_4;

 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_6, &VAR_0);
 VAR_5->dbg_data.iomem_data_count++;
}
