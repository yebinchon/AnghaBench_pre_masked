
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {unsigned int timeout; unsigned int pretimeout; } ;
struct arm_smccc_res {scalar_t__ a0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,unsigned int,int ,int ,int ,int ,int ,struct arm_smccc_res*) ;

__attribute__((used)) static int FUNC_1(struct watchdog_device *VAR_3,
         unsigned int VAR_4)
{
 struct arm_smccc_res VAR_5;






 FUNC_0(VAR_1, VAR_2,
        (VAR_3->timeout - VAR_4) * 1000, 0, 0, 0,
        0, 0, &VAR_5);
 if (VAR_5.a0)
  return -VAR_0;

 VAR_3->pretimeout = VAR_4;

 return 0;
}
