
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1271_static_data {int dummy; } ;
struct wl1271 {int static_data_priv_len; int cmd_box_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wl1271_static_data*) ;
 struct wl1271_static_data* FUNC_1 (size_t,int ) ;
 int FUNC_2 (struct wl1271*,struct wl1271_static_data*) ;
 int FUNC_3 (struct wl1271*,struct wl1271_static_data*) ;
 int FUNC_4 (struct wl1271*,int ,struct wl1271_static_data*,size_t,int) ;
 int FUNC_5 (struct wl1271*) ;

__attribute__((used)) static int FUNC_6(struct wl1271 *VAR_2)
{
 struct wl1271_static_data *VAR_3;
 size_t VAR_4 = sizeof(*VAR_3) + VAR_2->static_data_priv_len;
 int VAR_5;

 VAR_3 = FUNC_1(VAR_4, VAR_1);
 if (!VAR_3) {
  VAR_5 = -VAR_0;
  goto out;
 }

 VAR_5 = FUNC_4(VAR_2, VAR_2->cmd_box_addr, VAR_3, VAR_4, 0);
 if (VAR_5 < 0)
  goto out_free;

 VAR_5 = FUNC_2(VAR_2, VAR_3);
 if (VAR_5 < 0)
  goto out_free;

 VAR_5 = FUNC_5(VAR_2);
 if (VAR_5 < 0)
  goto out_free;

 VAR_5 = FUNC_3(VAR_2, VAR_3);
 if (VAR_5 < 0)
  goto out_free;

out_free:
 FUNC_0(VAR_3);
out:
 return VAR_5;
}
