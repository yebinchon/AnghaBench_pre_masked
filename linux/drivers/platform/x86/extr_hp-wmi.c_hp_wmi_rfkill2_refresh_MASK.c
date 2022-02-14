
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bios_rfkill2_state {int count; struct bios_rfkill2_device_state* device; } ;
struct bios_rfkill2_device_state {scalar_t__ rfkill_id; int power; } ;
typedef int state ;
struct TYPE_2__ {int num; scalar_t__ id; int rfkill; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,struct bios_rfkill2_state*,int ,int) ;
 int FUNC_3 (char*) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(void)
{
 struct bios_rfkill2_state VAR_4;
 int VAR_5, VAR_6;

 VAR_5 = FUNC_2(VAR_1, VAR_0, &VAR_4,
       0, sizeof(VAR_4));
 if (VAR_5)
  return VAR_5;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  int VAR_7 = VAR_2[VAR_6].num;
  struct bios_rfkill2_device_state *VAR_8;
  VAR_8 = &VAR_4.device[VAR_7];

  if (VAR_7 >= VAR_4.count ||
      VAR_8->rfkill_id != VAR_2[VAR_6].id) {
   FUNC_3("power configuration of the wireless devices unexpectedly changed\n");
   continue;
  }

  FUNC_4(VAR_2[VAR_6].rfkill,
      FUNC_1(VAR_8->power),
      FUNC_0(VAR_8->power));
 }

 return 0;
}
