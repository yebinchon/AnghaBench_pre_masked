
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct get_set_mib {int size; void* index; void* type; } ;
struct atmel_private {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct atmel_private*,scalar_t__) ;
 void* FUNC_1 (struct atmel_private*,int ) ;
 int FUNC_2 (struct atmel_private*,int ,struct get_set_mib*,scalar_t__) ;

__attribute__((used)) static u8 FUNC_3(struct atmel_private *VAR_3, u8 VAR_4, u8 VAR_5)
{
 struct get_set_mib VAR_6;
 VAR_6.type = VAR_4;
 VAR_6.size = 1;
 VAR_6.index = VAR_5;

 FUNC_2(VAR_3, VAR_1, &VAR_6, VAR_2 + 1);
 return FUNC_1(VAR_3, FUNC_0(VAR_3, VAR_0 + VAR_2));
}
