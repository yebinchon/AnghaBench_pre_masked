
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sizeimage; } ;
struct via_camera {int n_cap_bufs; unsigned int fb_offset; unsigned int* cb_offsets; TYPE_2__ sensor_format; scalar_t__ fbmem; scalar_t__* cb_addrs; TYPE_1__* viadev; } ;
struct TYPE_3__ {int camera_fbmem_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (struct via_camera*,char*) ;
 int FUNC_1 (struct via_camera*,scalar_t__,unsigned int) ;
 int FUNC_2 (struct via_camera*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct via_camera *VAR_5)
{
 int VAR_6 = VAR_5->viadev->camera_fbmem_size/VAR_5->sensor_format.sizeimage;
 int VAR_7;
 unsigned int VAR_8;




 if (VAR_6 >= 3) {
  VAR_5->n_cap_bufs = 3;
  FUNC_2(VAR_5, VAR_1, VAR_2,
    VAR_2);
 } else if (VAR_6 == 2) {
  VAR_5->n_cap_bufs = 2;
  FUNC_2(VAR_5, VAR_1, 0, VAR_2);
 } else {
  FUNC_0(VAR_5, "Insufficient frame buffer memory\n");
  return -VAR_0;
 }



 VAR_8 = VAR_5->fb_offset;
 for (VAR_7 = 0; VAR_7 < VAR_5->n_cap_bufs; VAR_7++) {
  VAR_5->cb_offsets[VAR_7] = VAR_8;
  VAR_5->cb_addrs[VAR_7] = VAR_5->fbmem + VAR_8;
  FUNC_1(VAR_5, VAR_3 + VAR_7*4, VAR_8 & VAR_4);
  VAR_8 += VAR_5->sensor_format.sizeimage;
 }
 return 0;
}
