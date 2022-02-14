
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtllib_network {scalar_t__ rates_ex_len; int rates_len; } ;



__attribute__((used)) static short FUNC_0(struct rtllib_network *VAR_0)
{
 return (VAR_0->rates_ex_len > 0) || (VAR_0->rates_len > 4);
}
