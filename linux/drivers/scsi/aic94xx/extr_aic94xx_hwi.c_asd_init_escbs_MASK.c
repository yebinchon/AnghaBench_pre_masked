
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct asd_seq_data {int num_escbs; int num_edbs; int pending; int can_queue; } ;
struct TYPE_2__ {int num_phys; int max_scbs; } ;
struct asd_ha_struct {TYPE_1__ hw_prof; struct asd_seq_data seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct asd_ha_struct*,int ) ;
 int FUNC_1 (struct asd_ha_struct*,int ) ;
 int FUNC_2 (struct asd_ha_struct*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct asd_ha_struct *VAR_2)
{
 struct asd_seq_data *VAR_3 = &VAR_2->seq;
 int VAR_4 = 0;


 int VAR_5 = 2*(1+VAR_2->hw_prof.num_phys);

 VAR_3->num_escbs = (VAR_5+VAR_0-1)/VAR_0;
 VAR_3->num_edbs = VAR_3->num_escbs * VAR_0;

 VAR_4 = FUNC_0(VAR_2, VAR_1);
 if (VAR_4) {
  FUNC_3("couldn't allocate edbs\n");
  return VAR_4;
 }

 VAR_4 = FUNC_1(VAR_2, VAR_1);
 if (VAR_4) {
  FUNC_3("couldn't allocate escbs\n");
  return VAR_4;
 }

 FUNC_2(VAR_2);





 VAR_3->pending = VAR_3->num_escbs;
 VAR_3->can_queue = 1 + (VAR_2->hw_prof.max_scbs - VAR_3->pending)/2;

 return 0;
}
