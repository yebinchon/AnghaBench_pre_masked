
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* prev; } ;
struct spi_transfer {int cs_change; scalar_t__ delay_usecs; TYPE_3__ transfer_list; } ;
struct spi_replaced_transfers {size_t inserted; TYPE_2__* replaced_after; struct spi_transfer* inserted_transfers; int replaced_transfers; struct spi_transfer* extradata; int release; } ;
struct spi_message {TYPE_1__* spi; int transfers; } ;
typedef int spi_replaced_release_t ;
typedef int gfp_t ;
struct TYPE_6__ {int * next; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct spi_replaced_transfers* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int *,char*) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,TYPE_2__*) ;
 int FUNC_6 (struct spi_transfer*,struct spi_transfer*,int) ;
 int FUNC_7 (struct spi_message*,struct spi_replaced_transfers*) ;
 struct spi_replaced_transfers* FUNC_8 (TYPE_1__*,int ,scalar_t__,int ) ;
 int FUNC_9 (struct spi_replaced_transfers*) ;
 scalar_t__ FUNC_10 (struct spi_replaced_transfers*,int ,size_t) ;

struct spi_replaced_transfers *FUNC_11(
 struct spi_message *VAR_4,
 struct spi_transfer *VAR_5,
 size_t VAR_6,
 size_t VAR_7,
 spi_replaced_release_t VAR_8,
 size_t VAR_9,
 gfp_t VAR_10)
{
 struct spi_replaced_transfers *VAR_11;
 struct spi_transfer *VAR_12;
 size_t VAR_13;


 VAR_11 = FUNC_8(VAR_4->spi, VAR_2,
         FUNC_10(VAR_11, VAR_3, VAR_7)
         + VAR_9,
         VAR_10);
 if (!VAR_11)
  return FUNC_0(-VAR_1);


 VAR_11->release = VAR_8;


 if (VAR_9)
  VAR_11->extradata =
   &VAR_11->inserted_transfers[VAR_7];


 FUNC_1(&VAR_11->replaced_transfers);




 VAR_11->replaced_after = VAR_5->transfer_list.prev;


 for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {




  if (VAR_11->replaced_after->next == &VAR_4->transfers) {
   FUNC_2(&VAR_4->spi->dev,
    "requested to remove more spi_transfers than are available\n");

   FUNC_5(&VAR_11->replaced_transfers,
        VAR_11->replaced_after);


   FUNC_9(VAR_11);


   return FUNC_0(-VAR_0);
  }




  FUNC_4(VAR_11->replaced_after->next,
          &VAR_11->replaced_transfers);
 }




 for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++) {

  VAR_12 = &VAR_11->inserted_transfers[VAR_7 - 1 - VAR_13];


  FUNC_6(VAR_12, VAR_5, sizeof(*VAR_12));


  FUNC_3(&VAR_12->transfer_list, VAR_11->replaced_after);


  if (VAR_13) {
   VAR_12->cs_change = 0;
   VAR_12->delay_usecs = 0;
  }
 }


 VAR_11->inserted = VAR_7;


 FUNC_7(VAR_4, VAR_11);

 return VAR_11;
}
