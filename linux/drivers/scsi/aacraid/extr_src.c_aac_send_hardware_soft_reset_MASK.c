
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct aac_dev {scalar_t__ base; } ;


 int VAR_0 ;
 int FUNC_0 (struct aac_dev*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,char*) ;

__attribute__((used)) static void FUNC_4(struct aac_dev *VAR_1)
{
 u_int32_t VAR_2;

 FUNC_0(VAR_1);
 VAR_2 = FUNC_2(((char *)(VAR_1->base) + VAR_0));
 VAR_2 |= 0x01;
 FUNC_3(VAR_2, ((char *)(VAR_1->base) + VAR_0));
 FUNC_1(20000);
}
