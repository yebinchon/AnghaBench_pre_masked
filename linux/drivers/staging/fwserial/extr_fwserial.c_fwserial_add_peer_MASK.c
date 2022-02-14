
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct virt_plug_params {int dummy; } ;
struct fwtty_port {int dummy; } ;
struct fwtty_peer {int guid; int generation; unsigned long long mgmt_addr; int connect; int lock; struct fwtty_port* port; struct fw_unit* unit; int list; struct fw_serial* serial; int work; int timer; int node_id; int speed; int max_payload; } ;
struct device {int dummy; } ;
struct fw_unit {int directory; struct device device; } ;
struct fw_serial {struct fwtty_peer* self; int peer_list; } ;
struct fw_device {int* config_rom; int generation; scalar_t__ is_local; int node_id; int max_speed; } ;
struct fw_csr_iterator {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct fwtty_port*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (struct device*,struct fwtty_peer*) ;
 int FUNC_4 (struct fw_device*) ;
 int FUNC_5 (struct virt_plug_params*,struct fwtty_port*) ;
 int FUNC_6 (struct fw_csr_iterator*,int ) ;
 scalar_t__ FUNC_7 (struct fw_csr_iterator*,int*,int*) ;
 struct fw_device* FUNC_8 (struct fw_unit*) ;
 int VAR_9 ;
 struct fwtty_port* FUNC_9 (struct fwtty_peer*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_10 (struct fwtty_peer*,struct virt_plug_params*) ;
 int FUNC_11 (struct fw_unit**,char*,unsigned long long) ;
 int FUNC_12 (struct fwtty_port*) ;
 struct fwtty_peer* FUNC_13 (int,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int ,int ) ;
 int VAR_12 ;
 int FUNC_17 (struct fwtty_peer*,int ) ;
 int FUNC_18 (int *,int) ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_25(struct fw_serial *VAR_13, struct fw_unit *VAR_14)
{
 struct device *VAR_15 = &VAR_14->device;
 struct fw_device *VAR_16 = FUNC_8(VAR_14);
 struct fwtty_peer *VAR_17;
 struct fw_csr_iterator VAR_18;
 int VAR_19, VAR_20;
 int VAR_21;

 VAR_17 = FUNC_13(sizeof(*VAR_17), VAR_6);
 if (!VAR_17)
  return -VAR_3;

 FUNC_17(VAR_17, VAR_4);

 FUNC_3(VAR_15, VAR_17);
 VAR_17->unit = VAR_14;
 VAR_17->guid = (u64)VAR_16->config_rom[3] << 32 | VAR_16->config_rom[4];
 VAR_17->speed = VAR_16->max_speed;
 VAR_17->max_payload = FUNC_16(FUNC_4(VAR_16),
    FUNC_14(VAR_17->speed));

 VAR_21 = VAR_16->generation;
 FUNC_19();
 VAR_17->node_id = VAR_16->node_id;
 FUNC_20();
 VAR_17->generation = VAR_21;


 FUNC_6(&VAR_18, VAR_14->directory);
 while (FUNC_7(&VAR_18, &VAR_19, &VAR_20)) {
  if (VAR_19 == (VAR_1 | VAR_0)) {
   VAR_17->mgmt_addr = VAR_2 + 4 * VAR_20;
   break;
  }
 }
 if (VAR_17->mgmt_addr == 0ULL) {




  FUNC_17(VAR_17, VAR_5);
 }

 FUNC_22(&VAR_17->lock);
 VAR_17->port = ((void*)0);

 FUNC_24(&VAR_17->timer, VAR_11, 0);
 FUNC_1(&VAR_17->work, VAR_10);
 FUNC_0(&VAR_17->connect, VAR_9);


 VAR_17->serial = VAR_13;
 FUNC_15(&VAR_17->list, &VAR_13->peer_list);

 FUNC_11(&VAR_17->unit, "peer added (guid:%016llx)\n",
     (unsigned long long)VAR_17->guid);


 if (VAR_16->is_local) {
  VAR_13->self = VAR_17;
  if (VAR_8) {
   struct fwtty_port *VAR_22;

   VAR_22 = FUNC_9(VAR_17, VAR_12);
   if (!FUNC_2(VAR_22)) {
    struct virt_plug_params VAR_23;

    FUNC_21(&VAR_17->lock);
    VAR_17->port = VAR_22;
    FUNC_5(&VAR_23, VAR_22);
    FUNC_10(VAR_17, &VAR_23);
    FUNC_23(&VAR_17->lock);

    FUNC_12(VAR_22);
   }
  }

 } else if (VAR_7) {

  FUNC_18(&VAR_17->connect, 1);
 }

 return 0;
}
