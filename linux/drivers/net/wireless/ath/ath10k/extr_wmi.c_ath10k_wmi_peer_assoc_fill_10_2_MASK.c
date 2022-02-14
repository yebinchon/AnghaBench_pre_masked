
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wmi_peer_assoc_complete_arg {int dummy; } ;
struct wmi_10_2_peer_assoc_complete_cmd {int info0; } ;
struct ath10k {int dummy; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ath10k*,void*,struct wmi_peer_assoc_complete_arg const*) ;

__attribute__((used)) static void
FUNC_3(struct ath10k *VAR_2, void *VAR_3,
    const struct wmi_peer_assoc_complete_arg *VAR_4)
{
 struct wmi_10_2_peer_assoc_complete_cmd *VAR_5 = VAR_3;
 int VAR_6, VAR_7;
 u32 VAR_8;


 VAR_6 = 0xf;
 VAR_7 = 0xf;

 VAR_8 = FUNC_0(VAR_6, VAR_0) |
  FUNC_0(VAR_7, VAR_1);

 FUNC_2(VAR_2, VAR_3, VAR_4);
 VAR_5->info0 = FUNC_1(VAR_8);
}
