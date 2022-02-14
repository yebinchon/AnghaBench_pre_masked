
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1251 {int * data_path; } ;
struct acx_data_path_params_resp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1251*,int *) ;

__attribute__((used)) static int FUNC_3(struct wl1251 *VAR_2)
{
 int VAR_3;


 VAR_2->data_path = FUNC_1(sizeof(struct acx_data_path_params_resp),
    VAR_1);
 if (!VAR_2->data_path)
  return -VAR_0;

 VAR_3 = FUNC_2(VAR_2, VAR_2->data_path);
 if (VAR_3 < 0) {
  FUNC_0(VAR_2->data_path);
  VAR_2->data_path = ((void*)0);
  return VAR_3;
 }

 return 0;
}
