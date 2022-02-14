
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_item {int dummy; } ;
struct o2hb_region {scalar_t__ hr_region_num; int hr_handler_list; struct config_item hr_item; int hr_key; int hr_all_item; } ;
struct o2hb_nego_msg {int dummy; } ;
struct config_group {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct config_item* FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (struct config_item*,char const*,int *) ;
 int FUNC_3 (scalar_t__,char const*,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (struct o2hb_region*) ;
 struct o2hb_region* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (struct o2hb_region*,int ) ;
 scalar_t__ FUNC_9 () ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_10 (int ,int ,int,int ,struct o2hb_region*,int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (scalar_t__,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (char const*) ;

__attribute__((used)) static struct config_item *FUNC_16(struct config_group *VAR_15,
         const char *VAR_16)
{
 struct o2hb_region *VAR_17 = ((void*)0);
 int VAR_18;

 VAR_17 = FUNC_6(sizeof(struct o2hb_region), VAR_3);
 if (VAR_17 == ((void*)0))
  return FUNC_0(-VAR_2);

 if (FUNC_15(VAR_16) > VAR_4) {
  VAR_18 = -VAR_1;
  goto free;
 }

 FUNC_13(&VAR_10);
 VAR_17->hr_region_num = 0;
 if (FUNC_9()) {
  VAR_17->hr_region_num = FUNC_4(VAR_13,
        VAR_7);
  if (VAR_17->hr_region_num >= VAR_7) {
   FUNC_14(&VAR_10);
   VAR_18 = -VAR_0;
   goto free;
  }
  FUNC_12(VAR_17->hr_region_num, VAR_13);
 }
 FUNC_7(&VAR_17->hr_all_item, &VAR_8);
 FUNC_14(&VAR_10);

 FUNC_2(&VAR_17->hr_item, VAR_16, &VAR_14);





 VAR_17->hr_key = FUNC_3(VAR_17->hr_region_num + VAR_7,
  VAR_16, FUNC_15(VAR_16));
 FUNC_1(&VAR_17->hr_handler_list);
 VAR_18 = FUNC_10(VAR_6, VAR_17->hr_key,
   sizeof(struct o2hb_nego_msg),
   VAR_12,
   VAR_17, ((void*)0), &VAR_17->hr_handler_list);
 if (VAR_18)
  goto free;

 VAR_18 = FUNC_10(VAR_5, VAR_17->hr_key,
   sizeof(struct o2hb_nego_msg),
   VAR_11,
   VAR_17, ((void*)0), &VAR_17->hr_handler_list);
 if (VAR_18)
  goto unregister_handler;

 FUNC_8(VAR_17, VAR_9);

 return &VAR_17->hr_item;

unregister_handler:
 FUNC_11(&VAR_17->hr_handler_list);
free:
 FUNC_5(VAR_17);
 return FUNC_0(VAR_18);
}
