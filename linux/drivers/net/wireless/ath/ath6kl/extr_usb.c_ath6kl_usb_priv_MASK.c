
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath6kl_usb {int dummy; } ;
struct ath6kl {struct ath6kl_usb* hif_priv; } ;



__attribute__((used)) static inline struct ath6kl_usb *FUNC_0(struct ath6kl *VAR_0)
{
 return VAR_0->hif_priv;
}
