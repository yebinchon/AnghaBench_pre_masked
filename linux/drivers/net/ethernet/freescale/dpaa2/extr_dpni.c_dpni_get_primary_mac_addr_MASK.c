
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct fsl_mc_io {int dummy; } ;
struct fsl_mc_command {scalar_t__ params; int header; int member_0; } ;
struct dpni_rsp_get_primary_mac_addr {int * mac_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct fsl_mc_io*,struct fsl_mc_command*) ;

int FUNC_2(struct fsl_mc_io *VAR_1,
         u32 VAR_2,
         u16 VAR_3,
         u8 VAR_4[6])
{
 struct fsl_mc_command VAR_5 = { 0 };
 struct dpni_rsp_get_primary_mac_addr *VAR_6;
 int VAR_7, VAR_8;


 VAR_5.header = FUNC_0(VAR_0,
       VAR_2,
       VAR_3);


 VAR_8 = FUNC_1(VAR_1, &VAR_5);
 if (VAR_8)
  return VAR_8;


 VAR_6 = (struct dpni_rsp_get_primary_mac_addr *)VAR_5.params;
 for (VAR_7 = 0; VAR_7 < 6; VAR_7++)
  VAR_4[5 - VAR_7] = VAR_6->mac_addr[VAR_7];

 return 0;
}
