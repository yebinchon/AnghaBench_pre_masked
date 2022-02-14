
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
struct wlcore_platdev_data {TYPE_1__* family; } ;
struct TYPE_9__ {scalar_t__ dual_mode_select; } ;
struct wl128x_nvs_file {scalar_t__ nvs; TYPE_3__ general_params; } ;
struct TYPE_8__ {scalar_t__ dual_mode_select; } ;
struct wl1271_nvs_file {scalar_t__ nvs; TYPE_2__ general_params; } ;
struct TYPE_11__ {scalar_t__ start; } ;
struct TYPE_12__ {TYPE_5__ reg; } ;
struct wl1271 {size_t* nvs; int quirks; int nvs_len; int enable_11a; int * ptable; TYPE_6__ curr_part; TYPE_4__* addresses; struct platform_device* pdev; } ;
struct platform_device {int dev; } ;
struct TYPE_10__ {size_t* addr; } ;
struct TYPE_7__ {char* nvs_name; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct wlcore_platdev_data* FUNC_1 (int *) ;
 int FUNC_2 (size_t*) ;
 size_t* FUNC_3 (size_t*,size_t,int ) ;
 int FUNC_4 (int ,char*,size_t,size_t) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct wl1271*,int *) ;
 int FUNC_7 (struct wl1271*,size_t,size_t) ;
 int FUNC_8 (struct wl1271*,int ,size_t*,size_t,int) ;

int FUNC_9(struct wl1271 *VAR_9)
{
 struct platform_device *VAR_10 = VAR_9->pdev;
 struct wlcore_platdev_data *VAR_11 = FUNC_1(&VAR_10->dev);
 const char *VAR_12 = "unknown";
 size_t VAR_13, VAR_14;
 int VAR_15;
 u32 VAR_16, VAR_17;
 u8 *VAR_18, *VAR_19;
 int VAR_20;

 if (VAR_9->nvs == ((void*)0)) {
  FUNC_5("NVS file is needed during boot");
  return -VAR_2;
 }

 if (VAR_11 && VAR_11->family)
  VAR_12 = VAR_11->family->nvs_name;

 if (VAR_9->quirks & VAR_8) {
  struct wl1271_nvs_file *VAR_21 =
   (struct wl1271_nvs_file *)VAR_9->nvs;





  if (VAR_9->nvs_len == sizeof(struct wl1271_nvs_file) ||
      VAR_9->nvs_len == VAR_7) {
   if (VAR_21->general_params.dual_mode_select)
    VAR_9->enable_11a = 1;
  }

  if (VAR_9->nvs_len != sizeof(struct wl1271_nvs_file) &&
      (VAR_9->nvs_len != VAR_7 ||
       VAR_9->enable_11a)) {
   FUNC_5("%s size is not as expected: %zu != %zu",
         VAR_12, VAR_9->nvs_len,
         sizeof(struct wl1271_nvs_file));
   FUNC_2(VAR_9->nvs);
   VAR_9->nvs = ((void*)0);
   VAR_9->nvs_len = 0;
   return -VAR_1;
  }


  VAR_13 = sizeof(VAR_21->nvs);
  VAR_18 = (u8 *) VAR_21->nvs;
 } else {
  struct wl128x_nvs_file *VAR_22 = (struct wl128x_nvs_file *)VAR_9->nvs;

  if (VAR_9->nvs_len == sizeof(struct wl128x_nvs_file)) {
   if (VAR_22->general_params.dual_mode_select)
    VAR_9->enable_11a = 1;
  } else {
   FUNC_5("%s size is not as expected: %zu != %zu",
         VAR_12, VAR_9->nvs_len,
         sizeof(struct wl128x_nvs_file));
   FUNC_2(VAR_9->nvs);
   VAR_9->nvs = ((void*)0);
   VAR_9->nvs_len = 0;
   return -VAR_1;
  }


  VAR_13 = sizeof(VAR_22->nvs);
  VAR_18 = (u8 *)VAR_22->nvs;
 }


 VAR_18[11] = VAR_9->addresses[0].addr[0];
 VAR_18[10] = VAR_9->addresses[0].addr[1];
 VAR_18[6] = VAR_9->addresses[0].addr[2];
 VAR_18[5] = VAR_9->addresses[0].addr[3];
 VAR_18[4] = VAR_9->addresses[0].addr[4];
 VAR_18[3] = VAR_9->addresses[0].addr[5];
 while (VAR_18[0]) {
  VAR_14 = VAR_18[0];
  VAR_16 = (VAR_18[1] & 0xfe) | ((u32)(VAR_18[2] << 8));






  VAR_16 += VAR_9->curr_part.reg.start;


  VAR_18 += 3;

  for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++) {
   if (VAR_18 + 3 >= (u8 *) VAR_9->nvs + VAR_13)
    goto out_badnvs;

   VAR_17 = (VAR_18[0] | (VAR_18[1] << 8)
          | (VAR_18[2] << 16) | (VAR_18[3] << 24));

   FUNC_4(VAR_0,
         "nvs burst write 0x%x: 0x%x",
         VAR_16, VAR_17);
   VAR_20 = FUNC_7(VAR_9, VAR_16, VAR_17);
   if (VAR_20 < 0)
    return VAR_20;

   VAR_18 += 4;
   VAR_16 += 4;
  }

  if (VAR_18 >= (u8 *) VAR_9->nvs + VAR_13)
   goto out_badnvs;
 }
 VAR_18 = (u8 *)VAR_9->nvs +
   FUNC_0(VAR_18 - (u8 *)VAR_9->nvs + 7, 4);

 if (VAR_18 >= (u8 *) VAR_9->nvs + VAR_13)
  goto out_badnvs;

 VAR_13 -= VAR_18 - (u8 *)VAR_9->nvs;


 VAR_20 = FUNC_6(VAR_9, &VAR_9->ptable[VAR_5]);
 if (VAR_20 < 0)
  return VAR_20;


 VAR_19 = FUNC_3(VAR_18, VAR_13, VAR_4);
 if (!VAR_19)
  return -VAR_3;


 VAR_20 = FUNC_8(VAR_9, VAR_6, VAR_19, VAR_13,
    0);

 FUNC_2(VAR_19);
 return VAR_20;

out_badnvs:
 FUNC_5("nvs data is malformed");
 return -VAR_1;
}
