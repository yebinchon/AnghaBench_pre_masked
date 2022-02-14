
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; int response_code; } ;
struct chp_cfg_sccb {TYPE_1__ header; } ;
typedef int sclp_cmdw_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (int ,struct chp_cfg_sccb*) ;

__attribute__((used)) static int FUNC_4(sclp_cmdw_t VAR_6)
{
 struct chp_cfg_sccb *VAR_7;
 int VAR_8;

 if (!VAR_5)
  return -VAR_2;

 VAR_7 = (struct chp_cfg_sccb *) FUNC_1(VAR_4 | VAR_3);
 if (!VAR_7)
  return -VAR_1;
 VAR_7->header.length = sizeof(*VAR_7);
 VAR_8 = FUNC_3(VAR_6, VAR_7);
 if (VAR_8)
  goto out;
 switch (VAR_7->header.response_code) {
 case 0x0020:
 case 0x0120:
 case 0x0440:
 case 0x0450:
  break;
 default:
  FUNC_2("configure channel-path failed (cmd=0x%08x, response=0x%04x)\n",
   VAR_6, VAR_7->header.response_code);
  VAR_8 = -VAR_0;
  break;
 }
out:
 FUNC_0((unsigned long) VAR_7);
 return VAR_8;
}
