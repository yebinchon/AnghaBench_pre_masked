
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_cbuf {int write; int read; } ;



inline bool FUNC_0(struct rtw_cbuf *VAR_0)
{
 return (VAR_0->write == VAR_0->read - 1) ? 1 : 0;
}
