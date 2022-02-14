
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_ctrl {int state; int lock; int state_wq; } ;
typedef enum nvme_ctrl_state { ____Placeholder_nvme_ctrl_state } nvme_ctrl_state ;
 int FUNC_0 (struct nvme_ctrl*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;

bool FUNC_4(struct nvme_ctrl *VAR_0,
  enum nvme_ctrl_state VAR_1)
{
 enum nvme_ctrl_state VAR_2;
 unsigned long VAR_3;
 bool VAR_4 = 0;

 FUNC_1(&VAR_0->lock, VAR_3);

 VAR_2 = VAR_0->state;
 switch (VAR_1) {
 case 130:
  switch (VAR_2) {
  case 129:
  case 128:
  case 133:
   VAR_4 = 1;

  default:
   break;
  }
  break;
 case 128:
  switch (VAR_2) {
  case 129:
  case 130:
   VAR_4 = 1;

  default:
   break;
  }
  break;
 case 133:
  switch (VAR_2) {
  case 129:
  case 128:
   VAR_4 = 1;

  default:
   break;
  }
  break;
 case 131:
  switch (VAR_2) {
  case 130:
  case 128:
  case 133:
   VAR_4 = 1;

  default:
   break;
  }
  break;
 case 132:
  switch (VAR_2) {
  case 131:
   VAR_4 = 1;

  default:
   break;
  }
  break;
 default:
  break;
 }

 if (VAR_4) {
  VAR_0->state = VAR_1;
  FUNC_3(&VAR_0->state_wq);
 }

 FUNC_2(&VAR_0->lock, VAR_3);
 if (VAR_4 && VAR_0->state == 130)
  FUNC_0(VAR_0);
 return VAR_4;
}
