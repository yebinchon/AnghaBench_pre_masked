
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u32 ;
struct mac_driver {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mac_driver*,int ,char) ;

__attribute__((used)) static void FUNC_1(void *VAR_2, char *VAR_3)
{
 struct mac_driver *VAR_4 = (struct mac_driver *)VAR_2;

 u32 VAR_5 = VAR_3[1] | (VAR_3[0] << 8);
 u32 VAR_6 = VAR_3[5] | (VAR_3[4] << 8)
  | (VAR_3[3] << 16) | (VAR_3[2] << 24);
 FUNC_0(VAR_4, VAR_1, VAR_6);
 FUNC_0(VAR_4, VAR_0, VAR_5);
}
