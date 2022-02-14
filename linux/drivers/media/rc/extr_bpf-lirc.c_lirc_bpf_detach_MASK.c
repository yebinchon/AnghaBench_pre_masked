
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_dev {scalar_t__ driver_type; struct ir_raw_event_ctrl* raw; } ;
struct ir_raw_event_ctrl {int progs; } ;
struct bpf_prog_array {int dummy; } ;
struct bpf_prog {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct bpf_prog_array*,struct bpf_prog*,int *,struct bpf_prog_array**) ;
 int FUNC_1 (struct bpf_prog_array*) ;
 int FUNC_2 (struct bpf_prog*) ;
 int VAR_3 ;
 struct bpf_prog_array* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,struct bpf_prog_array*) ;

__attribute__((used)) static int FUNC_7(struct rc_dev *VAR_4, struct bpf_prog *VAR_5)
{
 struct bpf_prog_array *VAR_6;
 struct bpf_prog_array *VAR_7;
 struct ir_raw_event_ctrl *VAR_8;
 int VAR_9;

 if (VAR_4->driver_type != VAR_2)
  return -VAR_0;

 VAR_9 = FUNC_4(&VAR_3);
 if (VAR_9)
  return VAR_9;

 VAR_8 = VAR_4->raw;
 if (!VAR_8) {
  VAR_9 = -VAR_1;
  goto unlock;
 }

 VAR_6 = FUNC_3(VAR_8->progs);
 VAR_9 = FUNC_0(VAR_6, VAR_5, ((void*)0), &VAR_7);





 if (VAR_9)
  goto unlock;

 FUNC_6(VAR_8->progs, VAR_7);
 FUNC_1(VAR_6);
 FUNC_2(VAR_5);
unlock:
 FUNC_5(&VAR_3);
 return VAR_9;
}
