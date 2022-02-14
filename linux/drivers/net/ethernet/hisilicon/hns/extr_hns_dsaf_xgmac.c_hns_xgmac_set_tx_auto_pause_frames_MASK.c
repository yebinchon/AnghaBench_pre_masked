
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct mac_driver {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mac_driver*,int ,int ,int) ;
 int FUNC_1 (struct mac_driver*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(void *VAR_3, u16 VAR_4)
{
 struct mac_driver *VAR_5 = (struct mac_driver *)VAR_3;

 FUNC_0(VAR_5, VAR_0,
    VAR_2, !!VAR_4);


 if (VAR_4)
  FUNC_1(VAR_5, VAR_1, VAR_4);
}
