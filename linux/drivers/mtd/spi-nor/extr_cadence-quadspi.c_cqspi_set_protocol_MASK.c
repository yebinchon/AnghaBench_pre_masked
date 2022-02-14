
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_nor {int read_proto; struct cqspi_flash_pdata* priv; } ;
struct cqspi_flash_pdata {void* data_width; void* addr_width; void* inst_width; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;




 int FUNC_0 (struct spi_nor*) ;

__attribute__((used)) static int FUNC_1(struct spi_nor *VAR_5, const int VAR_6)
{
 struct cqspi_flash_pdata *VAR_7 = VAR_5->priv;

 VAR_7->inst_width = VAR_3;
 VAR_7->addr_width = VAR_3;
 VAR_7->data_width = VAR_3;

 if (VAR_6) {
  switch (VAR_5->read_proto) {
  case 131:
   VAR_7->data_width = VAR_3;
   break;
  case 130:
   VAR_7->data_width = VAR_0;
   break;
  case 129:
   VAR_7->data_width = VAR_2;
   break;
  case 128:
   VAR_7->data_width = VAR_1;
   break;
  default:
   return -VAR_4;
  }
 }

 FUNC_0(VAR_5);

 return 0;
}
