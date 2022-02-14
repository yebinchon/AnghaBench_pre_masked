
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int type; } ;
struct device {int dummy; } ;
struct allegro_dev {int v4l2_dev; } ;
struct allegro_channel {unsigned int sizeimage_raw; unsigned int sizeimage_encoded; struct allegro_dev* dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int,int ,int *,char*,char*,char*,unsigned int) ;
 struct allegro_channel* FUNC_2 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_3(struct vb2_queue *VAR_2,
          unsigned int *VAR_3, unsigned int *VAR_4,
          unsigned int VAR_5[],
          struct device *VAR_6[])
{
 struct allegro_channel *VAR_7 = FUNC_2(VAR_2);
 struct allegro_dev *VAR_8 = VAR_7->dev;

 FUNC_1(2, VAR_1, &VAR_8->v4l2_dev,
   "%s: queue setup[%s]: nplanes = %d\n",
   FUNC_0(VAR_2->type) ? "output" : "capture",
   *VAR_4 == 0 ? "REQBUFS" : "CREATE_BUFS", *VAR_4);

 if (*VAR_4 != 0) {
  if (FUNC_0(VAR_2->type)) {
   if (VAR_5[0] < VAR_7->sizeimage_raw)
    return -VAR_0;
  } else {
   if (VAR_5[0] < VAR_7->sizeimage_encoded)
    return -VAR_0;
  }
 } else {
  *VAR_4 = 1;
  if (FUNC_0(VAR_2->type))
   VAR_5[0] = VAR_7->sizeimage_raw;
  else
   VAR_5[0] = VAR_7->sizeimage_encoded;
 }

 return 0;
}
