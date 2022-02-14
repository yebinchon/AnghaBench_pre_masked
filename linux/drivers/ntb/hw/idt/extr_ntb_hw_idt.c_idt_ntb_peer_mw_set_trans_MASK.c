
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ntb_dev {int pdev; } ;
struct idt_ntb_dev {int peer_cnt; int mw_cnt; int lut_lock; TYPE_1__* peers; struct idt_mw_cfg* mws; } ;
struct idt_ntb_bar {int limit; int utbase; int ltbase; int setup; } ;
struct idt_mw_cfg {scalar_t__ size_max; scalar_t__ type; size_t bar; size_t idx; int size_align; int addr_align; } ;
typedef scalar_t__ resource_size_t ;
struct TYPE_4__ {struct idt_ntb_bar* bars; } ;
struct TYPE_3__ {size_t part; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ,int,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ,int,size_t) ;
 int FUNC_3 (struct idt_ntb_dev*,int ) ;
 int FUNC_4 (struct idt_ntb_dev*,int ,int) ;
 TYPE_2__ VAR_12 ;
 scalar_t__ FUNC_5 (int ,size_t) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 struct idt_ntb_dev* FUNC_8 (struct ntb_dev*) ;

__attribute__((used)) static int FUNC_9(struct ntb_dev *VAR_13, int VAR_14, int VAR_15,
         u64 VAR_16, resource_size_t VAR_17)
{
 struct idt_ntb_dev *VAR_18 = FUNC_8(VAR_13);
 struct idt_mw_cfg *VAR_19;
 u32 VAR_20 = 0, VAR_21 = 0;

 if (VAR_14 < 0 || VAR_18->peer_cnt <= VAR_14)
  return -VAR_2;

 if (VAR_15 < 0 || VAR_18->mw_cnt <= VAR_15)
  return -VAR_2;





 VAR_19 = &VAR_18->mws[VAR_15];
 if (!FUNC_0(VAR_16, VAR_19->addr_align))
  return -VAR_2;
 if (!FUNC_0(VAR_17, VAR_19->size_align) || VAR_17 > VAR_19->size_max)
  return -VAR_2;


 if (VAR_19->type == VAR_4) {
  const struct idt_ntb_bar *VAR_22 = &VAR_12.bars[VAR_19->bar];
  u64 VAR_23;

  VAR_20 = FUNC_3(VAR_18, VAR_22->setup);
  VAR_20 = FUNC_2(VAR_0, VAR_20, VAR_18->peers[VAR_14].part);
  FUNC_4(VAR_18, VAR_22->setup, VAR_20);

  FUNC_4(VAR_18, VAR_22->ltbase, (u32)VAR_16);
  FUNC_4(VAR_18, VAR_22->utbase, (u32)(VAR_16 >> 32));

  VAR_23 = FUNC_5(VAR_13->pdev, VAR_19->bar) + VAR_17;
  FUNC_4(VAR_18, VAR_22->limit, (u32)VAR_23);
  if (FUNC_1(VAR_1, VAR_20, 64))
   FUNC_4(VAR_18, (VAR_22 + 1)->limit, (VAR_23 >> 32));
 } else {
  unsigned long VAR_24;

  VAR_21 = FUNC_2(VAR_10, 0, VAR_19->idx) |
    FUNC_2(VAR_9, 0, VAR_19->bar);
  VAR_20 = FUNC_2(VAR_11, 0, VAR_18->peers[VAR_14].part) |
   VAR_3;
  FUNC_6(&VAR_18->lut_lock, VAR_24);
  FUNC_4(VAR_18, VAR_7, VAR_21);
  FUNC_4(VAR_18, VAR_5, (u32)VAR_16);
  FUNC_4(VAR_18, VAR_6, (u32)(VAR_16 >> 32));
  FUNC_4(VAR_18, VAR_8, VAR_20);
  FUNC_7(&VAR_18->lut_lock, VAR_24);

 }

 return 0;
}
