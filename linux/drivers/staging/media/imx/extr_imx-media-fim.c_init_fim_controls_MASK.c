
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ctrl_handler {int error; } ;
struct imx_media_fim {void** icap_ctrl; void** ctrl; struct v4l2_ctrl_handler ctrl_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int,void**) ;
 int FUNC_1 (struct v4l2_ctrl_handler*) ;
 int FUNC_2 (struct v4l2_ctrl_handler*,int) ;
 void* FUNC_3 (struct v4l2_ctrl_handler*,int *,int *) ;

__attribute__((used)) static int FUNC_4(struct imx_media_fim *VAR_4)
{
 struct v4l2_ctrl_handler *VAR_5 = &VAR_4->ctrl_handler;
 int VAR_6, VAR_7;

 FUNC_2(VAR_5, VAR_0 + VAR_1);

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  VAR_4->ctrl[VAR_6] = FUNC_3(VAR_5,
          &VAR_2[VAR_6],
          ((void*)0));
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  VAR_4->icap_ctrl[VAR_6] = FUNC_3(VAR_5,
        &VAR_3[VAR_6],
        ((void*)0));
 if (VAR_5->error) {
  VAR_7 = VAR_5->error;
  goto err_free;
 }

 FUNC_0(VAR_0, VAR_4->ctrl);
 FUNC_0(VAR_1, VAR_4->icap_ctrl);

 return 0;
err_free:
 FUNC_1(VAR_5);
 return VAR_7;
}
