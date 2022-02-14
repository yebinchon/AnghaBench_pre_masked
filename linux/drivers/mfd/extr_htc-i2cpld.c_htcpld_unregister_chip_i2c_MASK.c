
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct htcpld_data {struct htcpld_chip* chip; } ;
struct htcpld_chip {int client; } ;


 int FUNC_0 (int ) ;
 struct htcpld_data* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static void FUNC_2(
  struct platform_device *VAR_0,
  int VAR_1)
{
 struct htcpld_data *VAR_2;
 struct htcpld_chip *VAR_3;


 VAR_2 = FUNC_1(VAR_0);
 VAR_3 = &VAR_2->chip[VAR_1];

 FUNC_0(VAR_3->client);
}
