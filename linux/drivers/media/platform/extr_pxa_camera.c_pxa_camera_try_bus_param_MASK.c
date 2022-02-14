
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_mbus_config {int flags; int type; } ;
struct pxa_camera_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,unsigned long) ;
 int VAR_3 ;
 int FUNC_1 (struct pxa_camera_dev*) ;
 unsigned long FUNC_2 (struct v4l2_mbus_config*,unsigned long) ;
 int FUNC_3 (struct pxa_camera_dev*,int ,int ,struct v4l2_mbus_config*) ;
 int FUNC_4 (struct pxa_camera_dev*,unsigned char,unsigned long*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct pxa_camera_dev *VAR_5,
        unsigned char VAR_6)
{
 struct v4l2_mbus_config VAR_7 = {.type = VAR_2,};
 unsigned long VAR_8, VAR_9;
 int VAR_10 = FUNC_4(VAR_5, VAR_6, &VAR_8);

 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_3(VAR_5, VAR_4, VAR_3, &VAR_7);
 if (!VAR_10) {
  VAR_9 = FUNC_2(&VAR_7,
         VAR_8);
  if (!VAR_9) {
   FUNC_0(FUNC_1(VAR_5),
     "Flags incompatible: camera 0x%x, host 0x%lx\n",
     VAR_7.flags, VAR_8);
   return -VAR_0;
  }
 } else if (VAR_10 == -VAR_1) {
  VAR_10 = 0;
 }

 return VAR_10;
}
