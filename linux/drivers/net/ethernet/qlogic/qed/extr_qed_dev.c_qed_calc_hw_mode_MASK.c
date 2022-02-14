
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hw_mode; } ;
struct qed_hwfn {TYPE_1__ hw_info; TYPE_2__* cdev; } ;
struct TYPE_5__ {int type; int num_ports_in_engine; int num_hwfns; int mf_bits; } ;


 int FUNC_0 (struct qed_hwfn*,char*,int) ;
 int FUNC_1 (struct qed_hwfn*,int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int VAR_12 ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct qed_hwfn *VAR_13)
{
 int VAR_14 = 0;

 if (FUNC_3(VAR_13->cdev)) {
  VAR_14 |= 1 << VAR_3;
 } else if (FUNC_2(VAR_13->cdev)) {
  VAR_14 |= 1 << VAR_4;
 } else {
  FUNC_0(VAR_13, "Unknown chip type %#x\n",
     VAR_13->cdev->type);
  return -VAR_0;
 }

 switch (VAR_13->cdev->num_ports_in_engine) {
 case 1:
  VAR_14 |= 1 << VAR_7;
  break;
 case 2:
  VAR_14 |= 1 << VAR_8;
  break;
 case 4:
  VAR_14 |= 1 << VAR_9;
  break;
 default:
  FUNC_0(VAR_13, "num_ports_in_engine = %d not supported\n",
     VAR_13->cdev->num_ports_in_engine);
  return -VAR_0;
 }

 if (FUNC_4(VAR_12, &VAR_13->cdev->mf_bits))
  VAR_14 |= 1 << VAR_5;
 else
  VAR_14 |= 1 << VAR_6;

 VAR_14 |= 1 << VAR_2;

 if (VAR_13->cdev->num_hwfns > 1)
  VAR_14 |= 1 << VAR_1;

 VAR_13->hw_info.hw_mode = VAR_14;

 FUNC_1(VAR_13, (VAR_11 | VAR_10),
     "Configuring function for hw_mode: 0x%08x\n",
     VAR_13->hw_info.hw_mode);

 return 0;
}
