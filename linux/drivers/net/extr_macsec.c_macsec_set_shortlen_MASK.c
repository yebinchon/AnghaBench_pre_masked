
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macsec_eth_header {size_t short_length; } ;


 size_t VAR_0 ;

__attribute__((used)) static void FUNC_0(struct macsec_eth_header *VAR_1, size_t VAR_2)
{
 if (VAR_2 < VAR_0)
  VAR_1->short_length = VAR_2;
}
