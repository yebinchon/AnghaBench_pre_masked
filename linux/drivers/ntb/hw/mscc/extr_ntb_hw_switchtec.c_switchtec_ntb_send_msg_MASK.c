
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct switchtec_ntb {TYPE_1__* mmio_peer_dbmsg; } ;
struct TYPE_4__ {int msg; } ;
struct TYPE_3__ {TYPE_2__* omsg; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct switchtec_ntb *VAR_1, int VAR_2,
      u32 VAR_3)
{
 if (VAR_2 < 0 || VAR_2 >= FUNC_0(VAR_1->mmio_peer_dbmsg->omsg))
  return -VAR_0;

 FUNC_1(VAR_3, &VAR_1->mmio_peer_dbmsg->omsg[VAR_2].msg);

 return 0;
}
