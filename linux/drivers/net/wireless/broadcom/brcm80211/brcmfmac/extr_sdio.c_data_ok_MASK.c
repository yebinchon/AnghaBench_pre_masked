
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct brcmf_sdio {scalar_t__ tx_seq; scalar_t__ tx_max; } ;



__attribute__((used)) static bool FUNC_0(struct brcmf_sdio *VAR_0)
{
 return (u8)(VAR_0->tx_max - VAR_0->tx_seq) != 0 &&
        ((u8)(VAR_0->tx_max - VAR_0->tx_seq) & 0x80) == 0;
}
