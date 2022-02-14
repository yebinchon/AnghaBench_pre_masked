
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct reg_pair_t {int dummy; } ;
struct mxl5007t_state {int dummy; } ;
typedef enum mxl5007t_bw_mhz { ____Placeholder_mxl5007t_bw_mhz } mxl5007t_bw_mhz ;


 int FUNC_0 (int) ;
 struct reg_pair_t* FUNC_1 (struct mxl5007t_state*,int ,int) ;
 int FUNC_2 (struct mxl5007t_state*,struct reg_pair_t*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct mxl5007t_state *VAR_0, u32 VAR_1,
      enum mxl5007t_bw_mhz VAR_2)
{
 struct reg_pair_t *VAR_3;
 int VAR_4;


 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);

 VAR_4 = FUNC_2(VAR_0, VAR_3);
 if (FUNC_3(VAR_4))
  goto fail;
 FUNC_0(3);
fail:
 return VAR_4;
}
