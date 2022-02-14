
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ func_level; } ;
struct TYPE_4__ {scalar_t__ no_out_queues; } ;
struct TYPE_6__ {struct ccw_device* ccwdev; } ;
struct qeth_card {TYPE_2__ info; TYPE_1__ qdio; TYPE_3__ data; } ;
struct channel_path_desc_fmt0 {int chpp; scalar_t__ desc; } ;
struct ccw_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct qeth_card*) ;
 scalar_t__ FUNC_1 (struct qeth_card*) ;
 int FUNC_2 (struct qeth_card*,int,char*) ;
 int FUNC_3 (struct qeth_card*,int,char*,scalar_t__) ;
 struct channel_path_desc_fmt0* FUNC_4 (struct ccw_device*,int ) ;
 int FUNC_5 (struct channel_path_desc_fmt0*) ;
 int FUNC_6 (struct qeth_card*,int) ;

__attribute__((used)) static int FUNC_7(struct qeth_card *VAR_1)
{
 struct ccw_device *VAR_2;
 struct channel_path_desc_fmt0 *VAR_3;
 int VAR_4 = 0;

 FUNC_2(VAR_1, 2, "chp_desc");

 VAR_2 = VAR_1->data.ccwdev;
 VAR_3 = FUNC_4(VAR_2, 0);
 if (!VAR_3)
  return -VAR_0;

 VAR_1->info.func_level = 0x4100 + VAR_3->desc;

 if (FUNC_0(VAR_1) || FUNC_1(VAR_1))

  VAR_4 = FUNC_6(VAR_1, VAR_3->chpp & 0x02);

 FUNC_5(VAR_3);
 FUNC_3(VAR_1, 2, "nr:%x", VAR_1->qdio.no_out_queues);
 FUNC_3(VAR_1, 2, "lvl:%02x", VAR_1->info.func_level);
 return VAR_4;
}
