
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arche_platform_drvdata {int wake_detect_state; } ;
typedef enum svc_wakedetect_state { ____Placeholder_svc_wakedetect_state } svc_wakedetect_state ;



__attribute__((used)) static void FUNC_0(
    struct arche_platform_drvdata *VAR_0,
    enum svc_wakedetect_state VAR_1)
{
 VAR_0->wake_detect_state = VAR_1;
}
