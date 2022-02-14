
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int len; } ;
struct wcn36xx_hal_nv_img_download_req_msg {int last_fragment; int nv_img_buffer_size; scalar_t__ frag_number; TYPE_1__ header; } ;
struct wcn36xx {int hal_mutex; int hal_rsp_len; scalar_t__ hal_buf; TYPE_2__* nv; int dev; } ;
struct nv_data {struct wcn36xx_hal_nv_img_download_req_msg table; } ;
typedef int msg_body ;
struct TYPE_4__ {int size; scalar_t__ data; } ;


 int FUNC_0 (struct wcn36xx_hal_nv_img_download_req_msg,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,struct wcn36xx_hal_nv_img_download_req_msg*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__**,int ,int ) ;
 int FUNC_5 (char*,int,...) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (struct wcn36xx*,int) ;

int FUNC_8(struct wcn36xx *VAR_3)
{
 struct nv_data *VAR_4;
 struct wcn36xx_hal_nv_img_download_req_msg VAR_5;
 int VAR_6;
 int VAR_7;
 u16 VAR_8 = 0;

 if (!VAR_3->nv) {
  VAR_7 = FUNC_4(&VAR_3->nv, VAR_2, VAR_3->dev);
  if (VAR_7) {
   FUNC_5("Failed to load nv file %s: %d\n",
          VAR_2, VAR_7);
   goto out;
  }
 }

 VAR_4 = (struct nv_data *)VAR_3->nv->data;
 FUNC_0(VAR_5, VAR_0);

 VAR_5.header.len += VAR_1;

 VAR_5.frag_number = 0;

 FUNC_2(&VAR_3->hal_mutex);

 do {
  VAR_6 = VAR_3->nv->size - VAR_8 - 4;
  if (VAR_6 > VAR_1) {
   VAR_5.last_fragment = 0;
   VAR_5.nv_img_buffer_size = VAR_1;
  } else {
   VAR_5.last_fragment = 1;
   VAR_5.nv_img_buffer_size = VAR_6;


   VAR_5.header.len = sizeof(VAR_5) + VAR_6;

  }


  FUNC_1(VAR_3->hal_buf, &VAR_5, sizeof(VAR_5));


  FUNC_1(VAR_3->hal_buf + sizeof(VAR_5),
         &VAR_4->table + VAR_8,
         VAR_5.nv_img_buffer_size);

  VAR_7 = FUNC_7(VAR_3, VAR_5.header.len);
  if (VAR_7)
   goto out_unlock;
  VAR_7 = FUNC_6(VAR_3->hal_buf,
         VAR_3->hal_rsp_len);
  if (VAR_7) {
   FUNC_5("hal_load_nv response failed err=%d\n",
        VAR_7);
   goto out_unlock;
  }
  VAR_5.frag_number++;
  VAR_8 += VAR_1;

 } while (VAR_5.last_fragment != 1);

out_unlock:
 FUNC_3(&VAR_3->hal_mutex);
out: return VAR_7;
}
