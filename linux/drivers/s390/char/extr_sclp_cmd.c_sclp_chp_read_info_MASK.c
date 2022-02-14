
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sclp_chp_info {int configured; int standby; int recognized; } ;
struct TYPE_2__ {int length; int response_code; } ;
struct chp_info_sccb {int configured; int standby; int recognized; TYPE_1__ header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ,struct chp_info_sccb*) ;

int FUNC_5(struct sclp_chp_info *VAR_8)
{
 struct chp_info_sccb *VAR_9;
 int VAR_10;

 if (!VAR_7)
  return -VAR_2;

 VAR_9 = (struct chp_info_sccb *) FUNC_1(VAR_4 | VAR_3);
 if (!VAR_9)
  return -VAR_1;
 VAR_9->header.length = sizeof(*VAR_9);
 VAR_10 = FUNC_4(VAR_6, VAR_9);
 if (VAR_10)
  goto out;
 if (VAR_9->header.response_code != 0x0010) {
  FUNC_3("read channel-path info failed (response=0x%04x)\n",
   VAR_9->header.response_code);
  VAR_10 = -VAR_0;
  goto out;
 }
 FUNC_2(VAR_8->recognized, VAR_9->recognized, VAR_5);
 FUNC_2(VAR_8->standby, VAR_9->standby, VAR_5);
 FUNC_2(VAR_8->configured, VAR_9->configured, VAR_5);
out:
 FUNC_0((unsigned long) VAR_9);
 return VAR_10;
}
