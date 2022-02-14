
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct if_spi_card {int use_dummy_writes; int spu_port_delay; int spu_reg_delay; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (struct if_spi_card*,int ,int*) ;
 int FUNC_2 (struct if_spi_card*,int) ;

__attribute__((used)) static int FUNC_3(struct if_spi_card *VAR_5, int VAR_6)
{
 int VAR_7 = 0;
 u32 VAR_8;





 VAR_5->use_dummy_writes = 0;
 VAR_7 = FUNC_2(VAR_5,
    VAR_3 |
    VAR_2 |
    VAR_0);
 if (VAR_7)
  return VAR_7;
 VAR_5->spu_port_delay = 1000;
 VAR_5->spu_reg_delay = 1000;
 VAR_7 = FUNC_1(VAR_5, VAR_4, &VAR_8);
 if (VAR_7)
  return VAR_7;
 VAR_5->spu_port_delay = VAR_8 & 0x0000ffff;
 VAR_5->spu_reg_delay = (VAR_8 & 0xffff0000) >> 16;


 if (VAR_6) {
  VAR_5->use_dummy_writes = 1;
  VAR_7 = FUNC_2(VAR_5,
    VAR_3 |
    VAR_1 |
    VAR_0);
  if (VAR_7)
   return VAR_7;
 }

 FUNC_0("Initialized SPU unit. "
      "spu_port_delay=0x%04lx, spu_reg_delay=0x%04lx\n",
      VAR_5->spu_port_delay, VAR_5->spu_reg_delay);
 return VAR_7;
}
