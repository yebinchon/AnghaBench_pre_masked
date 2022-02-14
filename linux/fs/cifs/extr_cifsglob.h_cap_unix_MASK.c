
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cifs_ses {int capabilities; TYPE_2__* server; } ;
struct TYPE_4__ {TYPE_1__* vals; } ;
struct TYPE_3__ {int cap_unix; } ;



__attribute__((used)) static inline bool
FUNC_0(struct cifs_ses *VAR_0)
{
 return VAR_0->server->vals->cap_unix & VAR_0->capabilities;
}
