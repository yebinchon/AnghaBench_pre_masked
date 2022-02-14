
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_buffer {int vb2_queue; } ;
struct TYPE_2__ {int sizeimage; } ;
struct gspca_dev {TYPE_1__ pixfmt; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (struct gspca_dev*,char*,unsigned long,unsigned long) ;
 struct gspca_dev* FUNC_2 (int ) ;
 unsigned long FUNC_3 (struct vb2_buffer*,int ) ;

__attribute__((used)) static int FUNC_4(struct vb2_buffer *VAR_1)
{
 struct gspca_dev *VAR_2 = FUNC_2(VAR_1->vb2_queue);
 unsigned long VAR_3 = FUNC_0(VAR_2->pixfmt.sizeimage);

 if (FUNC_3(VAR_1, 0) < VAR_3) {
  FUNC_1(VAR_2, "buffer too small (%lu < %lu)\n",
    FUNC_3(VAR_1, 0), VAR_3);
  return -VAR_0;
 }
 return 0;
}
