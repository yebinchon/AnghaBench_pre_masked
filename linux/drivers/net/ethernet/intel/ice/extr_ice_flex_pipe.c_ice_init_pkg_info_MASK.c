
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ice_pkg_hdr {int dummy; } ;
struct TYPE_4__ {int draft; int update; int minor; int major; } ;
struct TYPE_3__ {int draft; int update; int minor; int major; } ;
struct ice_hw {int ice_pkg_name; TYPE_2__ ice_pkg_ver; int pkg_name; TYPE_1__ pkg_ver; } ;
struct ice_global_metadata_seg {int pkg_name; TYPE_1__ pkg_ver; } ;
struct ice_generic_seg_hdr {int seg_name; TYPE_2__ seg_ver; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ice_hw*,int ,char*,...) ;
 struct ice_generic_seg_hdr* FUNC_1 (struct ice_hw*,int ,struct ice_pkg_hdr*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static enum ice_status
FUNC_3(struct ice_hw *VAR_6, struct ice_pkg_hdr *VAR_7)
{
 struct ice_global_metadata_seg *VAR_8;
 struct ice_generic_seg_hdr *VAR_9;

 if (!VAR_7)
  return VAR_3;

 VAR_8 = (struct ice_global_metadata_seg *)
     FUNC_1(VAR_6, VAR_5, VAR_7);
 if (VAR_8) {
  VAR_6->pkg_ver = VAR_8->pkg_ver;
  FUNC_2(VAR_6->pkg_name, VAR_8->pkg_name, sizeof(VAR_6->pkg_name));

  FUNC_0(VAR_6, VAR_1, "Pkg: %d.%d.%d.%d, %s\n",
     VAR_8->pkg_ver.major, VAR_8->pkg_ver.minor,
     VAR_8->pkg_ver.update, VAR_8->pkg_ver.draft,
     VAR_8->pkg_name);
 } else {
  FUNC_0(VAR_6, VAR_0,
     "Did not find metadata segment in driver package\n");
  return VAR_2;
 }

 VAR_9 = FUNC_1(VAR_6, VAR_4, VAR_7);
 if (VAR_9) {
  VAR_6->ice_pkg_ver = VAR_9->seg_ver;
  FUNC_2(VAR_6->ice_pkg_name, VAR_9->seg_name,
         sizeof(VAR_6->ice_pkg_name));

  FUNC_0(VAR_6, VAR_1, "Ice Pkg: %d.%d.%d.%d, %s\n",
     VAR_9->seg_ver.major, VAR_9->seg_ver.minor,
     VAR_9->seg_ver.update, VAR_9->seg_ver.draft,
     VAR_9->seg_name);
 } else {
  FUNC_0(VAR_6, VAR_0,
     "Did not find ice segment in driver package\n");
  return VAR_2;
 }

 return 0;
}
