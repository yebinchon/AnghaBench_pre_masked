
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct asd_manuf_sec {int pcba_sn; } ;
struct TYPE_2__ {char* pcba_sn; } ;
struct asd_ha_struct {TYPE_1__ hw_prof; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*,int ,size_t) ;

__attribute__((used)) static int FUNC_1(struct asd_ha_struct *VAR_1,
         struct asd_manuf_sec *VAR_2)
{
 FUNC_0(VAR_1->hw_prof.pcba_sn, VAR_2->pcba_sn, VAR_0);
 VAR_1->hw_prof.pcba_sn[VAR_0] = '\0';
 return 0;
}
