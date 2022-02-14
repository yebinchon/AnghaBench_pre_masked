
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mlxsw_sp_span_inspected_port {int type; int bound; int list; int local_port; } ;
struct mlxsw_sp_span_entry {int bound_ports_list; } ;
struct mlxsw_sp_port {int local_port; TYPE_2__* dev; struct mlxsw_sp* mlxsw_sp; } ;
struct TYPE_3__ {int entries_count; struct mlxsw_sp_span_entry* entries; } ;
struct mlxsw_sp {int core; TYPE_1__ span; } ;
typedef enum mlxsw_sp_span_type { ____Placeholder_mlxsw_sp_span_type } mlxsw_sp_span_type ;
struct TYPE_4__ {int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct mlxsw_sp_span_inspected_port* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (int ,int ,char*) ;
 scalar_t__ FUNC_5 (struct mlxsw_sp_span_entry*,int,struct mlxsw_sp_port*,int) ;
 int FUNC_6 (struct mlxsw_sp_port*,struct mlxsw_sp_span_entry*,int,int) ;
 int FUNC_7 (struct mlxsw_sp*,int ) ;
 int FUNC_8 (TYPE_2__*,char*) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_9(struct mlxsw_sp_port *VAR_6,
     struct mlxsw_sp_span_entry *VAR_7,
     enum mlxsw_sp_span_type VAR_8,
     bool VAR_9)
{
 struct mlxsw_sp_span_inspected_port *VAR_10;
 struct mlxsw_sp *VAR_11 = VAR_6->mlxsw_sp;
 char VAR_12[VAR_3];
 int VAR_13;
 int VAR_14;




 if (VAR_9)
  for (VAR_13 = 0; VAR_13 < VAR_11->span.entries_count; VAR_13++) {
   struct mlxsw_sp_span_entry *VAR_15 =
    &VAR_11->span.entries[VAR_13];

   if (FUNC_5(VAR_15, VAR_8,
        VAR_6, VAR_9))
    return -VAR_0;
  }


 if (VAR_8 == VAR_4) {
  u32 VAR_16 = FUNC_7(VAR_11,
            VAR_6->dev->mtu);

  FUNC_3(VAR_12, VAR_6->local_port, VAR_16);
  VAR_14 = FUNC_4(VAR_11->core, FUNC_0(VAR_5), VAR_12);
  if (VAR_14) {
   FUNC_8(VAR_6->dev, "Could not create shared buffer for mirroring\n");
   return VAR_14;
  }
 }

 if (VAR_9) {
  VAR_14 = FUNC_6(VAR_6, VAR_7, VAR_8,
       1);
  if (VAR_14)
   goto err_port_bind;
 }

 VAR_10 = FUNC_1(sizeof(*VAR_10), VAR_2);
 if (!VAR_10) {
  VAR_14 = -VAR_1;
  goto err_inspected_port_alloc;
 }
 VAR_10->local_port = VAR_6->local_port;
 VAR_10->type = VAR_8;
 VAR_10->bound = VAR_9;
 FUNC_2(&VAR_10->list, &VAR_7->bound_ports_list);

 return 0;

err_inspected_port_alloc:
 if (VAR_9)
  FUNC_6(VAR_6, VAR_7, VAR_8,
        0);
err_port_bind:
 if (VAR_8 == VAR_4) {
  FUNC_3(VAR_12, VAR_6->local_port, 0);
  FUNC_4(VAR_11->core, FUNC_0(VAR_5), VAR_12);
 }
 return VAR_14;
}
