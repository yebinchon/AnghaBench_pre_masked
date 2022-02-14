
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rain {int dummy; } ;
struct cec_adapter {int dummy; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 struct rain* FUNC_0 (struct cec_adapter*) ;
 int FUNC_1 (struct rain*,int*,char*) ;
 int FUNC_2 (int*,int,char*,int) ;

__attribute__((used)) static int FUNC_3(struct cec_adapter *VAR_2, u8 VAR_3)
{
 struct rain *VAR_4 = FUNC_0(VAR_2);
 u8 VAR_5[16];

 if (VAR_3 == VAR_0)
  VAR_3 = VAR_1;
 FUNC_2(VAR_5, sizeof(VAR_5), "A %x", VAR_3);
 return FUNC_1(VAR_4, VAR_5, "ADR");
}
