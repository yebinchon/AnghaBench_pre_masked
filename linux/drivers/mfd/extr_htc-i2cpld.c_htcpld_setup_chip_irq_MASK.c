
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct htcpld_data {struct htcpld_chip* chip; } ;
struct htcpld_chip {unsigned int irq_start; unsigned int nirqs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int,int) ;
 int FUNC_1 (unsigned int,int *,int ) ;
 int FUNC_2 (unsigned int,struct htcpld_chip*) ;
 struct htcpld_data* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(
  struct platform_device *VAR_4,
  int VAR_5)
{
 struct htcpld_data *VAR_6;
 struct htcpld_chip *VAR_7;
 unsigned int VAR_8, VAR_9;


 VAR_6 = FUNC_3(VAR_4);
 VAR_7 = &VAR_6->chip[VAR_5];


 VAR_9 = VAR_7->irq_start + VAR_7->nirqs;
 for (VAR_8 = VAR_7->irq_start; VAR_8 < VAR_9; VAR_8++) {
  FUNC_1(VAR_8, &VAR_3,
      VAR_2);
  FUNC_2(VAR_8, VAR_7);
  FUNC_0(VAR_8, VAR_1 | VAR_0);
 }

 return 0;
}
