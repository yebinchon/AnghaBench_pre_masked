
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ len; int type; } ;
struct wcnss_download_nv_req {int last; scalar_t__ seq; TYPE_1__ hdr; scalar_t__ frag_size; int fragment; } ;
struct wcnss_ctrl {scalar_t__ ack_status; int dev; int ack; int channel; } ;
struct firmware {void* data; scalar_t__ size; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct wcnss_download_nv_req*) ;
 struct wcnss_download_nv_req* FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int ,void const*,scalar_t__) ;
 int FUNC_4 (struct firmware const*) ;
 int FUNC_5 (struct firmware const**,int ,int ) ;
 int FUNC_6 (int ,struct wcnss_download_nv_req*,scalar_t__) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(struct wcnss_ctrl *VAR_8, bool *VAR_9)
{
 struct wcnss_download_nv_req *VAR_10;
 const struct firmware *VAR_11;
 const void *VAR_12;
 ssize_t VAR_13;
 int VAR_14;

 VAR_10 = FUNC_2(sizeof(*VAR_10) + VAR_4, VAR_2);
 if (!VAR_10)
  return -VAR_0;

 VAR_14 = FUNC_5(&VAR_11, VAR_3, VAR_8->dev);
 if (VAR_14 < 0) {
  FUNC_0(VAR_8->dev, "Failed to load nv file %s: %d\n",
   VAR_3, VAR_14);
  goto free_req;
 }

 VAR_12 = VAR_11->data;
 VAR_13 = VAR_11->size;

 VAR_10->hdr.type = VAR_6;
 VAR_10->hdr.len = sizeof(*VAR_10) + VAR_4;

 VAR_10->last = 0;
 VAR_10->frag_size = VAR_4;

 VAR_10->seq = 0;
 do {
  if (VAR_13 <= VAR_4) {
   VAR_10->last = 1;
   VAR_10->frag_size = VAR_13;
   VAR_10->hdr.len = sizeof(*VAR_10) + VAR_13;
  }

  FUNC_3(VAR_10->fragment, VAR_12, VAR_10->frag_size);

  VAR_14 = FUNC_6(VAR_8->channel, VAR_10, VAR_10->hdr.len);
  if (VAR_14 < 0) {
   FUNC_0(VAR_8->dev, "failed to send smd packet\n");
   goto release_fw;
  }


  VAR_10->seq++;

  VAR_12 += VAR_4;
  VAR_13 -= VAR_4;
 } while (VAR_13 > 0);

 VAR_14 = FUNC_7(&VAR_8->ack, VAR_7);
 if (!VAR_14) {
  FUNC_0(VAR_8->dev, "timeout waiting for nv upload ack\n");
  VAR_14 = -VAR_1;
 } else {
  *VAR_9 = VAR_8->ack_status == VAR_5;
  VAR_14 = 0;
 }

release_fw:
 FUNC_4(VAR_11);
free_req:
 FUNC_1(VAR_10);

 return VAR_14;
}
