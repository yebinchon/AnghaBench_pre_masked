
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_message {int status; int * context; struct spi_device* spi; int complete; } ;
struct spi_device {int statistics; struct spi_controller* controller; } ;
struct spi_controller {scalar_t__ transfer; int statistics; int bus_lock_spinlock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct spi_controller*,int) ;
 int FUNC_3 (struct spi_device*,struct spi_message*,int) ;
 int FUNC_4 (struct spi_device*,struct spi_message*) ;
 int VAR_0 ;
 int FUNC_5 (struct spi_device*,struct spi_message*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct spi_message*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct spi_device *VAR_5, struct spi_message *VAR_6)
{
 FUNC_0(VAR_0);
 int VAR_7;
 struct spi_controller *VAR_8 = VAR_5->controller;
 unsigned long VAR_9;

 VAR_7 = FUNC_4(VAR_5, VAR_6);
 if (VAR_7 != 0)
  return VAR_7;

 VAR_6->complete = VAR_1;
 VAR_6->context = &VAR_0;
 VAR_6->spi = VAR_5;

 FUNC_1(&VAR_8->statistics, VAR_3);
 FUNC_1(&VAR_5->statistics, VAR_3);






 if (VAR_8->transfer == VAR_2) {
  FUNC_6(&VAR_8->bus_lock_spinlock, VAR_9);

  FUNC_8(VAR_6);

  VAR_7 = FUNC_3(VAR_5, VAR_6, 0);

  FUNC_7(&VAR_8->bus_lock_spinlock, VAR_9);
 } else {
  VAR_7 = FUNC_5(VAR_5, VAR_6);
 }

 if (VAR_7 == 0) {



  if (VAR_8->transfer == VAR_2) {
   FUNC_1(&VAR_8->statistics,
             VAR_4);
   FUNC_1(&VAR_5->statistics,
             VAR_4);
   FUNC_2(VAR_8, 0);
  }

  FUNC_9(&VAR_0);
  VAR_7 = VAR_6->status;
 }
 VAR_6->context = ((void*)0);
 return VAR_7;
}
