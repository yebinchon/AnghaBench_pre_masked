
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
typedef int u32 ;
struct vnic_dev {int* args; int proxy_index; int (* devcmd_rtn ) (struct vnic_dev*,int,int) ;} ;
typedef enum vnic_devcmd_cmd { ____Placeholder_vnic_devcmd_cmd } vnic_devcmd_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (struct vnic_dev*,int,int) ;
 int FUNC_3 (struct vnic_dev*,char*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct vnic_dev *VAR_3,
 enum vnic_devcmd_cmd VAR_4, enum vnic_devcmd_cmd VAR_5,
 u64 *VAR_6, u64 *VAR_7, int VAR_8)
{
 u32 VAR_9;
 int VAR_10;

 FUNC_1(VAR_3->args, 0, sizeof(VAR_3->args));

 VAR_3->args[0] = VAR_3->proxy_index;
 VAR_3->args[1] = VAR_5;
 VAR_3->args[2] = *VAR_6;
 VAR_3->args[3] = *VAR_7;

 VAR_10 = VAR_3->devcmd_rtn(VAR_3, VAR_4, VAR_8);
 if (VAR_10)
  return VAR_10;

 VAR_9 = (u32)VAR_3->args[0];
 if (VAR_9 & VAR_2) {
  VAR_10 = (int)VAR_3->args[1];
  if (VAR_10 != VAR_1 ||
      VAR_5 != VAR_0)
   FUNC_3(VAR_3, "Error %d proxy devcmd %d\n",
        VAR_10, FUNC_0(VAR_5));
  return VAR_10;
 }

 *VAR_6 = VAR_3->args[1];
 *VAR_7 = VAR_3->args[2];

 return 0;
}
