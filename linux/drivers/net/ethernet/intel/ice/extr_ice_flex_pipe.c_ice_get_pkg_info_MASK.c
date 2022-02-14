
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef size_t u32 ;
typedef int u16 ;
struct TYPE_3__ {int draft; int update; int minor; int major; } ;
struct ice_hw {scalar_t__ active_pkg_in_nvm; int active_pkg_name; TYPE_1__ active_pkg_ver; } ;
struct ice_aqc_get_pkg_info_resp {TYPE_2__* pkg_info; int count; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
struct TYPE_4__ {int name; TYPE_1__ ver; scalar_t__ is_in_nvm; scalar_t__ is_modified; scalar_t__ is_active_at_boot; scalar_t__ is_active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ice_hw*,struct ice_aqc_get_pkg_info_resp*,int,int *) ;
 int FUNC_1 (struct ice_hw*,int ,char*,size_t,int ,int ,int ,int ,int ,char*) ;
 int FUNC_2 (struct ice_aqc_get_pkg_info_resp*) ;
 struct ice_aqc_get_pkg_info_resp* FUNC_3 (int,int ) ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static enum ice_status FUNC_6(struct ice_hw *VAR_5)
{
 struct ice_aqc_get_pkg_info_resp *VAR_6;
 enum ice_status VAR_7;
 u16 VAR_8;
 u32 VAR_9;

 VAR_8 = sizeof(*VAR_6) + (sizeof(VAR_6->pkg_info[0]) *
        (VAR_3 - 1));
 VAR_6 = FUNC_3(VAR_8, VAR_0);
 if (!VAR_6)
  return VAR_2;

 VAR_7 = FUNC_0(VAR_5, VAR_6, VAR_8, ((void*)0));
 if (VAR_7)
  goto init_pkg_free_alloc;

 for (VAR_9 = 0; VAR_9 < FUNC_4(VAR_6->count); VAR_9++) {

  char VAR_10[4 + 1] = { 0 };
  u8 VAR_11 = 0;

  if (VAR_6->pkg_info[VAR_9].is_active) {
   VAR_10[VAR_11++] = 'A';
   VAR_5->active_pkg_ver = VAR_6->pkg_info[VAR_9].ver;
   FUNC_5(VAR_5->active_pkg_name,
          VAR_6->pkg_info[VAR_9].name,
          sizeof(VAR_5->active_pkg_name));
   VAR_5->active_pkg_in_nvm = VAR_6->pkg_info[VAR_9].is_in_nvm;
  }
  if (VAR_6->pkg_info[VAR_9].is_active_at_boot)
   VAR_10[VAR_11++] = 'B';
  if (VAR_6->pkg_info[VAR_9].is_modified)
   VAR_10[VAR_11++] = 'M';
  if (VAR_6->pkg_info[VAR_9].is_in_nvm)
   VAR_10[VAR_11++] = 'N';

  FUNC_1(VAR_5, VAR_1, "Pkg[%d]: %d.%d.%d.%d,%s,%s\n",
     VAR_9, VAR_6->pkg_info[VAR_9].ver.major,
     VAR_6->pkg_info[VAR_9].ver.minor,
     VAR_6->pkg_info[VAR_9].ver.update,
     VAR_6->pkg_info[VAR_9].ver.draft,
     VAR_6->pkg_info[VAR_9].name, VAR_10);
 }

init_pkg_free_alloc:
 FUNC_2(VAR_6);

 return VAR_7;
}
