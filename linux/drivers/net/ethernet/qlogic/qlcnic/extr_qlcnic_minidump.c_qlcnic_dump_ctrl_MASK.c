
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct __ctrl {int addr; int no_ops; int opcode; int val1; int val2; int val3; int timeout; int index_a; int index_v; int shl_val; int shr_val; scalar_t__ stride; } ;
struct TYPE_7__ {struct __ctrl ctrl; } ;
struct qlcnic_dump_entry {TYPE_3__ region; } ;
struct qlcnic_adapter {TYPE_4__* pdev; TYPE_2__* ahw; } ;
typedef int __le32 ;
struct TYPE_8__ {int dev; } ;
struct TYPE_5__ {void* tmpl_hdr; } ;
struct TYPE_6__ {TYPE_1__ fw_dump; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct qlcnic_adapter*,void*,int) ;
 int FUNC_2 (struct qlcnic_adapter*,int) ;
 int FUNC_3 (struct qlcnic_adapter*,int,int) ;
 int FUNC_4 (struct qlcnic_adapter*,void*,int,int) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static u32 FUNC_6(struct qlcnic_adapter *VAR_1,
       struct qlcnic_dump_entry *VAR_2, __le32 *VAR_3)
{
 void *VAR_4 = VAR_1->ahw->fw_dump.tmpl_hdr;
 struct __ctrl *VAR_5 = &VAR_2->region.ctrl;
 int VAR_6, VAR_7, VAR_8 = 0;
 u32 VAR_9, VAR_10, VAR_11;
 u8 VAR_12;

 VAR_9 = VAR_5->addr;
 VAR_12 = VAR_5->no_ops;

 for (VAR_6 = 0; VAR_6 < VAR_12; VAR_6++) {
  VAR_7 = 0;
  for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {
   if (!(VAR_5->opcode & (1 << VAR_7)))
    continue;
   switch (1 << VAR_7) {
   case 129:
    FUNC_3(VAR_1, VAR_9, VAR_5->val1);
    break;
   case 130:
    VAR_10 = FUNC_2(VAR_1, VAR_9);
    FUNC_3(VAR_1, VAR_9, VAR_10);
    break;
   case 135:
    VAR_10 = FUNC_2(VAR_1, VAR_9);
    FUNC_3(VAR_1, VAR_9,
           (VAR_10 & VAR_5->val2));
    break;
   case 133:
    VAR_10 = FUNC_2(VAR_1, VAR_9);
    FUNC_3(VAR_1, VAR_9,
           (VAR_10 | VAR_5->val3));
    break;
   case 132:
    while (VAR_8 <= VAR_5->timeout) {
     VAR_10 = FUNC_2(VAR_1, VAR_9);
     if ((VAR_10 & VAR_5->val2) == VAR_5->val1)
      break;
     FUNC_5(1000, 2000);
     VAR_8++;
    }
    if (VAR_8 > VAR_5->timeout) {
     FUNC_0(&VAR_1->pdev->dev,
     "Timed out, aborting poll CRB\n");
     return -VAR_0;
    }
    break;
   case 131:
    VAR_11 = VAR_5->index_a;
    if (VAR_11)
     VAR_9 = FUNC_1(VAR_1,
              VAR_4,
              VAR_11);
    VAR_10 = FUNC_2(VAR_1, VAR_9);
    FUNC_4(VAR_1, VAR_4,
             VAR_5->index_v, VAR_10);
    break;
   case 128:
    VAR_11 = VAR_5->index_v;
    if (VAR_11)
     VAR_10 = FUNC_1(VAR_1,
              VAR_4,
              VAR_11);
    else
     VAR_10 = VAR_5->val1;

    VAR_11 = VAR_5->index_a;
    if (VAR_11)
     VAR_9 = FUNC_1(VAR_1,
              VAR_4,
              VAR_11);
    FUNC_3(VAR_1, VAR_9, VAR_10);
    break;
   case 134:
    VAR_10 = FUNC_1(VAR_1, VAR_4,
             VAR_5->index_v);
    VAR_10 <<= VAR_5->shl_val;
    VAR_10 >>= VAR_5->shr_val;
    if (VAR_5->val2)
     VAR_10 &= VAR_5->val2;
    VAR_10 |= VAR_5->val3;
    VAR_10 += VAR_5->val1;
    FUNC_4(VAR_1, VAR_4,
             VAR_5->index_v, VAR_10);
    break;
   default:
    FUNC_0(&VAR_1->pdev->dev,
      "Unknown opcode\n");
    break;
   }
  }
  VAR_9 += VAR_5->stride;
 }
 return 0;
}
