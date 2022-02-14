
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct wakeup_source {int dummy; } ;
struct TYPE_11__ {TYPE_4__* file; } ;
struct epitem {int ws; TYPE_5__ ffd; TYPE_6__* ep; } ;
struct TYPE_12__ {void* ws; } ;
struct TYPE_9__ {TYPE_2__* dentry; } ;
struct TYPE_10__ {TYPE_3__ f_path; } ;
struct TYPE_7__ {char* name; } ;
struct TYPE_8__ {TYPE_1__ d_name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct wakeup_source*) ;
 void* FUNC_1 (int *,char const*) ;

__attribute__((used)) static int FUNC_2(struct epitem *VAR_1)
{
 const char *VAR_2;
 struct wakeup_source *VAR_3;

 if (!VAR_1->ep->ws) {
  VAR_1->ep->ws = FUNC_1(((void*)0), "eventpoll");
  if (!VAR_1->ep->ws)
   return -VAR_0;
 }

 VAR_2 = VAR_1->ffd.file->f_path.dentry->d_name.name;
 VAR_3 = FUNC_1(((void*)0), VAR_2);

 if (!VAR_3)
  return -VAR_0;
 FUNC_0(VAR_1->ws, VAR_3);

 return 0;
}
