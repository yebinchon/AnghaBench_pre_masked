
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {int dummy; } ;
struct net_device {int name; } ;
struct airo_info {int proc_name; struct proc_dir_entry* proc_entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct proc_dir_entry* FUNC_0 (char*,int,struct proc_dir_entry*,int *,struct net_device*) ;
 int VAR_7 ;
 int VAR_8 ;
 struct proc_dir_entry* FUNC_1 (int ,int ,int ) ;
 int VAR_9 ;
 int FUNC_2 (struct proc_dir_entry*,int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5( struct net_device *VAR_14,
        struct airo_info *VAR_15 ) {
 struct proc_dir_entry *VAR_16;


 FUNC_4(VAR_15->proc_name,VAR_14->name);
 VAR_15->proc_entry = FUNC_1(VAR_15->proc_name, VAR_2,
         VAR_1);
 if (!VAR_15->proc_entry)
  return -VAR_0;
 FUNC_2(VAR_15->proc_entry, VAR_8, VAR_7);


 VAR_16 = FUNC_0("StatsDelta", 0444 & VAR_9,
     VAR_15->proc_entry, &VAR_11, VAR_14);
 if (!VAR_16)
  goto fail;
 FUNC_2(VAR_16, VAR_8, VAR_7);


 VAR_16 = FUNC_0("Stats", 0444 & VAR_9,
     VAR_15->proc_entry, &VAR_10, VAR_14);
 if (!VAR_16)
  goto fail;
 FUNC_2(VAR_16, VAR_8, VAR_7);


 VAR_16 = FUNC_0("Status", 0444 & VAR_9,
     VAR_15->proc_entry, &VAR_12, VAR_14);
 if (!VAR_16)
  goto fail;
 FUNC_2(VAR_16, VAR_8, VAR_7);


 VAR_16 = FUNC_0("Config", VAR_9,
     VAR_15->proc_entry, &VAR_6, VAR_14);
 if (!VAR_16)
  goto fail;
 FUNC_2(VAR_16, VAR_8, VAR_7);


 VAR_16 = FUNC_0("SSID", VAR_9,
     VAR_15->proc_entry, &VAR_5, VAR_14);
 if (!VAR_16)
  goto fail;
 FUNC_2(VAR_16, VAR_8, VAR_7);


 VAR_16 = FUNC_0("APList", VAR_9,
     VAR_15->proc_entry, &VAR_3, VAR_14);
 if (!VAR_16)
  goto fail;
 FUNC_2(VAR_16, VAR_8, VAR_7);


 VAR_16 = FUNC_0("BSSList", VAR_9,
     VAR_15->proc_entry, &VAR_4, VAR_14);
 if (!VAR_16)
  goto fail;
 FUNC_2(VAR_16, VAR_8, VAR_7);


 VAR_16 = FUNC_0("WepKey", VAR_9,
     VAR_15->proc_entry, &VAR_13, VAR_14);
 if (!VAR_16)
  goto fail;
 FUNC_2(VAR_16, VAR_8, VAR_7);
 return 0;

fail:
 FUNC_3(VAR_15->proc_name, VAR_1);
 return -VAR_0;
}
