
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ice_hw {int dummy; } ;
struct ice_aqc_suspend_resume_elem {int * teid; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct ice_aqc_suspend_resume_elem*) ;
 struct ice_aqc_suspend_resume_elem* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct ice_hw*,int,struct ice_aqc_suspend_resume_elem*,int,int*,int *) ;
 int FUNC_4 (struct ice_hw*,int,struct ice_aqc_suspend_resume_elem*,int,int*,int *) ;
 int FUNC_5 (struct ice_hw*,int ,char*) ;
 int FUNC_6 (struct ice_hw*) ;

__attribute__((used)) static enum ice_status
FUNC_7(struct ice_hw *VAR_3, u8 VAR_4, u32 *VAR_5,
          bool VAR_6)
{
 struct ice_aqc_suspend_resume_elem *VAR_7;
 u16 VAR_8, VAR_9, VAR_10 = 0;
 enum ice_status VAR_11;

 VAR_9 = sizeof(*VAR_7) * VAR_4;
 VAR_7 = FUNC_2(FUNC_6(VAR_3), VAR_9, VAR_0);
 if (!VAR_7)
  return VAR_2;

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
  VAR_7->teid[VAR_8] = FUNC_0(VAR_5[VAR_8]);

 if (VAR_6)
  VAR_11 = FUNC_4(VAR_3, VAR_4, VAR_7,
          VAR_9, &VAR_10,
          ((void*)0));
 else
  VAR_11 = FUNC_3(VAR_3, VAR_4, VAR_7,
         VAR_9, &VAR_10,
         ((void*)0));
 if (VAR_11 || VAR_10 != VAR_4)
  FUNC_5(VAR_3, VAR_1, "suspend/resume failed\n");

 FUNC_1(FUNC_6(VAR_3), VAR_7);
 return VAR_11;
}
