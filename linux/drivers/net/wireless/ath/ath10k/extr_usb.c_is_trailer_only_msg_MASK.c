
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_htc_hdr {scalar_t__ trailer_len; int len; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(struct ath10k_htc_hdr *VAR_0)
{
 return FUNC_0(VAR_0->len) == VAR_0->trailer_len;
}
