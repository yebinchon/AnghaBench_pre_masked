
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u32 ;
struct mac_driver {int dummy; } ;


 char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char FUNC_0 (char,char) ;
 char FUNC_1 (struct mac_driver*,int ) ;
 int FUNC_2 (struct mac_driver*,int ,char) ;

__attribute__((used)) static void FUNC_3(void *VAR_3, char *VAR_4)
{
 struct mac_driver *VAR_5 = (struct mac_driver *)VAR_3;

 u32 VAR_6 = VAR_4[1] | (VAR_4[0] << 8);

 u32 VAR_7 = VAR_4[5] | (VAR_4[4] << 8)
  | (VAR_4[3] << 16) | (VAR_4[2] << 24);

 u32 VAR_8 = FUNC_1(VAR_5, VAR_1);
 u32 VAR_9 = FUNC_0(VAR_8, VAR_0);

 FUNC_2(VAR_5, VAR_2, VAR_7);
 FUNC_2(VAR_5, VAR_1,
         VAR_6 | (VAR_9 << VAR_0));
}
