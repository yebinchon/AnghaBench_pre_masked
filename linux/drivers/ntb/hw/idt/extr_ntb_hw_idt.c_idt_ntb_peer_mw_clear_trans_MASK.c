
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ntb_dev {int dummy; } ;
struct idt_ntb_dev {int peer_cnt; int mw_cnt; int lut_lock; struct idt_mw_cfg* mws; } ;
struct idt_ntb_bar {int limit; int setup; } ;
struct idt_mw_cfg {scalar_t__ type; size_t bar; size_t idx; } ;
struct TYPE_2__ {struct idt_ntb_bar* bars; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,int,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ,size_t) ;
 int FUNC_2 (struct idt_ntb_dev*,int ) ;
 int FUNC_3 (struct idt_ntb_dev*,int ,int) ;
 TYPE_1__ VAR_9 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct idt_ntb_dev* FUNC_6 (struct ntb_dev*) ;

__attribute__((used)) static int FUNC_7(struct ntb_dev *VAR_10, int VAR_11,
     int VAR_12)
{
 struct idt_ntb_dev *VAR_13 = FUNC_6(VAR_10);
 struct idt_mw_cfg *VAR_14;

 if (VAR_11 < 0 || VAR_13->peer_cnt <= VAR_11)
  return -VAR_1;

 if (VAR_12 < 0 || VAR_13->mw_cnt <= VAR_12)
  return -VAR_1;

 VAR_14 = &VAR_13->mws[VAR_12];


 if (VAR_14->type == VAR_2) {
  const struct idt_ntb_bar *VAR_15 = &VAR_9.bars[VAR_14->bar];
  u32 VAR_16;

  VAR_16 = FUNC_2(VAR_13, VAR_15->setup);

  FUNC_3(VAR_13, VAR_15->limit, 0);
  if (FUNC_0(VAR_0, VAR_16, 64))
   FUNC_3(VAR_13, (VAR_15 + 1)->limit, 0);
 } else {
  unsigned long VAR_17;
  u32 VAR_18;

  VAR_18 = FUNC_1(VAR_8, 0, VAR_14->idx) |
    FUNC_1(VAR_7, 0, VAR_14->bar);
  FUNC_4(&VAR_13->lut_lock, VAR_17);
  FUNC_3(VAR_13, VAR_5, VAR_18);
  FUNC_3(VAR_13, VAR_3, 0);
  FUNC_3(VAR_13, VAR_4, 0);
  FUNC_3(VAR_13, VAR_6, 0);
  FUNC_5(&VAR_13->lut_lock, VAR_17);
 }

 return 0;
}
