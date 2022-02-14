
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsp1_video {int vsp1; int video; } ;
struct v4l2_fh {int dummy; } ;
struct file {struct v4l2_fh* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_fh*) ;
 struct v4l2_fh* FUNC_1 (int,int ) ;
 int FUNC_2 (struct v4l2_fh*) ;
 int FUNC_3 (struct v4l2_fh*) ;
 int FUNC_4 (struct v4l2_fh*) ;
 int FUNC_5 (struct v4l2_fh*,int *) ;
 struct vsp1_video* FUNC_6 (struct file*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_2)
{
 struct vsp1_video *VAR_3 = FUNC_6(VAR_2);
 struct v4l2_fh *VAR_4;
 int VAR_5 = 0;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_1);
 if (VAR_4 == ((void*)0))
  return -VAR_0;

 FUNC_5(VAR_4, &VAR_3->video);
 FUNC_2(VAR_4);

 VAR_2->private_data = VAR_4;

 VAR_5 = FUNC_7(VAR_3->vsp1);
 if (VAR_5 < 0) {
  FUNC_3(VAR_4);
  FUNC_4(VAR_4);
  FUNC_0(VAR_4);
 }

 return VAR_5;
}
