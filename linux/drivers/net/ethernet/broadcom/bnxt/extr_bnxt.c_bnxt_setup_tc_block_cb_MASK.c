
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fw_fid; } ;
struct bnxt {TYPE_1__ pf; int dev; } ;
typedef enum tc_setup_type { ____Placeholder_tc_setup_type } tc_setup_type ;


 int VAR_0 ;

 int FUNC_0 (struct bnxt*) ;
 int FUNC_1 (struct bnxt*,int ,void*) ;
 int FUNC_2 (int ,void*) ;

__attribute__((used)) static int FUNC_3(enum tc_setup_type VAR_1, void *VAR_2,
      void *VAR_3)
{
 struct bnxt *VAR_4 = VAR_3;

 if (!FUNC_0(VAR_4) ||
     !FUNC_2(VAR_4->dev, VAR_2))
  return -VAR_0;

 switch (VAR_1) {
 case 128:
  return FUNC_1(VAR_4, VAR_4->pf.fw_fid, VAR_2);
 default:
  return -VAR_0;
 }
}
