
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ice_seg {int dummy; } ;
struct ice_pkg_hdr {int dummy; } ;
struct ice_hw {struct ice_seg* seg; int active_pkg_ver; int pkg_ver; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ice_hw*,int ,char*,...) ;
 int FUNC_2 (struct ice_hw*,struct ice_seg*) ;
 int FUNC_3 (struct ice_hw*) ;
 scalar_t__ FUNC_4 (struct ice_hw*,int ,struct ice_pkg_hdr*) ;
 int FUNC_5 (struct ice_hw*) ;
 int FUNC_6 (struct ice_hw*,struct ice_pkg_hdr*) ;
 int FUNC_7 (struct ice_hw*) ;
 int FUNC_8 (struct ice_pkg_hdr*,int ) ;

enum ice_status FUNC_9(struct ice_hw *VAR_5, u8 *VAR_6, u32 VAR_7)
{
 struct ice_pkg_hdr *VAR_8;
 enum ice_status VAR_9;
 struct ice_seg *VAR_10;

 if (!VAR_6 || !VAR_7)
  return VAR_3;

 VAR_8 = (struct ice_pkg_hdr *)VAR_6;
 VAR_9 = FUNC_8(VAR_8, VAR_7);
 if (VAR_9) {
  FUNC_1(VAR_5, VAR_0, "failed to verify pkg (err: %d)\n",
     VAR_9);
  return VAR_9;
 }


 VAR_9 = FUNC_6(VAR_5, VAR_8);
 if (VAR_9)
  return VAR_9;




 VAR_9 = FUNC_0(&VAR_5->pkg_ver);
 if (VAR_9)
  return VAR_9;


 VAR_10 = (struct ice_seg *)FUNC_4(VAR_5, VAR_4, VAR_8);
 if (!VAR_10) {
  FUNC_1(VAR_5, VAR_0, "no ice segment in package.\n");
  return VAR_2;
 }


 VAR_9 = FUNC_2(VAR_5, VAR_10);
 if (VAR_9 == VAR_1) {
  FUNC_1(VAR_5, VAR_0,
     "package previously loaded - no work.\n");
  VAR_9 = 0;
 }




 if (!VAR_9) {
  VAR_9 = FUNC_5(VAR_5);
  if (!VAR_9)
   VAR_9 = FUNC_0(&VAR_5->active_pkg_ver);
 }

 if (!VAR_9) {
  VAR_5->seg = VAR_10;




  FUNC_7(VAR_5);
  FUNC_3(VAR_5);
 } else {
  FUNC_1(VAR_5, VAR_0, "package load failed, %d\n",
     VAR_9);
 }

 return VAR_9;
}
