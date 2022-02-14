
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct spi_nor {int read_dummy; int read_proto; int addr_width; int read_opcode; } ;
struct TYPE_8__ {int buswidth; int nbytes; } ;
struct TYPE_7__ {int buswidth; } ;
struct TYPE_6__ {int buswidth; } ;
struct TYPE_5__ {int buswidth; } ;
struct spi_mem_op {TYPE_4__ dummy; TYPE_3__ data; TYPE_2__ addr; TYPE_1__ cmd; } ;
typedef int ssize_t ;
typedef int loff_t ;


 struct spi_mem_op FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (size_t,int *,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct spi_nor*,struct spi_mem_op*) ;

__attribute__((used)) static ssize_t FUNC_9(struct spi_nor *VAR_0, loff_t VAR_1,
     size_t VAR_2, u8 *VAR_3)
{
 struct spi_mem_op VAR_4 =
  FUNC_0(FUNC_2(VAR_0->read_opcode, 1),
      FUNC_1(VAR_0->addr_width, VAR_1, 1),
      FUNC_4(VAR_0->read_dummy, 1),
      FUNC_3(VAR_2, VAR_3, 1));


 VAR_4.cmd.buswidth = FUNC_7(VAR_0->read_proto);
 VAR_4.addr.buswidth = FUNC_5(VAR_0->read_proto);
 VAR_4.dummy.buswidth = VAR_4.addr.buswidth;
 VAR_4.data.buswidth = FUNC_6(VAR_0->read_proto);


 VAR_4.dummy.nbytes = (VAR_0->read_dummy * VAR_4.dummy.buswidth) / 8;

 return FUNC_8(VAR_0, &VAR_4);
}
