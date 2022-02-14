
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union MEGASAS_REQUEST_DESCRIPTOR_UNION {int dummy; } MEGASAS_REQUEST_DESCRIPTOR_UNION ;
struct megasas_instance {int dummy; } ;
struct megasas_cmd {int dummy; } ;


 union MEGASAS_REQUEST_DESCRIPTOR_UNION* FUNC_0 (struct megasas_instance*,struct megasas_cmd*) ;
 int FUNC_1 (struct megasas_instance*,union MEGASAS_REQUEST_DESCRIPTOR_UNION*) ;

__attribute__((used)) static void
FUNC_2(struct megasas_instance *VAR_0,
     struct megasas_cmd *VAR_1)
{
 union MEGASAS_REQUEST_DESCRIPTOR_UNION *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);

 FUNC_1(VAR_0, VAR_2);
 return;
}
