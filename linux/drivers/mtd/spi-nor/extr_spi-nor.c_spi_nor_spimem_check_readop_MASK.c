
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct spi_nor_read_command {int num_mode_clocks; int num_wait_states; int proto; int opcode; } ;
struct spi_nor {int dummy; } ;
struct TYPE_8__ {int buswidth; int nbytes; } ;
struct TYPE_7__ {int buswidth; } ;
struct TYPE_6__ {int buswidth; } ;
struct TYPE_5__ {int buswidth; } ;
struct spi_mem_op {TYPE_4__ dummy; TYPE_3__ addr; TYPE_2__ data; TYPE_1__ cmd; } ;


 struct spi_mem_op FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct spi_nor*,struct spi_mem_op*) ;

__attribute__((used)) static int FUNC_9(struct spi_nor *VAR_0,
           const struct spi_nor_read_command *VAR_1)
{
 struct spi_mem_op VAR_2 = FUNC_0(FUNC_2(VAR_1->opcode, 1),
       FUNC_1(3, 0, 1),
       FUNC_4(0, 1),
       FUNC_3(0, ((void*)0), 1));

 VAR_2.cmd.buswidth = FUNC_7(VAR_1->proto);
 VAR_2.addr.buswidth = FUNC_5(VAR_1->proto);
 VAR_2.data.buswidth = FUNC_6(VAR_1->proto);
 VAR_2.dummy.buswidth = VAR_2.addr.buswidth;
 VAR_2.dummy.nbytes = (VAR_1->num_mode_clocks + VAR_1->num_wait_states) *
     VAR_2.dummy.buswidth / 8;

 return FUNC_8(VAR_0, &VAR_2);
}
