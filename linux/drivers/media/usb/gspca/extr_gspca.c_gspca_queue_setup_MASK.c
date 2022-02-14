
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct TYPE_2__ {int sizeimage; } ;
struct gspca_dev {TYPE_1__ pixfmt; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 struct gspca_dev* FUNC_1 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_2(struct vb2_queue *VAR_1,
        unsigned int *VAR_2, unsigned int *VAR_3,
        unsigned int VAR_4[], struct device *VAR_5[])
{
 struct gspca_dev *VAR_6 = FUNC_1(VAR_1);
 unsigned int VAR_7 = FUNC_0(VAR_6->pixfmt.sizeimage);

 if (*VAR_3)
  return VAR_4[0] < VAR_7 ? -VAR_0 : 0;
 *VAR_3 = 1;
 VAR_4[0] = VAR_7;
 return 0;
}
