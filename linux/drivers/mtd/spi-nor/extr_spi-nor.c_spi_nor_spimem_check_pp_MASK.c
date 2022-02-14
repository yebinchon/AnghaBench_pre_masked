
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct spi_nor_pp_command {int proto; int opcode; } ;
struct spi_nor {int dummy; } ;
struct TYPE_5__ {int buswidth; } ;
struct TYPE_4__ {int buswidth; } ;
struct TYPE_6__ {int buswidth; } ;
struct spi_mem_op {TYPE_2__ data; TYPE_1__ addr; TYPE_3__ cmd; } ;


 struct spi_mem_op FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int *,int) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct spi_nor*,struct spi_mem_op*) ;

__attribute__((used)) static int FUNC_8(struct spi_nor *VAR_1,
       const struct spi_nor_pp_command *VAR_2)
{
 struct spi_mem_op VAR_3 = FUNC_0(FUNC_2(VAR_2->opcode, 1),
       FUNC_1(3, 0, 1),
       VAR_0,
       FUNC_3(0, ((void*)0), 1));

 VAR_3.cmd.buswidth = FUNC_6(VAR_2->proto);
 VAR_3.addr.buswidth = FUNC_4(VAR_2->proto);
 VAR_3.data.buswidth = FUNC_5(VAR_2->proto);

 return FUNC_7(VAR_1, &VAR_3);
}
