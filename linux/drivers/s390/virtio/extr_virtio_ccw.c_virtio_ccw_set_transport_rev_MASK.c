
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_rev_info {int count; scalar_t__ revision; scalar_t__ length; scalar_t__ cda; scalar_t__ flags; int cmd_code; } ;
struct virtio_ccw_device {scalar_t__ revision; int cdev; } ;
struct ccw1 {int count; scalar_t__ revision; scalar_t__ length; scalar_t__ cda; scalar_t__ flags; int cmd_code; } ;
typedef scalar_t__ __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,struct virtio_rev_info*,int) ;
 struct virtio_rev_info* FUNC_1 (int ,int) ;
 int FUNC_2 (struct virtio_ccw_device*,struct virtio_rev_info*,int ) ;

__attribute__((used)) static int FUNC_3(struct virtio_ccw_device *VAR_5)
{
 struct virtio_rev_info *VAR_6;
 struct ccw1 *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(VAR_5->cdev, sizeof(*VAR_7));
 if (!VAR_7)
  return -VAR_1;
 VAR_6 = FUNC_1(VAR_5->cdev, sizeof(*VAR_6));
 if (!VAR_6) {
  FUNC_0(VAR_5->cdev, VAR_7, sizeof(*VAR_7));
  return -VAR_1;
 }


 VAR_7->cmd_code = VAR_0;
 VAR_7->flags = 0;
 VAR_7->count = sizeof(*VAR_6);
 VAR_7->cda = (__u32)(unsigned long)VAR_6;

 VAR_5->revision = VAR_4;
 do {
  VAR_6->revision = VAR_5->revision;

  VAR_6->length = 0;
  VAR_8 = FUNC_2(VAR_5, VAR_7,
        VAR_3);
  if (VAR_8 == -VAR_2) {
   if (VAR_5->revision == 0)





    VAR_8 = 0;
   else
    VAR_5->revision--;
  }
 } while (VAR_8 == -VAR_2);

 FUNC_0(VAR_5->cdev, VAR_7, sizeof(*VAR_7));
 FUNC_0(VAR_5->cdev, VAR_6, sizeof(*VAR_6));
 return VAR_8;
}
