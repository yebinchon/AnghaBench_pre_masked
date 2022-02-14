
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_message {int frame_length; int actual_length; scalar_t__ status; } ;
struct spi_master {int dummy; } ;
struct spi_engine {unsigned int int_enable; int lock; scalar_t__ base; struct spi_message* msg; int p; void* sync_id; void* completed_id; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct spi_engine*) ;
 int FUNC_3 (struct spi_engine*) ;
 int FUNC_4 (struct spi_engine*) ;
 int FUNC_5 (struct spi_master*) ;
 struct spi_engine* FUNC_6 (struct spi_master*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (unsigned int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_8, void *VAR_9)
{
 struct spi_master *VAR_10 = VAR_9;
 struct spi_engine *VAR_11 = FUNC_6(VAR_10);
 unsigned int VAR_12 = 0;
 unsigned int VAR_13;

 VAR_13 = FUNC_1(VAR_11->base + VAR_6);

 if (VAR_13 & VAR_4) {
  FUNC_9(VAR_4,
   VAR_11->base + VAR_6);
  VAR_11->completed_id = FUNC_1(
   VAR_11->base + VAR_7);
 }

 FUNC_7(&VAR_11->lock);

 if (VAR_13 & VAR_1) {
  if (!FUNC_3(VAR_11))
   VAR_12 |= VAR_1;
 }

 if (VAR_13 & VAR_3) {
  if (!FUNC_4(VAR_11))
   VAR_12 |= VAR_3;
 }

 if (VAR_13 & (VAR_2 | VAR_4)) {
  if (!FUNC_2(VAR_11))
   VAR_12 |= VAR_2;
 }

 if (VAR_13 & VAR_4) {
  if (VAR_11->msg &&
      VAR_11->completed_id == VAR_11->sync_id) {
   struct spi_message *VAR_14 = VAR_11->msg;

   FUNC_0(VAR_11->p);
   VAR_14->status = 0;
   VAR_14->actual_length = VAR_14->frame_length;
   VAR_11->msg = ((void*)0);
   FUNC_5(VAR_10);
   VAR_12 |= VAR_4;
  }
 }

 if (VAR_12) {
  VAR_11->int_enable &= ~VAR_12;
  FUNC_9(VAR_11->int_enable,
   VAR_11->base + VAR_5);
 }

 FUNC_8(&VAR_11->lock);

 return VAR_0;
}
