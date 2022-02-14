
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct ice_sq_cd {int dummy; } ;
struct ice_hw {int dummy; } ;
struct ice_buf_hdr {int dummy; } ;
struct ice_aqc_download_pkg_resp {int error_info; int error_offset; } ;
struct ice_aqc_download_pkg {int flags; } ;
struct TYPE_2__ {struct ice_aqc_download_pkg download_pkg; } ;
struct ice_aq_desc {int flags; TYPE_1__ params; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ice_hw*,struct ice_aq_desc*,struct ice_buf_hdr*,int ,struct ice_sq_cd*) ;
 int VAR_3 ;
 int FUNC_2 (struct ice_aq_desc*,int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static enum ice_status
FUNC_4(struct ice_hw *VAR_4, struct ice_buf_hdr *VAR_5,
      u16 VAR_6, bool VAR_7, u32 *VAR_8,
      u32 *VAR_9, struct ice_sq_cd *VAR_10)
{
 struct ice_aqc_download_pkg *VAR_11;
 struct ice_aq_desc VAR_12;
 enum ice_status VAR_13;

 if (VAR_8)
  *VAR_8 = 0;
 if (VAR_9)
  *VAR_9 = 0;

 VAR_11 = &VAR_12.params.download_pkg;
 FUNC_2(&VAR_12, VAR_3);
 VAR_12.flags |= FUNC_0(VAR_1);

 if (VAR_7)
  VAR_11->flags |= VAR_0;

 VAR_13 = FUNC_1(VAR_4, &VAR_12, VAR_5, VAR_6, VAR_10);
 if (VAR_13 == VAR_2) {

  struct ice_aqc_download_pkg_resp *VAR_14;

  VAR_14 = (struct ice_aqc_download_pkg_resp *)VAR_5;
  if (VAR_8)
   *VAR_8 = FUNC_3(VAR_14->error_offset);
  if (VAR_9)
   *VAR_9 = FUNC_3(VAR_14->error_info);
 }

 return VAR_13;
}
