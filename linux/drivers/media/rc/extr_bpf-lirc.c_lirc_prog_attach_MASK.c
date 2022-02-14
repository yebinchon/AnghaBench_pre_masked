
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bpf_attr {int target_fd; scalar_t__ attach_flags; } ;
struct rc_dev {int dev; } ;
struct bpf_prog {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rc_dev*) ;
 int FUNC_1 (struct rc_dev*) ;
 int FUNC_2 (struct rc_dev*,struct bpf_prog*) ;
 int FUNC_3 (int *) ;
 struct rc_dev* FUNC_4 (int ) ;

int FUNC_5(const union bpf_attr *VAR_1, struct bpf_prog *VAR_2)
{
 struct rc_dev *VAR_3;
 int VAR_4;

 if (VAR_1->attach_flags)
  return -VAR_0;

 VAR_3 = FUNC_4(VAR_1->target_fd);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_4 = FUNC_2(VAR_3, VAR_2);

 FUNC_3(&VAR_3->dev);

 return VAR_4;
}
