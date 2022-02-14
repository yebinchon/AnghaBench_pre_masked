
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
struct amba_device {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 () ;
 unsigned long VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct amba_device *VAR_12,
       struct device_node *VAR_13)
{
 unsigned long VAR_14;

 FUNC_2(VAR_9);
 FUNC_4(VAR_3,
        VAR_11 + VAR_4);
 FUNC_4(VAR_5, VAR_11 +
        VAR_6);

 VAR_14 = VAR_10 + VAR_0;

 do {
  if (FUNC_1())
   FUNC_0();
  else
   break;
 } while (!FUNC_3(VAR_10, VAR_14));

 if (FUNC_3(VAR_10, VAR_14))
  return;

 FUNC_4(VAR_1,
        VAR_11 + VAR_7);
 FUNC_4(VAR_2,
        VAR_11 + VAR_8);
}
