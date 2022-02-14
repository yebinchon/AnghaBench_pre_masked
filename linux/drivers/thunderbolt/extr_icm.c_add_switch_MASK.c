
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uuid_t ;
typedef void* u8 ;
typedef int u64 ;
struct tb_switch {int authorized; int security_level; int boot; int rpm; int dev; int rpm_complete; void* depth; void* link; void* connection_key; void* connection_id; int uuid; int tb; } ;
struct intel_vss {int flags; } ;
typedef enum tb_security_level { ____Placeholder_tb_security_level } tb_security_level ;
struct TYPE_4__ {TYPE_1__* remote; } ;
struct TYPE_3__ {TYPE_2__* remote; } ;


 struct tb_switch* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct tb_switch*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int const*,int,int ) ;
 struct intel_vss* FUNC_4 (void* const*,size_t) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 TYPE_2__* FUNC_8 (int ,struct tb_switch*) ;
 int FUNC_9 (struct tb_switch*) ;
 int FUNC_10 (struct tb_switch*,char*) ;
 int FUNC_11 (struct tb_switch*) ;
 struct tb_switch* FUNC_12 (int ,int *,int ) ;
 int FUNC_13 (struct tb_switch*) ;
 TYPE_1__* FUNC_14 (struct tb_switch*) ;

__attribute__((used)) static struct tb_switch *FUNC_15(struct tb_switch *VAR_2, u64 VAR_3,
        const uuid_t *VAR_4, const u8 *VAR_5,
        size_t VAR_6, u8 VAR_7,
        u8 VAR_8, u8 VAR_9, u8 VAR_10,
        enum tb_security_level VAR_11,
        bool VAR_12, bool VAR_13)
{
 const struct intel_vss *VAR_14;
 struct tb_switch *VAR_15;
 int VAR_16;

 FUNC_5(&VAR_2->dev);

 VAR_15 = FUNC_12(VAR_2->tb, &VAR_2->dev, VAR_3);
 if (FUNC_1(VAR_15))
  goto out;

 VAR_15->uuid = FUNC_3(VAR_4, sizeof(*VAR_4), VAR_0);
 if (!VAR_15->uuid) {
  FUNC_10(VAR_15, "cannot allocate memory for switch\n");
  FUNC_13(VAR_15);
  goto out;
 }
 VAR_15->connection_id = VAR_7;
 VAR_15->connection_key = VAR_8;
 VAR_15->link = VAR_9;
 VAR_15->depth = VAR_10;
 VAR_15->authorized = VAR_12;
 VAR_15->security_level = VAR_11;
 VAR_15->boot = VAR_13;
 FUNC_2(&VAR_15->rpm_complete);

 VAR_14 = FUNC_4(VAR_5, VAR_6);
 if (VAR_14)
  VAR_15->rpm = !!(VAR_14->flags & VAR_1);


 FUNC_8(VAR_3, VAR_2)->remote = FUNC_14(VAR_15);
 FUNC_14(VAR_15)->remote = FUNC_8(VAR_3, VAR_2);

 VAR_16 = FUNC_11(VAR_15);
 if (VAR_16) {
  FUNC_8(FUNC_9(VAR_15), VAR_2)->remote = ((void*)0);
  FUNC_13(VAR_15);
  VAR_15 = FUNC_0(VAR_16);
 }

out:
 FUNC_6(&VAR_2->dev);
 FUNC_7(&VAR_2->dev);

 return VAR_15;
}
