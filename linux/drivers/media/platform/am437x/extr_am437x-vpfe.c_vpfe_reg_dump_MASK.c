
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpfe_device {int dummy; } ;
struct vpfe_ccdc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct vpfe_device* FUNC_0 (struct vpfe_ccdc*) ;
 int FUNC_1 (int,struct vpfe_device*,char*,int ) ;
 int FUNC_2 (struct vpfe_ccdc*,int ) ;

__attribute__((used)) static void FUNC_3(struct vpfe_ccdc *VAR_11)
{
 struct vpfe_device *VAR_12 = FUNC_0(VAR_11);

 FUNC_1(3, VAR_12, "ALAW: 0x%x\n", FUNC_2(VAR_11, VAR_0));
 FUNC_1(3, VAR_12, "CLAMP: 0x%x\n", FUNC_2(VAR_11, VAR_2));
 FUNC_1(3, VAR_12, "DCSUB: 0x%x\n", FUNC_2(VAR_11, VAR_4));
 FUNC_1(3, VAR_12, "BLKCMP: 0x%x\n", FUNC_2(VAR_11, VAR_1));
 FUNC_1(3, VAR_12, "COLPTN: 0x%x\n", FUNC_2(VAR_11, VAR_3));
 FUNC_1(3, VAR_12, "SDOFST: 0x%x\n", FUNC_2(VAR_11, VAR_7));
 FUNC_1(3, VAR_12, "SYN_MODE: 0x%x\n",
   FUNC_2(VAR_11, VAR_8));
 FUNC_1(3, VAR_12, "HSIZE_OFF: 0x%x\n",
   FUNC_2(VAR_11, VAR_6));
 FUNC_1(3, VAR_12, "HORZ_INFO: 0x%x\n",
   FUNC_2(VAR_11, VAR_5));
 FUNC_1(3, VAR_12, "VERT_START: 0x%x\n",
   FUNC_2(VAR_11, VAR_10));
 FUNC_1(3, VAR_12, "VERT_LINES: 0x%x\n",
   FUNC_2(VAR_11, VAR_9));
}
