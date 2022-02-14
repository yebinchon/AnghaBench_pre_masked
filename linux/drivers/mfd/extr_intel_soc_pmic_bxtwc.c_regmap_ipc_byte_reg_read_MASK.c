
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
typedef int u32 ;
struct intel_soc_pmic {int dev; } ;
typedef int ipc_in ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,unsigned int*,int,int *,int) ;

__attribute__((used)) static int FUNC_2(void *VAR_7, unsigned int VAR_8,
        unsigned int *VAR_9)
{
 int VAR_10;
 int VAR_11;
 u8 VAR_12[2];
 u8 VAR_13[4];
 struct intel_soc_pmic *VAR_14 = VAR_7;

 if (!VAR_14)
  return -VAR_1;

 if (VAR_8 & VAR_4)
  VAR_11 = (VAR_8 & VAR_4) >> VAR_5;
 else
  VAR_11 = VAR_0;

 VAR_8 &= VAR_6;

 VAR_12[0] = VAR_8;
 VAR_12[1] = VAR_11;
 VAR_10 = FUNC_1(VAR_2,
   VAR_3,
   VAR_12, sizeof(VAR_12), (u32 *)VAR_13, 1);
 if (VAR_10) {
  FUNC_0(VAR_14->dev, "Failed to read from PMIC\n");
  return VAR_10;
 }
 *VAR_9 = VAR_13[0];

 return 0;
}
