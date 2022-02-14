
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct enic {int vdev; } ;
typedef enum vnic_devcmd_cmd { ____Placeholder_vnic_devcmd_cmd } vnic_devcmd_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,scalar_t__*,scalar_t__*,int) ;
 int FUNC_1 (scalar_t__*,int,int,int,int,int,int,int) ;

int FUNC_2(struct enic *VAR_4, u8 VAR_5, u8 VAR_6,
 u8 VAR_7, u8 VAR_8, u8 VAR_9, u8 VAR_10,
 u8 VAR_11)
{
 enum vnic_devcmd_cmd VAR_12 = VAR_0;
 u64 VAR_13, VAR_14;
 u32 VAR_15;
 int VAR_16 = 1000;

 FUNC_1(&VAR_15, VAR_5,
  VAR_6, VAR_7, VAR_8,
  VAR_9, VAR_10, VAR_11);

 VAR_13 = VAR_15;
 VAR_14 = 0;

 if (VAR_6 & (VAR_2 |
        VAR_3))
  VAR_12 = VAR_1;

 return FUNC_0(VAR_4->vdev, VAR_12, &VAR_13, &VAR_14, VAR_16);
}
