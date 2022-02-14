
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_pno_scan_req {int enable; } ;
struct ath10k_vif {int vdev_type; int vdev_id; struct ath10k* ar; } ;
struct ath10k {int nlo_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (struct ath10k*,int ,struct wmi_pno_scan_req*) ;
 int FUNC_1 (struct wmi_pno_scan_req*) ;
 struct wmi_pno_scan_req* FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct ath10k_vif *VAR_2)
{
 int VAR_3 = 0;
 struct ath10k *VAR_4 = VAR_2->ar;

 switch (VAR_2->vdev_type) {
 case 128:
  if (VAR_4->nlo_enabled) {
   struct wmi_pno_scan_req *VAR_5;

   VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1);
   if (!VAR_5)
    return -VAR_0;

   VAR_5->enable = 0;
   VAR_4->nlo_enabled = 0;
   VAR_3 = FUNC_0(VAR_4, VAR_2->vdev_id, VAR_5);
   FUNC_1(VAR_5);
  }
  break;
 default:
  break;
 }
 return VAR_3;
}
