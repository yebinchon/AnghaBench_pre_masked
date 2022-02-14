
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u64 ;
struct hisi_sas_port {int id; } ;
struct hisi_sas_itct {void* qw2; void* sas_addr; void* qw0; } ;
struct hisi_sas_device {size_t device_id; int dev_type; struct domain_device* sas_device; } ;
struct hisi_hba {struct hisi_sas_itct* itct; struct device* dev; } ;
struct domain_device {int linkrate; int sas_addr; int dev_type; struct asd_sas_port* port; struct domain_device* parent; } ;
struct device {int dummy; } ;
struct asd_sas_port {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 unsigned long long VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;





 unsigned long long FUNC_0 (size_t) ;
 void* FUNC_1 (unsigned long long) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct domain_device*) ;
 int FUNC_4 (struct device*,char*,int) ;
 int FUNC_5 (size_t*,int ,int ) ;
 int FUNC_6 (struct hisi_sas_itct*,int ,int) ;
 struct hisi_sas_port* FUNC_7 (struct asd_sas_port*) ;

__attribute__((used)) static void FUNC_8(struct hisi_hba *VAR_16,
        struct hisi_sas_device *VAR_17)
{
 struct domain_device *VAR_18 = VAR_17->sas_device;
 struct device *VAR_19 = VAR_16->dev;
 u64 VAR_20, VAR_21 = VAR_17->device_id;
 struct hisi_sas_itct *VAR_22 = &VAR_16->itct[VAR_21];
 struct domain_device *VAR_23 = VAR_18->parent;
 struct asd_sas_port *VAR_24 = VAR_18->port;
 struct hisi_sas_port *VAR_25 = FUNC_7(VAR_24);
 u64 VAR_26;

 FUNC_6(VAR_22, 0, sizeof(*VAR_22));


 VAR_20 = 0;
 switch (VAR_17->dev_type) {
 case 131:
 case 132:
 case 130:
  VAR_20 = VAR_1 << VAR_5;
  break;
 case 129:
 case 128:
  if (VAR_23 && FUNC_2(VAR_23->dev_type))
   VAR_20 = VAR_2 << VAR_5;
  else
   VAR_20 = VAR_0 << VAR_5;
  break;
 default:
  FUNC_4(VAR_19, "setup itct: unsupported dev type (%d)\n",
    VAR_17->dev_type);
 }

 VAR_20 |= ((1 << VAR_13) |
  (VAR_18->linkrate << VAR_7) |
  (1 << VAR_14) |
  (VAR_11 << VAR_12) |
  (1 << VAR_3) |
  (VAR_25->id << VAR_9));
 VAR_22->qw0 = FUNC_1(VAR_20);


 FUNC_5(&VAR_26, VAR_18->sas_addr, VAR_15);
 VAR_22->sas_addr = FUNC_1(FUNC_0(VAR_26));


 if (!FUNC_3(VAR_18))
  VAR_22->qw2 = FUNC_1((5000ULL << VAR_6) |
     (0x1ULL << VAR_4) |
     (0x32ULL << VAR_8) |
     (0x1ULL << VAR_10));
}
