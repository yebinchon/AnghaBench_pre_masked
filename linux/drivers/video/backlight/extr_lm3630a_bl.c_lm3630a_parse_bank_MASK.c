
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct lm3630a_platform_data {char const* ledb_label; char const* leda_label; scalar_t__ leda_max_brt; scalar_t__ ledb_max_brt; scalar_t__ leda_init_brt; scalar_t__ ledb_init_brt; int ledb_ctrl; int leda_ctrl; } ;
struct fwnode_handle {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (struct fwnode_handle*,char*) ;
 int FUNC_2 (struct fwnode_handle*,char*,char const**) ;
 int FUNC_3 (struct fwnode_handle*,char*,scalar_t__*) ;
 int FUNC_4 (struct fwnode_handle*,int) ;

__attribute__((used)) static int FUNC_5(struct lm3630a_platform_data *VAR_10,
         struct fwnode_handle *VAR_11, int *VAR_12)
{
 int VAR_13, VAR_14;
 const char *VAR_15;
 u32 VAR_16, VAR_17;
 bool VAR_18;

 VAR_14 = FUNC_3(VAR_11, "reg", &VAR_16);
 if (VAR_14)
  return VAR_14;

 if (VAR_16 < VAR_1 || VAR_16 > VAR_2)
  return -VAR_0;

 VAR_13 = FUNC_4(VAR_11, FUNC_0(VAR_16));
 if (VAR_13 < 0)
  return VAR_13;

 if (*VAR_12 & VAR_13)
  return -VAR_0;

 *VAR_12 |= VAR_13;

 VAR_18 = FUNC_1(VAR_11,
        "ti,linear-mapping-mode");
 if (VAR_16) {
  if (VAR_13 & FUNC_0(VAR_8) ||
      !(VAR_13 & FUNC_0(VAR_9)))
   return -VAR_0;

  VAR_10->ledb_ctrl = VAR_18 ?
   VAR_6 :
   VAR_5;
 } else {
  if (!(VAR_13 & FUNC_0(VAR_8)))
   return -VAR_0;

  VAR_10->leda_ctrl = VAR_18 ?
   VAR_4 :
   VAR_3;

  if (VAR_13 & FUNC_0(VAR_9))
   VAR_10->ledb_ctrl = VAR_7;
 }

 VAR_14 = FUNC_2(VAR_11, "label", &VAR_15);
 if (!VAR_14) {
  if (VAR_16)
   VAR_10->ledb_label = VAR_15;
  else
   VAR_10->leda_label = VAR_15;
 }

 VAR_14 = FUNC_3(VAR_11, "default-brightness",
           &VAR_17);
 if (!VAR_14) {
  if (VAR_16)
   VAR_10->ledb_init_brt = VAR_17;
  else
   VAR_10->leda_init_brt = VAR_17;
 }

 VAR_14 = FUNC_3(VAR_11, "max-brightness", &VAR_17);
 if (!VAR_14) {
  if (VAR_16)
   VAR_10->ledb_max_brt = VAR_17;
  else
   VAR_10->leda_max_brt = VAR_17;
 }

 return 0;
}
