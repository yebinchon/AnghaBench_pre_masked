
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct ntb_dev {int dummy; } ;
struct idt_ntb_dev {int* part_idx_map; } ;
struct TYPE_4__ {TYPE_1__* msgs; } ;
struct TYPE_3__ {int in; int src; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (struct idt_ntb_dev*,int ) ;
 TYPE_2__ VAR_2 ;
 struct idt_ntb_dev* FUNC_1 (struct ntb_dev*) ;

__attribute__((used)) static u32 FUNC_2(struct ntb_dev *VAR_3, int *VAR_4, int VAR_5)
{
 struct idt_ntb_dev *VAR_6 = FUNC_1(VAR_3);

 if (VAR_5 < 0 || VAR_1 <= VAR_5)
  return ~(u32)0;


 if (VAR_4 != ((void*)0)) {
  u32 VAR_7;

  VAR_7 = FUNC_0(VAR_6, VAR_2.msgs[VAR_5].src);
  *VAR_4 = VAR_6->part_idx_map[VAR_7];


  if (*VAR_4 == -VAR_0)
   *VAR_4 = 0;
 }


 return FUNC_0(VAR_6, VAR_2.msgs[VAR_5].in);
}
