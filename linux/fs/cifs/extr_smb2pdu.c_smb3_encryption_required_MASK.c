
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cifs_tcon {int share_flags; TYPE_2__* ses; scalar_t__ seal; } ;
struct TYPE_4__ {int session_flags; TYPE_1__* server; } ;
struct TYPE_3__ {int capabilities; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0(const struct cifs_tcon *VAR_3)
{
 if (!VAR_3)
  return 0;
 if ((VAR_3->ses->session_flags & VAR_2) ||
     (VAR_3->share_flags & VAR_0))
  return 1;
 if (VAR_3->seal &&
     (VAR_3->ses->server->capabilities & VAR_1))
  return 1;
 return 0;
}
