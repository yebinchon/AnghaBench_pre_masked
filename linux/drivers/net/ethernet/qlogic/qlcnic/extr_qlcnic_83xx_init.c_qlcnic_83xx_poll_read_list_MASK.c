
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_adapter {TYPE_2__* ahw; } ;
struct qlc_83xx_quad_entry {unsigned long dr_addr; int ar_addr; int ar_value; } ;
struct qlc_83xx_poll {int status; int mask; } ;
struct qlc_83xx_entry_hdr {int count; scalar_t__ delay; } ;
struct TYPE_3__ {int array_index; int* array; } ;
struct TYPE_4__ {TYPE_1__ reset; } ;


 int VAR_0 ;
 int FUNC_0 (struct qlcnic_adapter*,unsigned long,int*) ;
 int VAR_1 ;
 int FUNC_1 (struct qlcnic_adapter*,int ,long,int ,int ) ;
 int FUNC_2 (struct qlcnic_adapter*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct qlcnic_adapter *VAR_2,
           struct qlc_83xx_entry_hdr *VAR_3)
{
 long VAR_4;
 int VAR_5, VAR_6, VAR_7, VAR_8;
 struct qlc_83xx_quad_entry *VAR_9;
 struct qlc_83xx_poll *VAR_10;
 unsigned long VAR_11;

 VAR_10 = (struct qlc_83xx_poll *)((char *)VAR_3 +
     sizeof(struct qlc_83xx_entry_hdr));

 VAR_9 = (struct qlc_83xx_quad_entry *)((char *)VAR_10 +
            sizeof(struct qlc_83xx_poll));
 VAR_4 = (long)VAR_3->delay;

 for (VAR_6 = 0; VAR_6 < VAR_3->count; VAR_6++, VAR_9++) {
  FUNC_2(VAR_2, VAR_9->ar_addr,
          VAR_9->ar_value);
  if (VAR_4) {
   if (!FUNC_1(VAR_2, VAR_9->ar_addr, VAR_4,
        VAR_10->mask, VAR_10->status)){
    VAR_5 = VAR_2->ahw->reset.array_index;
    VAR_11 = VAR_9->dr_addr;
    VAR_7 = FUNC_0(VAR_2, VAR_11, &VAR_8);
    if (VAR_8 == -VAR_0)
     return;

    VAR_2->ahw->reset.array[VAR_5++] = VAR_7;

    if (VAR_5 == VAR_1)
     VAR_2->ahw->reset.array_index = 1;
   }
  }
 }
}
