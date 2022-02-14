
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct bnxt {int cp_nr_rings; TYPE_1__* grp_info; } ;
struct TYPE_2__ {int cp_fw_ring_id; } ;


 int FUNC_0 (struct bnxt*,int ) ;

__attribute__((used)) static int FUNC_1(struct bnxt *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->cp_nr_rings; VAR_1++) {
  u16 VAR_2 = VAR_0->grp_info[VAR_1].cp_fw_ring_id;
  int VAR_3;

  VAR_3 = FUNC_0(VAR_0, VAR_2);
  if (VAR_3)
   return VAR_3;
 }
 return 0;
}
