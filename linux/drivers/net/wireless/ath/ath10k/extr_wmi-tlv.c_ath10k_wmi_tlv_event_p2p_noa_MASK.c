
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_tlv_p2p_noa_ev {int vdev_id; } ;
struct wmi_p2p_noa_info {int num_descriptors; } ;
struct sk_buff {int len; int data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void const**) ;
 int FUNC_1 (void const**) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ath10k*,int ,char*,int,int ) ;
 int FUNC_4 (struct ath10k*,int,struct wmi_p2p_noa_info const*) ;
 int FUNC_5 (struct ath10k*,char*,int) ;
 void** FUNC_6 (struct ath10k*,int ,int ,int ) ;
 int FUNC_7 (void const**) ;

__attribute__((used)) static int FUNC_8(struct ath10k *VAR_5,
     struct sk_buff *VAR_6)
{
 const void **VAR_7;
 const struct wmi_tlv_p2p_noa_ev *VAR_8;
 const struct wmi_p2p_noa_info *VAR_9;
 int VAR_10, VAR_11;

 VAR_7 = FUNC_6(VAR_5, VAR_6->data, VAR_6->len, VAR_2);
 if (FUNC_0(VAR_7)) {
  VAR_10 = FUNC_1(VAR_7);
  FUNC_5(VAR_5, "failed to parse tlv: %d\n", VAR_10);
  return VAR_10;
 }

 VAR_8 = VAR_7[VAR_3];
 VAR_9 = VAR_7[VAR_4];

 if (!VAR_8 || !VAR_9) {
  FUNC_7(VAR_7);
  return -VAR_1;
 }

 VAR_11 = FUNC_2(VAR_8->vdev_id);

 FUNC_3(VAR_5, VAR_0,
     "wmi tlv p2p noa vdev_id %i descriptors %hhu\n",
     VAR_11, VAR_9->num_descriptors);

 FUNC_4(VAR_5, VAR_11, VAR_9);
 FUNC_7(VAR_7);
 return 0;
}
