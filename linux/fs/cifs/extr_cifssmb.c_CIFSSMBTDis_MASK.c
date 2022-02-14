
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_hdr {int dummy; } ;
struct cifs_tcon {TYPE_1__* ses; scalar_t__ need_reconnect; } ;
struct TYPE_2__ {scalar_t__ need_reconnect; int * server; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int const,TYPE_1__*,char*,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct smb_hdr*) ;
 int FUNC_3 (int ,int ,struct cifs_tcon*,void**) ;

int
FUNC_4(const unsigned int VAR_4, struct cifs_tcon *VAR_5)
{
 struct smb_hdr *VAR_6;
 int VAR_7 = 0;

 FUNC_1(VAR_2, "In tree disconnect\n");


 if ((VAR_5->ses == ((void*)0)) || (VAR_5->ses->server == ((void*)0)))
  return -VAR_1;







 if ((VAR_5->need_reconnect) || (VAR_5->ses->need_reconnect))
  return 0;

 VAR_7 = FUNC_3(VAR_3, 0, VAR_5,
       (void **)&VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_0(VAR_4, VAR_5->ses, (char *)VAR_6, 0);
 FUNC_2(VAR_6);
 if (VAR_7)
  FUNC_1(VAR_2, "Tree disconnect failed %d\n", VAR_7);



 if (VAR_7 == -VAR_0)
  VAR_7 = 0;

 return VAR_7;
}
