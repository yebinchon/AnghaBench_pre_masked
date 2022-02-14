
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lkey; int length; int addr; } ;
struct smbd_response {TYPE_1__ sge; int type; } ;
struct smbd_connection {int negotiate_done; int negotiate_completion; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct smbd_response* FUNC_0 (struct smbd_connection*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (struct smbd_connection*,struct smbd_response*) ;
 int FUNC_4 (struct smbd_connection*) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static int FUNC_6(struct smbd_connection *VAR_8)
{
 int VAR_9;
 struct smbd_response *VAR_10 = FUNC_0(VAR_8);

 VAR_10->type = VAR_6;
 VAR_9 = FUNC_3(VAR_8, VAR_10);
 FUNC_2(VAR_5,
  "smbd_post_recv rc=%d iov.addr=%llx iov.length=%x "
  "iov.lkey=%x\n",
  VAR_9, VAR_10->sge.addr,
  VAR_10->sge.length, VAR_10->sge.lkey);
 if (VAR_9)
  return VAR_9;

 FUNC_1(&VAR_8->negotiate_completion);
 VAR_8->negotiate_done = 0;
 VAR_9 = FUNC_4(VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_5(
  &VAR_8->negotiate_completion, VAR_7 * VAR_4);
 FUNC_2(VAR_5, "wait_for_completion_timeout rc=%d\n", VAR_9);

 if (VAR_8->negotiate_done)
  return 0;

 if (VAR_9 == 0)
  VAR_9 = -VAR_3;
 else if (VAR_9 == -VAR_2)
  VAR_9 = -VAR_0;
 else
  VAR_9 = -VAR_1;

 return VAR_9;
}
