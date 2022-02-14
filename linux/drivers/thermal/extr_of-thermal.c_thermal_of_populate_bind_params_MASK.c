
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct thermal_trip {struct device_node* np; } ;
struct of_phandle_args {int args_count; int * args; struct device_node* np; } ;
struct device_node {int dummy; } ;
struct __thermal_cooling_bind_param {struct device_node* cooling_device; int max; int min; } ;
struct __thermal_bind_params {int trip_id; int count; struct __thermal_cooling_bind_param* tcbp; int usage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct __thermal_cooling_bind_param* FUNC_0 (int,int,int ) ;
 int FUNC_1 (struct __thermal_cooling_bind_param*) ;
 int FUNC_2 (struct device_node*,char*,char*) ;
 int FUNC_3 (struct device_node*) ;
 struct device_node* FUNC_4 (struct device_node*,char*,int ) ;
 int FUNC_5 (struct device_node*,char*,char*,int,struct of_phandle_args*) ;
 int FUNC_6 (struct device_node*,char*,int *) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(struct device_node *VAR_3,
        struct __thermal_bind_params *VAR_4,
        struct thermal_trip *VAR_5,
        int VAR_6)
{
 struct of_phandle_args VAR_7;
 struct __thermal_cooling_bind_param *VAR_8;
 struct device_node *VAR_9;
 int VAR_10, VAR_11, VAR_12;
 u32 VAR_13;


 VAR_4->usage = VAR_2;
 VAR_10 = FUNC_6(VAR_3, "contribution", &VAR_13);
 if (VAR_10 == 0)
  VAR_4->usage = VAR_13;

 VAR_9 = FUNC_4(VAR_3, "trip", 0);
 if (!VAR_9) {
  FUNC_7("missing trip property\n");
  return -VAR_0;
 }


 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++)
  if (VAR_9 == VAR_5[VAR_11].np) {
   VAR_4->trip_id = VAR_11;
   break;
  }

 if (VAR_11 == VAR_6) {
  VAR_10 = -VAR_0;
  goto end;
 }

 VAR_12 = FUNC_2(VAR_3, "cooling-device",
        "#cooling-cells");
 if (!VAR_12) {
  FUNC_7("Add a cooling_device property with at least one device\n");
  goto end;
 }

 VAR_8 = FUNC_0(VAR_12, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  goto end;

 for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
  VAR_10 = FUNC_5(VAR_3, "cooling-device",
    "#cooling-cells", VAR_11, &VAR_7);
  if (VAR_10 < 0) {
   FUNC_7("Invalid cooling-device entry\n");
   goto free_tcbp;
  }

  VAR_8[VAR_11].cooling_device = VAR_7.np;

  if (VAR_7.args_count >= 2) {
   VAR_8[VAR_11].min = VAR_7.args[0];
   VAR_8[VAR_11].max = VAR_7.args[1];
  } else {
   FUNC_7("wrong reference to cooling device, missing limits\n");
  }
 }

 VAR_4->tcbp = VAR_8;
 VAR_4->count = VAR_12;

 goto end;

free_tcbp:
 for (VAR_11 = VAR_11 - 1; VAR_11 >= 0; VAR_11--)
  FUNC_3(VAR_8[VAR_11].cooling_device);
 FUNC_1(VAR_8);
end:
 FUNC_3(VAR_9);

 return VAR_10;
}
