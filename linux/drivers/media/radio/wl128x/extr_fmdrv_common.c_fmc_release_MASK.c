
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct st_proto_s {int chnl_id; } ;
struct TYPE_3__ {int read_queue; } ;
struct TYPE_4__ {scalar_t__ freq; TYPE_1__ rds; } ;
struct fmdev {int flag; TYPE_2__ rx; int * resp_comp; int rx_q; int tx_q; int rx_task; int tx_task; } ;
typedef int fm_st_proto ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct st_proto_s*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct st_proto_s*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct fmdev *VAR_1)
{
 static struct st_proto_s VAR_2;
 int VAR_3;

 if (!FUNC_7(VAR_0, &VAR_1->flag)) {
  FUNC_1("FM Core is already down\n");
  return 0;
 }

 FUNC_8(&VAR_1->rx.rds.read_queue);

 FUNC_6(&VAR_1->tx_task);
 FUNC_6(&VAR_1->rx_task);

 FUNC_4(&VAR_1->tx_q);
 FUNC_4(&VAR_1->rx_q);

 VAR_1->resp_comp = ((void*)0);
 VAR_1->rx.freq = 0;

 FUNC_3(&VAR_2, 0, sizeof(VAR_2));
 VAR_2.chnl_id = 0x08;

 VAR_3 = FUNC_5(&VAR_2);

 if (VAR_3 < 0)
  FUNC_2("Failed to de-register FM from ST %d\n", VAR_3);
 else
  FUNC_1("Successfully unregistered from ST\n");

 FUNC_0(VAR_0, &VAR_1->flag);
 return VAR_3;
}
