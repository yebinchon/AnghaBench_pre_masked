
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
typedef int u32 ;
struct spi_nor {int program_opcode; struct nxp_spifi* priv; } ;
struct TYPE_2__ {scalar_t__ addr_width; } ;
struct nxp_spifi {scalar_t__ io_base; TYPE_1__ nor; } ;
typedef int ssize_t ;
typedef int loff_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (struct nxp_spifi*) ;
 int FUNC_4 (struct nxp_spifi*) ;
 int FUNC_5 (int const,scalar_t__) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_7(struct spi_nor *VAR_5, loff_t VAR_6, size_t VAR_7,
          const u_char *VAR_8)
{
 struct nxp_spifi *VAR_9 = VAR_5->priv;
 u32 VAR_10;
 int VAR_11;
 size_t VAR_12;

 VAR_11 = FUNC_3(VAR_9);
 if (VAR_11)
  return VAR_11;

 FUNC_6(VAR_6, VAR_9->io_base + VAR_0);

 VAR_10 = VAR_2 |
       FUNC_0(VAR_7) |
       VAR_3 |
       FUNC_2(VAR_5->program_opcode) |
       FUNC_1(VAR_9->nor.addr_width + 1);
 FUNC_6(VAR_10, VAR_9->io_base + VAR_1);

 for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++)
  FUNC_5(VAR_8[VAR_12], VAR_9->io_base + VAR_4);

 VAR_11 = FUNC_4(VAR_9);
 if (VAR_11)
  return VAR_11;

 return VAR_7;
}
