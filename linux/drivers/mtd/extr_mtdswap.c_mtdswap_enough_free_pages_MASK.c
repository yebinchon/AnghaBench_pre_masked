
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtdswap_dev {scalar_t__ pages_per_eblk; } ;


 scalar_t__ FUNC_0 (struct mtdswap_dev*) ;

__attribute__((used)) static unsigned int FUNC_1(struct mtdswap_dev *VAR_0)
{
 return FUNC_0(VAR_0) > VAR_0->pages_per_eblk;
}
