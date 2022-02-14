
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mic_intr_info {int dummy; } ;
struct mic_device {struct mic_intr_info* intr_info; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct mic_device *VAR_1)
{
 VAR_1->intr_info = (struct mic_intr_info *)VAR_0;
}
