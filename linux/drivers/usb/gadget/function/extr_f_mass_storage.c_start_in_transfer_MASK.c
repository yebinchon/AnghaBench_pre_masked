
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsg_common {TYPE_1__* fsg; } ;
struct fsg_buffhd {int state; int inreq; } ;
struct TYPE_2__ {int bulk_in; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fsg_common*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static bool FUNC_2(struct fsg_common *VAR_2, struct fsg_buffhd *VAR_3)
{
 if (!FUNC_0(VAR_2))
  return 0;
 VAR_3->state = VAR_1;
 if (FUNC_1(VAR_2->fsg, VAR_2->fsg->bulk_in, VAR_3->inreq))
  VAR_3->state = VAR_0;
 return 1;
}
