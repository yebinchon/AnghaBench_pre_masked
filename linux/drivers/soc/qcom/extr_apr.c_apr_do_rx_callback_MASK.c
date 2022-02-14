
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct apr_rx_buf {int len; void* buf; } ;
struct apr_hdr {scalar_t__ pkt_size; scalar_t__ src_domain; scalar_t__ dest_domain; scalar_t__ src_svc; scalar_t__ dest_svc; int hdr_field; } ;
struct apr_resp_pkt {scalar_t__ payload_size; void* payload; struct apr_hdr hdr; } ;
struct apr_driver {int (* callback ) (struct apr_device*,struct apr_resp_pkt*) ;} ;
struct TYPE_2__ {scalar_t__ driver; } ;
struct apr_device {TYPE_1__ dev; } ;
struct apr {int dev; int svcs_lock; int svcs_idr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,char*,...) ;
 struct apr_device* FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct apr_device*,struct apr_resp_pkt*) ;
 struct apr_driver* FUNC_8 (scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct apr *VAR_6, struct apr_rx_buf *VAR_7)
{
 uint16_t VAR_8, VAR_9, VAR_10, VAR_11;
 struct apr_device *VAR_12 = ((void*)0);
 struct apr_driver *VAR_13 = ((void*)0);
 struct apr_resp_pkt VAR_14;
 struct apr_hdr *VAR_15;
 unsigned long VAR_16;
 void *VAR_17 = VAR_7->buf;
 int VAR_18 = VAR_7->len;

 VAR_15 = VAR_17;
 VAR_10 = FUNC_2(VAR_15->hdr_field);
 if (VAR_10 > VAR_3 + 1)
  return -VAR_5;

 VAR_8 = FUNC_1(VAR_15->hdr_field);
 if (VAR_8 < VAR_1) {
  FUNC_3(VAR_6->dev, "APR: Wrong hdr size:%d\n", VAR_8);
  return -VAR_5;
 }

 if (VAR_15->pkt_size < VAR_1 || VAR_15->pkt_size != VAR_18) {
  FUNC_3(VAR_6->dev, "APR: Wrong packet size\n");
  return -VAR_5;
 }

 VAR_9 = FUNC_0(VAR_15->hdr_field);
 if (VAR_9 >= VAR_2) {
  FUNC_3(VAR_6->dev, "APR: Wrong message type: %d\n", VAR_9);
  return -VAR_5;
 }

 if (VAR_15->src_domain >= VAR_0 ||
   VAR_15->dest_domain >= VAR_0 ||
   VAR_15->src_svc >= VAR_4 ||
   VAR_15->dest_svc >= VAR_4) {
  FUNC_3(VAR_6->dev, "APR: Wrong APR header\n");
  return -VAR_5;
 }

 VAR_11 = VAR_15->dest_svc;
 FUNC_5(&VAR_6->svcs_lock, VAR_16);
 VAR_12 = FUNC_4(&VAR_6->svcs_idr, VAR_11);
 if (VAR_12 && VAR_12->dev.driver)
  VAR_13 = FUNC_8(VAR_12->dev.driver);
 FUNC_6(&VAR_6->svcs_lock, VAR_16);

 if (!VAR_13) {
  FUNC_3(VAR_6->dev, "APR: service is not registered\n");
  return -VAR_5;
 }

 VAR_14.hdr = *VAR_15;
 VAR_14.payload_size = VAR_15->pkt_size - VAR_8;





 if (VAR_14.payload_size > 0)
  VAR_14.payload = VAR_17 + VAR_8;

 VAR_13->callback(VAR_12, &VAR_14);

 return 0;
}
