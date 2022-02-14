
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct igb_adapter {TYPE_1__* vf_data; } ;
struct TYPE_2__ {unsigned char* vf_mac_addresses; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (struct igb_adapter*,size_t) ;

__attribute__((used)) static void FUNC_2(struct igb_adapter *VAR_1, u32 VAR_2)
{
 unsigned char *VAR_3 = VAR_1->vf_data[VAR_2].vf_mac_addresses;


 if (!(VAR_1->vf_data[VAR_2].flags & VAR_0))
  FUNC_0(VAR_3);


 FUNC_1(VAR_1, VAR_2);
}
