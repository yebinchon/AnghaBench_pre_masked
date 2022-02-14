
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct zfcp_fsf_req {int status; struct fsf_status_read_buffer* data; struct zfcp_adapter* adapter; } ;
struct TYPE_6__ {int sr_data; } ;
struct zfcp_adapter {int stat_work; int work_queue; int stat_miss; TYPE_3__ pool; int adapter_features; TYPE_1__* ccw_device; } ;
struct TYPE_5__ {int * word; } ;
struct fsf_status_read_buffer {int status_type; int status_subtype; TYPE_2__ payload; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int VAR_7 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct fsf_status_read_buffer*) ;
 int FUNC_6 (char*,struct zfcp_fsf_req*) ;
 int FUNC_7 (char*,struct zfcp_fsf_req*) ;
 int FUNC_8 (struct zfcp_adapter*,int,char*) ;
 int FUNC_9 (struct zfcp_adapter*,int ,char*) ;
 int FUNC_10 (struct zfcp_adapter*,int ) ;
 int FUNC_11 (struct zfcp_adapter*) ;
 int FUNC_12 (struct zfcp_adapter*,int ,int ) ;
 int FUNC_13 (struct zfcp_fsf_req*) ;
 int FUNC_14 (struct zfcp_fsf_req*) ;
 int FUNC_15 (struct zfcp_fsf_req*) ;
 int FUNC_16 (struct zfcp_fsf_req*) ;

__attribute__((used)) static void FUNC_17(struct zfcp_fsf_req *VAR_8)
{
 struct zfcp_adapter *VAR_9 = VAR_8->adapter;
 struct fsf_status_read_buffer *VAR_10 = VAR_8->data;

 if (VAR_8->status & VAR_6) {
  FUNC_7("fssrh_1", VAR_8);
  FUNC_3(FUNC_5(VAR_10), VAR_9->pool.sr_data);
  FUNC_14(VAR_8);
  return;
 }

 FUNC_7("fssrh_4", VAR_8);

 switch (VAR_10->status_type) {
 case 129:
  FUNC_16(VAR_8);
  break;
 case 133:
  FUNC_13(VAR_8);
  break;
 case 128:
  break;
 case 135:
  FUNC_6("fssrh_3", VAR_8);
  if (VAR_7) {
   FUNC_2(&VAR_9->ccw_device->dev,
     "All paths over this FCP device are disused because of excessive bit errors\n");
   FUNC_9(VAR_9, 0, "fssrh_b");
  } else {
   FUNC_2(&VAR_9->ccw_device->dev,
     "The error threshold for checksum statistics has been exceeded\n");
  }
  break;
 case 132:
  FUNC_15(VAR_8);
  FUNC_12(VAR_9, VAR_0, 0);
  break;
 case 131:
  FUNC_1(&VAR_9->ccw_device->dev,
    "The local link has been restored\n");

  FUNC_10(VAR_9,
         VAR_5);
  FUNC_8(VAR_9,
     VAR_3 |
     VAR_4,
     "fssrh_2");
  FUNC_12(VAR_9, VAR_1, 0);

  break;
 case 130:
  if (VAR_10->status_subtype & VAR_2)
   FUNC_11(VAR_9);
  break;
 case 134:
  VAR_9->adapter_features = VAR_10->payload.word[0];
  break;
 }

 FUNC_3(FUNC_5(VAR_10), VAR_9->pool.sr_data);
 FUNC_14(VAR_8);

 FUNC_0(&VAR_9->stat_miss);
 FUNC_4(VAR_9->work_queue, &VAR_9->stat_work);
}
