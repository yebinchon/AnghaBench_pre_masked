
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t len; } ;
struct TYPE_5__ {size_t len; int type; } ;
struct wcn36xx_hal_mac_start_req_msg {TYPE_2__ header; TYPE_1__ params; } ;
struct wcn36xx {int hal_mutex; int hal_rsp_len; scalar_t__ hal_buf; } ;
struct TYPE_7__ {int value; int cfg_id; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_1 (struct wcn36xx_hal_mac_start_req_msg,int ) ;
 int FUNC_2 (scalar_t__,struct wcn36xx_hal_mac_start_req_msg) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct wcn36xx*,size_t*,int ,int ) ;
 TYPE_3__* VAR_3 ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (struct wcn36xx*,size_t) ;
 int FUNC_9 (struct wcn36xx*,scalar_t__,int ) ;

int FUNC_10(struct wcn36xx *VAR_4)
{
 struct wcn36xx_hal_mac_start_req_msg VAR_5, *VAR_6;
 int VAR_7;
 int VAR_8;
 size_t VAR_9;

 FUNC_3(&VAR_4->hal_mutex);
 FUNC_1(VAR_5, VAR_2);

 VAR_5.params.type = VAR_0;
 VAR_5.params.len = 0;

 FUNC_2(VAR_4->hal_buf, VAR_5);

 VAR_6 = (struct wcn36xx_hal_mac_start_req_msg *)VAR_4->hal_buf;
 VAR_9 = VAR_6->header.len;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_3); VAR_8++) {
  VAR_7 = FUNC_5(VAR_4, &VAR_9, VAR_3[VAR_8].cfg_id,
          VAR_3[VAR_8].value);
  if (VAR_7)
   goto out;
 }
 VAR_6->header.len = VAR_9;
 VAR_6->params.len = VAR_9 - sizeof(*VAR_6);

 FUNC_6(VAR_1, "hal start type %d\n",
      VAR_5.params.type);

 VAR_7 = FUNC_8(VAR_4, VAR_6->header.len);
 if (VAR_7) {
  FUNC_7("Sending hal_start failed\n");
  goto out;
 }

 VAR_7 = FUNC_9(VAR_4, VAR_4->hal_buf, VAR_4->hal_rsp_len);
 if (VAR_7) {
  FUNC_7("hal_start response failed err=%d\n", VAR_7);
  goto out;
 }

out:
 FUNC_4(&VAR_4->hal_mutex);
 return VAR_7;
}
