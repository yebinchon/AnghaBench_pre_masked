
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct Scsi_Host {int dummy; } ;
struct TYPE_3__ {int ad_type; } ;
typedef TYPE_1__ ips_ha_t ;
typedef int buffer ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct Scsi_Host*) ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int) ;
 char** VAR_4 ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char*,char*,char*,char*,int,int ) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static const char *
FUNC_5(struct Scsi_Host *VAR_5)
{
 static char VAR_6[256];
 char *VAR_7;
 ips_ha_t *VAR_8;

 FUNC_1("ips_info", 1);

 VAR_8 = FUNC_0(VAR_5);

 if (!VAR_8)
  return (((void*)0));

 VAR_7 = &VAR_6[0];
 FUNC_2(VAR_7, 0, sizeof (VAR_6));

 FUNC_3(VAR_7, "%s%s%s Build %d", "IBM PCI ServeRAID ",
  VAR_1, VAR_2, VAR_0);

 if (VAR_8->ad_type > 0 && VAR_8->ad_type <= VAR_3) {
  FUNC_4(VAR_7, " <");
  FUNC_4(VAR_7, VAR_4[VAR_8->ad_type - 1]);
  FUNC_4(VAR_7, ">");
 }

 return (VAR_7);
}
