
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
 size_t VAR_4 ;
 unsigned long long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;





 unsigned long long FUNC_0 (size_t) ;
 void* FUNC_1 (unsigned long long) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct domain_device*) ;
 int FUNC_4 (struct device*,char*,int) ;
 int FUNC_5 (size_t*,int ,int ) ;
 int FUNC_6 (struct hisi_sas_itct*,int ,int) ;
 struct hisi_sas_port* FUNC_7 (struct asd_sas_port*) ;

__attribute__((used)) static void FUNC_8(struct hisi_hba *VAR_13,
        struct hisi_sas_device *VAR_14)
{
 struct domain_device *VAR_15 = VAR_14->sas_device;
 struct device *VAR_16 = VAR_13->dev;
 u64 VAR_17, VAR_18 = VAR_14->device_id;
 struct hisi_sas_itct *VAR_19 = &VAR_13->itct[VAR_18];
 struct domain_device *VAR_20 = VAR_15->parent;
 struct asd_sas_port *VAR_21 = VAR_15->port;
 struct hisi_sas_port *VAR_22 = FUNC_7(VAR_21);
 u64 VAR_23;

 FUNC_6(VAR_19, 0, sizeof(*VAR_19));


 VAR_17 = 0;
 switch (VAR_14->dev_type) {
 case 131:
 case 132:
 case 130:
  VAR_17 = VAR_1 << VAR_4;
  break;
 case 129:
 case 128:
  if (VAR_20 && FUNC_2(VAR_20->dev_type))
   VAR_17 = VAR_2 << VAR_4;
  else
   VAR_17 = VAR_0 << VAR_4;
  break;
 default:
  FUNC_4(VAR_16, "setup itct: unsupported dev type (%d)\n",
    VAR_14->dev_type);
 }

 VAR_17 |= ((1 << VAR_10) |
  (VAR_15->linkrate << VAR_6) |
  (1 << VAR_11) |
  (0xfa << VAR_9) |
  (1 << VAR_3) |
  (VAR_22->id << VAR_7));
 VAR_19->qw0 = FUNC_1(VAR_17);


 FUNC_5(&VAR_23, VAR_15->sas_addr, VAR_12);
 VAR_19->sas_addr = FUNC_1(FUNC_0(VAR_23));


 if (!FUNC_3(VAR_15))
  VAR_19->qw2 = FUNC_1((5000ULL << VAR_5) |
     (0x1ULL << VAR_8));
}
