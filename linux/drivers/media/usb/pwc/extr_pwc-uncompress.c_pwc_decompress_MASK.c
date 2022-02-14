
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pwc_raw_frame {struct pwc_raw_frame* cmd; void* vbandlength; void* type; } ;
struct TYPE_2__ {int vb2_buf; } ;
struct pwc_frame_buf {TYPE_1__ vb; void* data; } ;
struct pwc_device {int frame_header_size; scalar_t__ pixfmt; scalar_t__ type; scalar_t__ vbandlength; void* cmd_buf; int frame_size; int width; int height; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_1 ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct pwc_raw_frame*,void*,int) ;
 int FUNC_4 (struct pwc_device*,void*,void*) ;
 void* FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ,int) ;

int FUNC_7(struct pwc_device *VAR_2, struct pwc_frame_buf *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 void *VAR_7, *VAR_8;
 u16 *VAR_9;
 u16 *VAR_10, *VAR_11, *VAR_12;

 VAR_8 = FUNC_5(&VAR_3->vb.vb2_buf, 0);

 VAR_7 = VAR_3->data + VAR_2->frame_header_size;


 if (VAR_2->pixfmt != VAR_1)
 {
  struct pwc_raw_frame *VAR_13 = VAR_8;
  VAR_13->type = FUNC_2(VAR_2->type);
  VAR_13->vbandlength = FUNC_2(VAR_2->vbandlength);



  FUNC_3(VAR_13->cmd, VAR_2->cmd_buf, 4);
  FUNC_3(VAR_13+1, VAR_7, VAR_2->frame_size);
  FUNC_6(&VAR_3->vb.vb2_buf, 0,
   VAR_2->frame_size + sizeof(struct pwc_raw_frame));
  return 0;
 }

 FUNC_6(&VAR_3->vb.vb2_buf, 0,
         VAR_2->width * VAR_2->height * 3 / 2);

 if (VAR_2->vbandlength == 0) {





  VAR_9 = (u16 *)VAR_7;
  VAR_4 = VAR_2->width * VAR_2->height;
  VAR_10 = (u16 *)(VAR_8);
  VAR_11 = (u16 *)(VAR_8 + VAR_4);
  VAR_12 = (u16 *)(VAR_8 + VAR_4 + VAR_4 / 4);

  for (VAR_5 = 0; VAR_5 < VAR_2->height; VAR_5++) {
   for (VAR_6 = 0; VAR_6 < VAR_2->width; VAR_6 += 4) {
    *VAR_10++ = *VAR_9++;
    *VAR_10++ = *VAR_9++;
    if (VAR_5 & 1)
     *VAR_12++ = *VAR_9++;
    else
     *VAR_11++ = *VAR_9++;
   }
  }

  return 0;
 }






 if (FUNC_0(VAR_2->type)) {


  FUNC_1("This chipset is not supported for now\n");
  return -VAR_0;

 } else {
  FUNC_4(VAR_2, VAR_7, VAR_8);
 }
 return 0;
}
