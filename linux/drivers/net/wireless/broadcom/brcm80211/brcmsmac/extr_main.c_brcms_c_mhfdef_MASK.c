
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct brcms_hardware {int boardflags; TYPE_1__* band; } ;
struct brcms_c_info {struct brcms_hardware* hw; } ;
struct TYPE_2__ {int phyrev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct brcms_c_info *VAR_7, u16 *VAR_8, u16 VAR_9)
{
 struct brcms_hardware *VAR_10 = VAR_7->hw;

 FUNC_2(VAR_8, 0, VAR_6 * sizeof(u16));

 VAR_8[VAR_4] |= VAR_9;


 if (VAR_10->boardflags & VAR_0)
  VAR_8[VAR_1] |= VAR_2;

 if (FUNC_0(VAR_10->band) && FUNC_1(VAR_10->band->phyrev, 2)) {
  VAR_8[VAR_4] |= VAR_5;
  VAR_8[VAR_1] |= VAR_3;
 }
}
