
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u64 ;
struct hisi_sas_port {int id; } ;
struct hisi_sas_itct {void* qw2; void* sas_addr; void* qw0; } ;
struct hisi_sas_device {size_t device_id; int dev_type; struct domain_device* sas_device; } ;
struct hisi_hba {struct hisi_sas_itct* itct; struct device* dev; } ;
struct domain_device {int max_linkrate; int sas_addr; struct asd_sas_port* port; } ;
struct device {int dummy; } ;
struct asd_sas_port {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 unsigned long long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;



 unsigned long long FUNC_0 (size_t) ;
 void* FUNC_1 (unsigned long long) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (size_t*,int ,int ) ;
 int FUNC_4 (struct hisi_sas_itct*,int ,int) ;
 struct hisi_sas_port* FUNC_5 (struct asd_sas_port*) ;

__attribute__((used)) static void FUNC_6(struct hisi_hba *VAR_12,
        struct hisi_sas_device *VAR_13)
{
 struct domain_device *VAR_14 = VAR_13->sas_device;
 struct device *VAR_15 = VAR_12->dev;
 u64 VAR_16, VAR_17 = VAR_13->device_id;
 struct hisi_sas_itct *VAR_18 = &VAR_12->itct[VAR_17];
 struct asd_sas_port *VAR_19 = VAR_14->port;
 struct hisi_sas_port *VAR_20 = FUNC_5(VAR_19);
 u64 VAR_21;

 FUNC_4(VAR_18, 0, sizeof(*VAR_18));


 VAR_16 = 0;
 switch (VAR_13->dev_type) {
 case 129:
 case 130:
 case 128:
  VAR_16 = VAR_0 << VAR_3;
  break;
 default:
  FUNC_2(VAR_15, "setup itct: unsupported dev type (%d)\n",
    VAR_13->dev_type);
 }

 VAR_16 |= ((1 << VAR_10) |
  (1 << VAR_1) |
  (VAR_14->max_linkrate << VAR_5) |
  (1 << VAR_9) |
  (VAR_20->id << VAR_7));
 VAR_18->qw0 = FUNC_1(VAR_16);


 FUNC_3(&VAR_21, VAR_14->sas_addr, VAR_11);
 VAR_18->sas_addr = FUNC_1(FUNC_0(VAR_21));


 VAR_18->qw2 = FUNC_1((500ULL << VAR_4) |
    (0xff00ULL << VAR_2) |
    (0xff00ULL << VAR_6) |
    (0xff00ULL << VAR_8));
}
