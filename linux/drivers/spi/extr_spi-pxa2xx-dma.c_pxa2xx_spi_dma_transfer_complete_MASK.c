
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct spi_message {int status; } ;
struct driver_data {int mask_sr; int dma_cr1; TYPE_1__* controller; int clear_sr; int dma_running; } ;
struct TYPE_2__ {struct spi_message* cur_msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct driver_data*) ;
 int FUNC_2 (struct driver_data*,int ) ;
 int FUNC_3 (struct driver_data*,int ,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct driver_data*,int ) ;

__attribute__((used)) static void FUNC_6(struct driver_data *VAR_7,
          bool VAR_8)
{
 struct spi_message *VAR_9 = VAR_7->controller->cur_msg;







 if (FUNC_0(&VAR_7->dma_running)) {





  if (!VAR_8) {
   u32 VAR_10 = FUNC_2(VAR_7, VAR_4)
         & VAR_7->mask_sr;
   VAR_8 = VAR_10 & VAR_5;
  }


  FUNC_3(VAR_7, VAR_3,
     FUNC_2(VAR_7, VAR_3)
     & ~VAR_7->dma_cr1);
  FUNC_5(VAR_7, VAR_7->clear_sr);
  if (!FUNC_1(VAR_7))
   FUNC_3(VAR_7, VAR_6, 0);

  if (VAR_8) {

   FUNC_3(VAR_7, VAR_1,
      FUNC_2(VAR_7, VAR_1)
      & ~VAR_2);
   VAR_9->status = -VAR_0;
  }

  FUNC_4(VAR_7->controller);
 }
}
