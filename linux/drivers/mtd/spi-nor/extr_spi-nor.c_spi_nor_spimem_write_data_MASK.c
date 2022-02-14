
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct spi_nor {scalar_t__ program_opcode; scalar_t__ sst_write_second; int write_proto; int addr_width; } ;
struct TYPE_6__ {scalar_t__ nbytes; int buswidth; } ;
struct TYPE_5__ {int buswidth; } ;
struct TYPE_4__ {int buswidth; } ;
struct spi_mem_op {TYPE_3__ addr; TYPE_2__ data; TYPE_1__ cmd; } ;
typedef int ssize_t ;
typedef int loff_t ;


 scalar_t__ VAR_0 ;
 struct spi_mem_op FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (size_t,int const*,int) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct spi_nor*,struct spi_mem_op*) ;

__attribute__((used)) static ssize_t FUNC_8(struct spi_nor *VAR_2, loff_t VAR_3,
      size_t VAR_4, const u8 *VAR_5)
{
 struct spi_mem_op VAR_6 =
  FUNC_0(FUNC_2(VAR_2->program_opcode, 1),
      FUNC_1(VAR_2->addr_width, VAR_3, 1),
      VAR_1,
      FUNC_3(VAR_4, VAR_5, 1));

 VAR_6.cmd.buswidth = FUNC_6(VAR_2->write_proto);
 VAR_6.addr.buswidth = FUNC_4(VAR_2->write_proto);
 VAR_6.data.buswidth = FUNC_5(VAR_2->write_proto);

 if (VAR_2->program_opcode == VAR_0 && VAR_2->sst_write_second)
  VAR_6.addr.nbytes = 0;

 return FUNC_7(VAR_2, &VAR_6);
}
