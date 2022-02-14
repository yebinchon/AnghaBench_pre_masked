
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wcnss_version_resp {int revision; int version; int minor; int major; } ;
struct wcnss_msg_hdr {int type; } ;
struct wcnss_download_nv_resp {int status; } ;
struct wcnss_ctrl {int dev; int cbc; int ack; int ack_status; } ;
struct rpmsg_device {int dev; } ;





 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 struct wcnss_ctrl* FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,int,...) ;

__attribute__((used)) static int FUNC_5(struct rpmsg_device *VAR_0,
       void *VAR_1,
       int VAR_2,
       void *VAR_3,
       u32 VAR_4)
{
 struct wcnss_ctrl *VAR_5 = FUNC_3(&VAR_0->dev);
 const struct wcnss_download_nv_resp *VAR_6;
 const struct wcnss_version_resp *VAR_7;
 const struct wcnss_msg_hdr *VAR_8 = VAR_1;

 switch (VAR_8->type) {
 case 128:
  if (VAR_2 != sizeof(*VAR_7)) {
   FUNC_2(VAR_5->dev,
    "invalid size of version response\n");
   break;
  }

  VAR_7 = VAR_1;
  FUNC_4(VAR_5->dev, "WCNSS Version %d.%d %d.%d\n",
    VAR_7->major, VAR_7->minor,
    VAR_7->version, VAR_7->revision);

  FUNC_0(&VAR_5->ack);
  break;
 case 129:
  if (VAR_2 != sizeof(*VAR_6)) {
   FUNC_2(VAR_5->dev,
    "invalid size of download response\n");
   break;
  }

  VAR_6 = VAR_1;
  VAR_5->ack_status = VAR_6->status;
  FUNC_0(&VAR_5->ack);
  break;
 case 130:
  FUNC_1(VAR_5->dev, "cold boot complete\n");
  FUNC_0(&VAR_5->cbc);
  break;
 default:
  FUNC_4(VAR_5->dev, "unknown message type %d\n", VAR_8->type);
  break;
 }

 return 0;
}
