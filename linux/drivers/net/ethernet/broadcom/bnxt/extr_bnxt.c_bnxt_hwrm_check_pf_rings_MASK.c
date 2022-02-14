
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hwrm_func_cfg_input {int flags; int member_0; } ;
struct bnxt {int flags; } ;
typedef int req ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bnxt*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct bnxt*,struct hwrm_func_cfg_input*,int,int,int,int,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct bnxt*,struct hwrm_func_cfg_input*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct bnxt *VAR_10, int VAR_11, int VAR_12,
        int VAR_13, int VAR_14, int VAR_15,
        int VAR_16)
{
 struct hwrm_func_cfg_input VAR_17 = {0};
 u32 VAR_18;
 int VAR_19;

 FUNC_1(VAR_10, &VAR_17, VAR_11, VAR_12, VAR_13,
         VAR_14, VAR_15, VAR_16);
 VAR_18 = VAR_7;
 if (FUNC_0(VAR_10)) {
  VAR_18 |= VAR_5 |
    VAR_1 |
    VAR_6 |
    VAR_8;
  if (VAR_10->flags & VAR_0)
   VAR_18 |= VAR_4 |
     VAR_2;
  else
   VAR_18 |= VAR_3;
 }

 VAR_17.flags = FUNC_2(VAR_18);
 VAR_19 = FUNC_3(VAR_10, &VAR_17, sizeof(VAR_17), VAR_9);
 return VAR_19;
}
