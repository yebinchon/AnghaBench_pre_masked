
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ sq_last_status; } ;
struct ice_hw {TYPE_1__ adminq; } ;
struct ice_aqc_list_caps_elem {int dummy; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
typedef enum ice_adminq_opc { ____Placeholder_ice_adminq_opc } ice_adminq_opc ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,void*) ;
 void* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct ice_hw*,void*,int ,int*,int,int *) ;
 int FUNC_3 (struct ice_hw*) ;

__attribute__((used)) static enum ice_status
FUNC_4(struct ice_hw *VAR_5, enum ice_adminq_opc VAR_6)
{
 enum ice_status VAR_7;
 u32 VAR_8;
 u16 VAR_9;
 u8 VAR_10;
 VAR_8 = 40;
 VAR_10 = 2;

 do {
  void *VAR_11;

  VAR_9 = (u16)(VAR_8 *
     sizeof(struct ice_aqc_list_caps_elem));
  VAR_11 = FUNC_1(FUNC_3(VAR_5), VAR_9, VAR_0);
  if (!VAR_11)
   return VAR_2;

  VAR_7 = FUNC_2(VAR_5, VAR_11, VAR_9, &VAR_8,
           VAR_6, ((void*)0));
  FUNC_0(FUNC_3(VAR_5), VAR_11);

  if (!VAR_7 || VAR_5->adminq.sq_last_status != VAR_1)
   break;


 } while (--VAR_10);

 return VAR_7;
}
