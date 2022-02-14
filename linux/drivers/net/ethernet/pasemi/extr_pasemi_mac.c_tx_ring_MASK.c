
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pasemi_mac_txring {int dummy; } ;
struct pasemi_mac {struct pasemi_mac_txring* tx; } ;



__attribute__((used)) static struct pasemi_mac_txring *FUNC_0(const struct pasemi_mac *VAR_0)
{
 return VAR_0->tx;
}
