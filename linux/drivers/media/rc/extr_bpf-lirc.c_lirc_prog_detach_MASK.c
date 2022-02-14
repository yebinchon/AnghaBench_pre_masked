
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bpf_attr {int target_fd; int attach_bpf_fd; scalar_t__ attach_flags; } ;
struct rc_dev {int dev; } ;
struct bpf_prog {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct rc_dev*) ;
 int FUNC_1 (struct rc_dev*) ;
 struct rc_dev* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct rc_dev*) ;
 int FUNC_4 (struct rc_dev*,struct rc_dev*) ;
 int FUNC_5 (int *) ;
 struct rc_dev* FUNC_6 (int ) ;

int FUNC_7(const union bpf_attr *VAR_2)
{
 struct bpf_prog *VAR_3;
 struct rc_dev *VAR_4;
 int VAR_5;

 if (VAR_2->attach_flags)
  return -VAR_1;

 VAR_3 = FUNC_2(VAR_2->attach_bpf_fd,
     VAR_0);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_4 = FUNC_6(VAR_2->target_fd);
 if (FUNC_0(VAR_4)) {
  FUNC_3(VAR_3);
  return FUNC_1(VAR_4);
 }

 VAR_5 = FUNC_4(VAR_4, VAR_3);

 FUNC_3(VAR_3);
 FUNC_5(&VAR_4->dev);

 return VAR_5;
}
