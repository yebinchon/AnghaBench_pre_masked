
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vbg_session {int dummy; } ;
struct vbg_ioctl_hdr {scalar_t__ size_in; scalar_t__ size_out; scalar_t__ type; scalar_t__ rc; } ;
struct vbg_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct vbg_dev*,struct vbg_session*,void*) ;
 int FUNC_2 (struct vbg_dev*,void*) ;

__attribute__((used)) static int FUNC_3(struct vbg_dev *VAR_5,
    struct vbg_session *VAR_6, void *VAR_7)
{
 struct vbg_ioctl_hdr *VAR_8 = VAR_7;
 int VAR_9;

 if (VAR_8->size_in != VAR_8->size_out)
  return -VAR_1;

 if (VAR_8->size_in > VAR_4)
  return -VAR_0;

 if (VAR_8->type == VAR_2)
  return -VAR_1;

 VAR_9 = FUNC_1(VAR_5, VAR_6, VAR_7);
 if (VAR_9 < 0)
  return VAR_9;

 FUNC_2(VAR_5, VAR_7);
 FUNC_0(VAR_8->rc == VAR_3);

 return 0;
}
