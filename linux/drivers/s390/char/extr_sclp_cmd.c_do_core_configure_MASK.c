
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; int response_code; } ;
struct cpu_configure_sccb {TYPE_1__ header; } ;
typedef int sclp_cmdw_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct cpu_configure_sccb*) ;
 struct cpu_configure_sccb* FUNC_1 (int,int) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (int ,struct cpu_configure_sccb*,int ) ;

__attribute__((used)) static int FUNC_4(sclp_cmdw_t VAR_7)
{
 struct cpu_configure_sccb *VAR_8;
 int VAR_9;

 if (!VAR_5)
  return -VAR_2;




 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_4 | VAR_3);
 if (!VAR_8)
  return -VAR_1;
 VAR_8->header.length = sizeof(*VAR_8);
 VAR_9 = FUNC_3(VAR_7, VAR_8, VAR_6);
 if (VAR_9)
  goto out;
 switch (VAR_8->header.response_code) {
 case 0x0020:
 case 0x0120:
  break;
 default:
  FUNC_2("configure cpu failed (cmd=0x%08x, response=0x%04x)\n",
   VAR_7, VAR_8->header.response_code);
  VAR_9 = -VAR_0;
  break;
 }
out:
 FUNC_0(VAR_8);
 return VAR_9;
}
