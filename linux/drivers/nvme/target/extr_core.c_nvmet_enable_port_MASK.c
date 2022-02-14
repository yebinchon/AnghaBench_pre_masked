
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t trtype; } ;
struct nvmet_port {scalar_t__ inline_data_size; int enabled; struct nvmet_fabrics_ops const* tr_ops; TYPE_1__ disc_addr; } ;
struct nvmet_fabrics_ops {int (* add_port ) (struct nvmet_port*) ;int owner; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 struct nvmet_fabrics_ops** VAR_2 ;
 int FUNC_3 (char*,size_t) ;
 int FUNC_4 (char*,size_t) ;
 int FUNC_5 (struct nvmet_port*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct nvmet_port *VAR_3)
{
 const struct nvmet_fabrics_ops *VAR_4;
 int VAR_5;

 FUNC_1(&VAR_1);

 VAR_4 = VAR_2[VAR_3->disc_addr.trtype];
 if (!VAR_4) {
  FUNC_7(&VAR_1);
  FUNC_4("nvmet-transport-%d", VAR_3->disc_addr.trtype);
  FUNC_0(&VAR_1);
  VAR_4 = VAR_2[VAR_3->disc_addr.trtype];
  if (!VAR_4) {
   FUNC_3("transport type %d not supported\n",
    VAR_3->disc_addr.trtype);
   return -VAR_0;
  }
 }

 if (!FUNC_6(VAR_4->owner))
  return -VAR_0;

 VAR_5 = VAR_4->add_port(VAR_3);
 if (VAR_5) {
  FUNC_2(VAR_4->owner);
  return VAR_5;
 }


 if (VAR_3->inline_data_size < 0)
  VAR_3->inline_data_size = 0;

 VAR_3->enabled = 1;
 VAR_3->tr_ops = VAR_4;
 return 0;
}
