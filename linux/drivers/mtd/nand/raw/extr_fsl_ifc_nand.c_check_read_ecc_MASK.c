
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtd_info {int dummy; } ;
struct fsl_ifc_ctrl {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct mtd_info *VAR_0, struct fsl_ifc_ctrl *VAR_1,
     u32 VAR_2, unsigned int VAR_3)
{
 return (VAR_2 >> ((3 - VAR_3 % 4) * 8)) & 15;
}
