
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmmdev_guest_info2 {int name; int additions_features; int additions_revision; int additions_build; int additions_minor; int additions_major; int os_type; int interface_version; } ;
struct vmmdev_guest_info {int name; int additions_features; int additions_revision; int additions_build; int additions_minor; int additions_major; int os_type; int interface_version; } ;
struct vbg_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ,int ,int) ;
 struct vmmdev_guest_info2* FUNC_1 (int,int ,int ) ;
 int FUNC_2 (struct vmmdev_guest_info2*,int) ;
 int FUNC_3 (struct vbg_dev*,struct vmmdev_guest_info2*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct vbg_dev *VAR_16)
{



 struct vmmdev_guest_info *VAR_17 = ((void*)0);
 struct vmmdev_guest_info2 *VAR_18 = ((void*)0);
 int VAR_19, VAR_20 = -VAR_0;

 VAR_17 = FUNC_1(sizeof(*VAR_17), VAR_10,
        VAR_1);
 VAR_18 = FUNC_1(sizeof(*VAR_18), VAR_11,
        VAR_1);
 if (!VAR_17 || !VAR_18)
  goto out_free;

 VAR_17->interface_version = VAR_15;
 VAR_17->os_type = VAR_13;




 VAR_18->additions_major = VAR_4;
 VAR_18->additions_minor = VAR_5;
 VAR_18->additions_build = VAR_3;
 VAR_18->additions_revision = VAR_2;
 VAR_18->additions_features =
  VAR_12;
 FUNC_0(VAR_18->name, VAR_6,
  sizeof(VAR_18->name));
 VAR_19 = FUNC_3(VAR_16, VAR_18);
 if (VAR_19 >= 0) {
  VAR_19 = FUNC_3(VAR_16, VAR_17);
 } else if (VAR_19 == VAR_8 || VAR_19 == VAR_7) {
  VAR_19 = FUNC_3(VAR_16, VAR_17);
  if (VAR_19 >= 0) {
   VAR_19 = FUNC_3(VAR_16, VAR_18);
   if (VAR_19 == VAR_7)
    VAR_19 = VAR_9;
  }
 }
 VAR_20 = FUNC_4(VAR_19);

out_free:
 FUNC_2(VAR_18, sizeof(*VAR_18));
 FUNC_2(VAR_17, sizeof(*VAR_17));
 return VAR_20;
}
