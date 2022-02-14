
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct wl1271_cmd_header {scalar_t__ status; int id; } ;
struct wl1271 {scalar_t__ state; int cmd_box_addr; TYPE_1__* ops; int flags; } ;
struct TYPE_2__ {int (* trigger_cmd ) (struct wl1271*,int ,void*,size_t) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (scalar_t__) ;
 unsigned long VAR_10 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 unsigned long FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct wl1271*,int ,void*,size_t) ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (unsigned long,unsigned long) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (struct wl1271*,int ,struct wl1271_cmd_header*,size_t,int) ;
 int FUNC_13 (struct wl1271*,int ,int*) ;
 int FUNC_14 (struct wl1271*,int ,void*,size_t,int) ;
 int FUNC_15 (struct wl1271*,int ,int) ;

__attribute__((used)) static int FUNC_16(struct wl1271 *VAR_11, u16 VAR_12, void *VAR_13,
        size_t VAR_14, size_t VAR_15)
{
 struct wl1271_cmd_header *VAR_16;
 unsigned long VAR_17;
 u32 VAR_18;
 int VAR_19;
 u16 VAR_20;
 u16 VAR_21 = 0;

 if (FUNC_10(VAR_11->state == VAR_9 &&
       VAR_12 != VAR_0))
  return -VAR_1;

 if (FUNC_1(VAR_14 < sizeof(*VAR_16)))
  return -VAR_1;

 VAR_16 = VAR_13;
 VAR_16->id = FUNC_2(VAR_12);
 VAR_16->status = 0;

 FUNC_0(VAR_14 % 4 != 0);
 FUNC_0(FUNC_7(VAR_8, &VAR_11->flags));

 VAR_19 = FUNC_14(VAR_11, VAR_11->cmd_box_addr, VAR_13, VAR_14, 0);
 if (VAR_19 < 0)
  return VAR_19;





 VAR_19 = VAR_11->ops->trigger_cmd(VAR_11, VAR_11->cmd_box_addr, VAR_13, VAR_14);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_17 = VAR_10 + FUNC_4(VAR_7);

 VAR_19 = FUNC_13(VAR_11, VAR_4, &VAR_18);
 if (VAR_19 < 0)
  return VAR_19;

 while (!(VAR_18 & VAR_5)) {
  if (FUNC_8(VAR_10, VAR_17)) {
   FUNC_11("command complete timeout");
   return -VAR_2;
  }

  VAR_21++;
  if (VAR_21 < VAR_6)
   FUNC_9(10);
  else
   FUNC_5(1);

  VAR_19 = FUNC_13(VAR_11, VAR_4, &VAR_18);
  if (VAR_19 < 0)
   return VAR_19;
 }


 if (VAR_15 == 0)
  VAR_15 = sizeof(struct wl1271_cmd_header);

 VAR_19 = FUNC_12(VAR_11, VAR_11->cmd_box_addr, VAR_16, VAR_15, 0);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_20 = FUNC_3(VAR_16->status);

 VAR_19 = FUNC_15(VAR_11, VAR_3,
          VAR_5);
 if (VAR_19 < 0)
  return VAR_19;

 return VAR_20;
}
