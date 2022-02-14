
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pulse8 {int dummy; } ;
struct cec_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pulse8* FUNC_0 (struct cec_adapter*) ;
 int FUNC_1 (struct pulse8*,int*,int,int ,int) ;

__attribute__((used)) static int FUNC_2(struct cec_adapter *VAR_2, bool VAR_3)
{
 struct pulse8 *VAR_4 = FUNC_0(VAR_2);
 u8 VAR_5[16];
 int VAR_6;

 VAR_5[0] = VAR_1;
 VAR_5[1] = VAR_3;
 VAR_6 = FUNC_1(VAR_4, VAR_5, 2,
       VAR_0, 1);
 return VAR_3 ? VAR_6 : 0;
}
