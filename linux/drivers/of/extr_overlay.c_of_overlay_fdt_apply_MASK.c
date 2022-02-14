
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fdt_header {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void const*) ;
 int FUNC_1 (void const*) ;
 int FUNC_2 (void const*) ;
 void* FUNC_3 (void const*,int,int ) ;
 int FUNC_4 (void const*,int *,struct device_node**) ;
 int FUNC_5 (void const*,struct device_node*,int*) ;
 int FUNC_6 (char*) ;

int FUNC_7(const void *VAR_3, u32 VAR_4,
    int *VAR_5)
{
 const void *VAR_6;
 int VAR_7;
 u32 VAR_8;
 struct device_node *VAR_9;

 *VAR_5 = 0;
 VAR_7 = 0;

 if (VAR_4 < sizeof(struct fdt_header) ||
     FUNC_0(VAR_3)) {
  FUNC_6("Invalid overlay_fdt header\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_1(VAR_3);
 if (VAR_4 < VAR_8)
  return -VAR_0;





 VAR_6 = FUNC_3(VAR_3, VAR_8, VAR_2);
 if (!VAR_6)
  return -VAR_1;

 FUNC_4(VAR_6, ((void*)0), &VAR_9);
 if (!VAR_9) {
  FUNC_6("unable to unflatten overlay_fdt\n");
  VAR_7 = -VAR_0;
  goto out_free_new_fdt;
 }

 VAR_7 = FUNC_5(VAR_6, VAR_9, VAR_5);
 if (VAR_7 < 0) {





  goto out;
 }

 return 0;


out_free_new_fdt:
 FUNC_2(VAR_6);

out:
 return VAR_7;
}
