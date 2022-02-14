
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa_camera_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*,int) ;
 int FUNC_1 (struct pxa_camera_dev*) ;
 int VAR_2 ;
 int FUNC_2 (struct pxa_camera_dev*,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct pxa_camera_dev *VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_2(VAR_3, VAR_1, VAR_2, VAR_4);
 if (VAR_5 == -VAR_0)
  VAR_5 = 0;
 if (VAR_5) {
  FUNC_0(FUNC_1(VAR_3),
    "Failed to put subdevice in %s mode: %d\n",
    VAR_4 ? "normal operation" : "power saving", VAR_5);
 }

 return VAR_5;
}
