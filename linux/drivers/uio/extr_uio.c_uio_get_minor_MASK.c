
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio_device {int minor; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,struct uio_device*,int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_4(struct uio_device *VAR_7)
{
 int VAR_8 = -VAR_1;

 FUNC_2(&VAR_5);
 VAR_8 = FUNC_1(&VAR_6, VAR_7, 0, VAR_4, VAR_3);
 if (VAR_8 >= 0) {
  VAR_7->minor = VAR_8;
  VAR_8 = 0;
 } else if (VAR_8 == -VAR_2) {
  FUNC_0(&VAR_7->dev, "too many uio devices\n");
  VAR_8 = -VAR_0;
 }
 FUNC_3(&VAR_5);
 return VAR_8;
}
