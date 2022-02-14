
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wusb_keydvt_out {int dummy; } ;
struct wusb_keydvt_in {int dummy; } ;
struct aes_ccm_nonce {int dummy; } ;
struct aes_ccm_label {char* data; } ;


 int FUNC_0 (struct wusb_keydvt_out*,int,int const*,struct aes_ccm_nonce const*,struct aes_ccm_label const*,struct wusb_keydvt_in const*,int) ;

__attribute__((used)) static inline int FUNC_1(struct wusb_keydvt_out *VAR_0,
      const u8 VAR_1[16],
      const struct aes_ccm_nonce *VAR_2,
      const struct wusb_keydvt_in *VAR_3)
{
 const struct aes_ccm_label VAR_4 = { .data = "Pair-wise keys" };
 return FUNC_0(VAR_0, sizeof(*VAR_0), VAR_1, VAR_2, &VAR_4,
       VAR_3, sizeof(*VAR_3));
}
