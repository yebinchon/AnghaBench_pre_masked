
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl_fw_status {int dummy; } ;
struct wl1271 {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* convert_fw_status ) (struct wl1271*,void*,struct wl_fw_status*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct wl1271*,void*,struct wl_fw_status*) ;

__attribute__((used)) static inline void
FUNC_2(struct wl1271 *VAR_0, void *VAR_1,
       struct wl_fw_status *VAR_2)
{
 FUNC_0(!VAR_0->ops->convert_fw_status);

 VAR_0->ops->convert_fw_status(VAR_0, VAR_1, VAR_2);
}
