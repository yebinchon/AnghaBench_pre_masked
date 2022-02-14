
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* sleep_ms; scalar_t__ last_slept; scalar_t__ last_action; scalar_t__ state; scalar_t__ off_override; } ;
struct ar9170 {TYPE_1__ ps; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,int ,size_t,char*,char*) ;
 scalar_t__ VAR_0 ;
 char* FUNC_1 (scalar_t__) ;

__attribute__((used)) static char *FUNC_2(struct ar9170 *VAR_1, char *VAR_2,
        size_t VAR_3, ssize_t *VAR_4)
{
 FUNC_0(VAR_2, *VAR_4, VAR_3, "psm state: %s\n", (VAR_1->ps.off_override ?
     "FORCE CAM" : (VAR_1->ps.state ? "PSM" : "CAM")));

 FUNC_0(VAR_2, *VAR_4, VAR_3, "sleep duration: %d ms.\n", VAR_1->ps.sleep_ms);
 FUNC_0(VAR_2, *VAR_4, VAR_3, "last power-state transition: %d ms ago.\n",
     FUNC_1(VAR_0 - VAR_1->ps.last_action));
 FUNC_0(VAR_2, *VAR_4, VAR_3, "last CAM->PSM transition: %d ms ago.\n",
     FUNC_1(VAR_0 - VAR_1->ps.last_slept));

 return VAR_2;
}
