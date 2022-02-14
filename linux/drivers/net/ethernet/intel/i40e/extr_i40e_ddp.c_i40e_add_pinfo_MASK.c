
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct i40e_profile_segment {int name; int version; } ;
struct TYPE_2__ {int offset; int size; int type; } ;
struct i40e_profile_section_header {int tbl_size; int data_end; TYPE_1__ section; } ;
struct i40e_profile_info {int name; int reserved; int op; int version; int track_id; } ;
struct i40e_hw {int dummy; } ;
typedef int i40e_status ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i40e_hw*,void*,int,int ,int *,int *,int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static enum i40e_status_code
FUNC_3(struct i40e_hw *VAR_3, struct i40e_profile_segment *VAR_4,
        u8 *VAR_5, u32 VAR_6)
{
 struct i40e_profile_section_header *VAR_7;
 struct i40e_profile_info *VAR_8;
 i40e_status VAR_9;
 u32 VAR_10 = 0, VAR_11 = 0;

 VAR_7 = (struct i40e_profile_section_header *)VAR_5;
 VAR_7->tbl_size = 1;
 VAR_7->data_end = sizeof(struct i40e_profile_section_header) +
   sizeof(struct i40e_profile_info);
 VAR_7->section.type = VAR_2;
 VAR_7->section.offset = sizeof(struct i40e_profile_section_header);
 VAR_7->section.size = sizeof(struct i40e_profile_info);
 VAR_8 = (struct i40e_profile_info *)(VAR_5 +
          VAR_7->section.offset);
 VAR_8->track_id = VAR_6;
 VAR_8->version = VAR_4->version;
 VAR_8->op = VAR_0;


 FUNC_2(VAR_8->reserved, 0, sizeof(VAR_8->reserved));
 FUNC_1(VAR_8->name, VAR_4->name, VAR_1);

 VAR_9 = FUNC_0(VAR_3, (void *)VAR_7, VAR_7->data_end,
       VAR_6, &VAR_10, &VAR_11, ((void*)0));
 return VAR_9;
}
