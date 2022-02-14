
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp1760_qtd {size_t length; void* data_buffer; } ;


 size_t VAR_0 ;

__attribute__((used)) static int FUNC_0(struct isp1760_qtd *VAR_1, void *VAR_2, size_t VAR_3)
{
 VAR_1->data_buffer = VAR_2;

 if (VAR_3 > VAR_0)
  VAR_3 = VAR_0;
 VAR_1->length = VAR_3;

 return VAR_1->length;
}
