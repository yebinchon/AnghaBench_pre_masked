
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * counter; } ;
union dpni_statistics {TYPE_1__ raw; } ;
typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct fsl_mc_io {int dummy; } ;
struct fsl_mc_command {scalar_t__ params; int header; int member_0; } ;
struct dpni_rsp_get_statistics {int * counter; } ;
struct dpni_cmd_get_statistics {int page_number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct fsl_mc_io*,struct fsl_mc_command*) ;

int FUNC_3(struct fsl_mc_io *VAR_2,
   u32 VAR_3,
   u16 VAR_4,
   u8 VAR_5,
   union dpni_statistics *VAR_6)
{
 struct fsl_mc_command VAR_7 = { 0 };
 struct dpni_cmd_get_statistics *VAR_8;
 struct dpni_rsp_get_statistics *VAR_9;
 int VAR_10, VAR_11;


 VAR_7.header = FUNC_1(VAR_0,
       VAR_3,
       VAR_4);
 VAR_8 = (struct dpni_cmd_get_statistics *)VAR_7.params;
 VAR_8->page_number = VAR_5;


 VAR_11 = FUNC_2(VAR_2, &VAR_7);
 if (VAR_11)
  return VAR_11;


 VAR_9 = (struct dpni_rsp_get_statistics *)VAR_7.params;
 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++)
  VAR_6->raw.counter[VAR_10] = FUNC_0(VAR_9->counter[VAR_10]);

 return 0;
}
