
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct hl_device {int dev; scalar_t__ pldm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct hl_device*,int ,int,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct hl_device *VAR_7, u32 VAR_8,
      u64 VAR_9)
{
 u32 VAR_10, VAR_11;
 int VAR_12;

 if (VAR_7->pldm)
  VAR_11 = VAR_0;
 else
  VAR_11 = VAR_2;

 FUNC_0(VAR_3, VAR_9 >> VAR_4);
 FUNC_0(VAR_5, VAR_9 >> VAR_6);
 FUNC_0(VAR_1, 0x80000000 | VAR_8);

 VAR_12 = FUNC_2(
  VAR_7,
  VAR_1,
  VAR_10,
  !(VAR_10 & 0x80000000),
  1000,
  VAR_11);

 if (VAR_12) {
  FUNC_1(VAR_7->dev,
   "Timeout during MMU hop0 config of asid %d\n", VAR_8);
  return VAR_12;
 }

 return 0;
}
