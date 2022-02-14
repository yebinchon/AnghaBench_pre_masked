
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wusbhc {int dummy; } ;
struct whc {int mutex; int n_devices; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct whc*,int ,int ,void const*,size_t,int) ;
 struct whc* FUNC_3 (struct wusbhc*) ;

int FUNC_4(struct wusbhc *VAR_0, u32 VAR_1,
  const void *VAR_2, size_t VAR_3)
{
 struct whc *VAR_4 = FUNC_3(VAR_0);
 int VAR_5;

 FUNC_0(&VAR_4->mutex);

 VAR_5 = FUNC_2(VAR_4, VAR_4->n_devices, VAR_1, VAR_2, VAR_3, 1);

 FUNC_1(&VAR_4->mutex);

 return VAR_5;
}
