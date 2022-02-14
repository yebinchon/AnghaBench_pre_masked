
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_decoder_cmd {int cmd; } ;
struct ivtv_open_id {struct ivtv* itv; } ;
struct ivtv {int dummy; } ;
struct file {int private_data; } ;


 int FUNC_0 (char*,int ) ;
 struct ivtv_open_id* FUNC_1 (int ) ;
 int FUNC_2 (struct ivtv*,struct ivtv_open_id*,struct v4l2_decoder_cmd*,int) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_0, void *VAR_1, struct v4l2_decoder_cmd *VAR_2)
{
 struct ivtv_open_id *VAR_3 = FUNC_1(VAR_0->private_data);
 struct ivtv *VAR_4 = VAR_3->itv;

 FUNC_0("VIDIOC_DECODER_CMD %d\n", VAR_2->cmd);
 return FUNC_2(VAR_4, VAR_3, VAR_2, 0);
}
