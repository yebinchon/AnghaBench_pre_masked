
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cxl_afu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cxl_afu*,int ) ;
 int FUNC_1 (struct cxl_afu*,int ,int) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void FUNC_3(struct cxl_afu *VAR_3, u64 VAR_4)
{
 u64 VAR_5;

 FUNC_2("RECOVERING FROM PSL ERROR... (0x%016llx)\n", VAR_4);


 VAR_5 = FUNC_0(VAR_3, VAR_0);
 FUNC_1(VAR_3, VAR_0, VAR_5 & ~VAR_1);


 FUNC_1(VAR_3, VAR_2, VAR_4);
}
