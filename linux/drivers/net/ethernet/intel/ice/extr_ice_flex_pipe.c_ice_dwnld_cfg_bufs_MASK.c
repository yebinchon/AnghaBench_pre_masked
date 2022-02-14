
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {int sq_last_status; } ;
struct ice_hw {TYPE_2__ adminq; int pkg_dwnld_status; } ;
struct ice_buf_hdr {TYPE_1__* section_entry; int section_count; } ;
struct ice_buf {int dummy; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
struct TYPE_3__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ice_hw*,int ) ;
 int FUNC_1 (struct ice_hw*,struct ice_buf_hdr*,int ,int,scalar_t__*,scalar_t__*,int *) ;
 int FUNC_2 (struct ice_hw*,int ,char*,int,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct ice_hw*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static enum ice_status
FUNC_6(struct ice_hw *VAR_8, struct ice_buf *VAR_9, u32 VAR_10)
{
 enum ice_status VAR_11;
 struct ice_buf_hdr *VAR_12;
 u32 VAR_13, VAR_14, VAR_15;

 if (!VAR_9 || !VAR_10)
  return VAR_4;





 VAR_12 = (struct ice_buf_hdr *)VAR_9;
 if (FUNC_5(VAR_12->section_entry[0].type) & VAR_5)
  return 0;




 VAR_8->pkg_dwnld_status = VAR_1;

 VAR_11 = FUNC_0(VAR_8, VAR_7);
 if (VAR_11) {
  if (VAR_11 == VAR_3)
   VAR_8->pkg_dwnld_status = VAR_0;
  else
   VAR_8->pkg_dwnld_status = VAR_8->adminq.sq_last_status;
  return VAR_11;
 }

 for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15++) {
  bool VAR_16 = ((VAR_15 + 1) == VAR_10);

  if (!VAR_16) {

   VAR_12 = (struct ice_buf_hdr *)(VAR_9 + VAR_15 + 1);





   if (FUNC_4(VAR_12->section_count))
    if (FUNC_5(VAR_12->section_entry[0].type) &
        VAR_5)
     VAR_16 = 1;
  }

  VAR_12 = (struct ice_buf_hdr *)(VAR_9 + VAR_15);

  VAR_11 = FUNC_1(VAR_8, VAR_12, VAR_6, VAR_16,
          &VAR_13, &VAR_14, ((void*)0));


  VAR_8->pkg_dwnld_status = VAR_8->adminq.sq_last_status;
  if (VAR_11) {
   FUNC_2(VAR_8, VAR_2,
      "Pkg download failed: err %d off %d inf %d\n",
      VAR_11, VAR_13, VAR_14);

   break;
  }

  if (VAR_16)
   break;
 }

 FUNC_3(VAR_8);

 return VAR_11;
}
