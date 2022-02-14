
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_replaced_transfers {size_t inserted; TYPE_1__* inserted_transfers; int replaced_after; int replaced_transfers; int (* release ) (struct spi_controller*,struct spi_message*,void*) ;} ;
struct spi_message {int dummy; } ;
struct spi_controller {int dummy; } ;
struct TYPE_2__ {int transfer_list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct spi_controller*,struct spi_message*,void*) ;

__attribute__((used)) static void FUNC_3(struct spi_controller *VAR_0,
         struct spi_message *VAR_1,
         void *VAR_2)
{
 struct spi_replaced_transfers *VAR_3 = VAR_2;
 size_t VAR_4;


 if (VAR_3->release)
  VAR_3->release(VAR_0, VAR_1, VAR_2);


 FUNC_1(&VAR_3->replaced_transfers, VAR_3->replaced_after);


 for (VAR_4 = 0; VAR_4 < VAR_3->inserted; VAR_4++)
  FUNC_0(&VAR_3->inserted_transfers[VAR_4].transfer_list);
}
