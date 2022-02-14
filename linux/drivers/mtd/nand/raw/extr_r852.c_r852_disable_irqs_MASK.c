
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct r852_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct r852_device*,int ) ;
 int FUNC_1 (struct r852_device*,int ) ;
 int FUNC_2 (struct r852_device*,int ,int) ;
 int FUNC_3 (struct r852_device*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct r852_device *VAR_6)
{
 uint8_t VAR_7;
 VAR_7 = FUNC_0(VAR_6, VAR_0);
 FUNC_2(VAR_6, VAR_0, VAR_7 & ~VAR_1);

 VAR_7 = FUNC_1(VAR_6, VAR_3);
 FUNC_3(VAR_6, VAR_3,
     VAR_7 & ~VAR_4);

 FUNC_2(VAR_6, VAR_2, VAR_1);
 FUNC_3(VAR_6, VAR_5, VAR_4);
}
