
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_5__ {TYPE_1__* pdev; } ;
struct idt_ntb_dev {TYPE_2__ ntb; } ;
struct idt_ntb_bar {int setup; } ;
struct idt_mw_cfg {int type; unsigned char bar; unsigned char idx; int size_max; int size_align; int addr_align; } ;
typedef enum idt_mw_type { ____Placeholder_idt_mw_type } idt_mw_type ;
struct TYPE_6__ {struct idt_ntb_bar* bars; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct idt_mw_cfg* FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned char VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int ,int,int) ;
 struct idt_mw_cfg* FUNC_3 (int *,unsigned char,int,int ) ;
 unsigned char FUNC_4 (int) ;
 int FUNC_5 (struct idt_ntb_dev*,int ) ;
 int FUNC_6 (struct idt_mw_cfg*,struct idt_mw_cfg*,unsigned char) ;
 TYPE_3__* VAR_14 ;

__attribute__((used)) static struct idt_mw_cfg *FUNC_7(struct idt_ntb_dev *VAR_15, int VAR_16,
           unsigned char *VAR_17)
{
 struct idt_mw_cfg VAR_18[VAR_10], *VAR_19;
 const struct idt_ntb_bar *VAR_20;
 enum idt_mw_type VAR_21;
 unsigned char VAR_22, VAR_23, VAR_24;
 bool VAR_25 = 0;
 int VAR_26;
 u32 VAR_27;


 VAR_20 = VAR_14[VAR_16].bars;


 *VAR_17 = 0;
 for (VAR_23 = 0; VAR_23 < VAR_8; VAR_23 += 1 + VAR_25) {

  VAR_27 = FUNC_5(VAR_15, VAR_20[VAR_23].setup);


  if (!(VAR_27 & VAR_6)) {
   VAR_25 = 0;
   continue;
  }


  VAR_25 = FUNC_2(VAR_2, VAR_27, 64);


  if (VAR_27 & VAR_7)
   continue;


  VAR_21 = FUNC_1(VAR_0, VAR_27);
  VAR_24 = FUNC_4(VAR_21);
  VAR_26 = (u64)1 << FUNC_1(VAR_1, VAR_27);


  for (VAR_22 = 0; VAR_22 < VAR_24; VAR_22++, (*VAR_17)++) {




   if (*VAR_17 >= VAR_10)
    return FUNC_0(-VAR_3);


   VAR_18[*VAR_17].type = VAR_21;
   VAR_18[*VAR_17].bar = VAR_23;
   VAR_18[*VAR_17].idx = VAR_22;

   VAR_18[*VAR_17].addr_align = VAR_13;

   if (VAR_21 == VAR_11)
    VAR_18[*VAR_17].size_max = VAR_26;
   else if (VAR_21 == VAR_12)
    VAR_18[*VAR_17].size_max = VAR_26 / 16;
   else
    VAR_18[*VAR_17].size_max = VAR_26 / 32;
   VAR_18[*VAR_17].size_align = (VAR_21 == VAR_11) ?
    VAR_9 : VAR_18[*VAR_17].size_max;
  }
 }


 VAR_19 = FUNC_3(&VAR_15->ntb.pdev->dev, *VAR_17, sizeof(*VAR_19),
          VAR_5);
 if (!VAR_19)
  return FUNC_0(-VAR_4);


 FUNC_6(VAR_19, VAR_18, (*VAR_17)*sizeof(*VAR_19));

 return VAR_19;
}
