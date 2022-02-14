
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtw_cbuf {int size; scalar_t__ read; scalar_t__ write; } ;


 struct rtw_cbuf* FUNC_0 (int) ;

struct rtw_cbuf *FUNC_1(u32 VAR_0)
{
 struct rtw_cbuf *VAR_1;

 VAR_1 = FUNC_0(sizeof(*VAR_1) + sizeof(void *) * VAR_0);

 if (VAR_1) {
  VAR_1->write = VAR_1->read = 0;
  VAR_1->size = VAR_0;
 }

 return VAR_1;
}
