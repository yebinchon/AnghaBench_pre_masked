
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int size; int start; } ;
struct TYPE_7__ {int size; int start; } ;
struct TYPE_6__ {int size; int start; } ;
struct TYPE_5__ {int size; int start; } ;
struct wlcore_partition_set {TYPE_4__ mem3; TYPE_3__ mem2; TYPE_2__ reg; TYPE_1__ mem; } ;
struct wl1271 {int curr_part; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,struct wlcore_partition_set const*,int) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (struct wl1271*,int ,int ) ;

int FUNC_3(struct wl1271 *VAR_9,
    const struct wlcore_partition_set *VAR_10)
{
 int VAR_11;


 FUNC_0(&VAR_9->curr_part, VAR_10, sizeof(*VAR_10));

 FUNC_1(VAR_0, "mem_start %08X mem_size %08X",
       VAR_10->mem.start, VAR_10->mem.size);
 FUNC_1(VAR_0, "reg_start %08X reg_size %08X",
       VAR_10->reg.start, VAR_10->reg.size);
 FUNC_1(VAR_0, "mem2_start %08X mem2_size %08X",
       VAR_10->mem2.start, VAR_10->mem2.size);
 FUNC_1(VAR_0, "mem3_start %08X mem3_size %08X",
       VAR_10->mem3.start, VAR_10->mem3.size);

 VAR_11 = FUNC_2(VAR_9, VAR_2, VAR_10->mem.start);
 if (VAR_11 < 0)
  goto out;

 VAR_11 = FUNC_2(VAR_9, VAR_1, VAR_10->mem.size);
 if (VAR_11 < 0)
  goto out;

 VAR_11 = FUNC_2(VAR_9, VAR_4, VAR_10->reg.start);
 if (VAR_11 < 0)
  goto out;

 VAR_11 = FUNC_2(VAR_9, VAR_3, VAR_10->reg.size);
 if (VAR_11 < 0)
  goto out;

 VAR_11 = FUNC_2(VAR_9, VAR_6, VAR_10->mem2.start);
 if (VAR_11 < 0)
  goto out;

 VAR_11 = FUNC_2(VAR_9, VAR_5, VAR_10->mem2.size);
 if (VAR_11 < 0)
  goto out;
 VAR_11 = FUNC_2(VAR_9, VAR_8, VAR_10->mem3.start);
 if (VAR_11 < 0)
  goto out;

 VAR_11 = FUNC_2(VAR_9, VAR_7, VAR_10->mem3.size);
 if (VAR_11 < 0)
  goto out;

out:
 return VAR_11;
}
