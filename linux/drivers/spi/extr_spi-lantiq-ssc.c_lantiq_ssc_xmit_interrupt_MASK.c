
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lantiq_ssc_spi {int work; int wq; scalar_t__ rx_todo; scalar_t__ rx; scalar_t__ tx_todo; scalar_t__ tx; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct lantiq_ssc_spi*) ;
 int FUNC_2 (struct lantiq_ssc_spi*) ;
 int FUNC_3 (struct lantiq_ssc_spi*) ;
 int FUNC_4 (struct lantiq_ssc_spi*) ;
 int FUNC_5 (struct lantiq_ssc_spi*) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_1, void *VAR_2)
{
 struct lantiq_ssc_spi *VAR_3 = VAR_2;

 if (VAR_3->tx) {
  if (VAR_3->rx && VAR_3->rx_todo)
   FUNC_1(VAR_3);

  if (VAR_3->tx_todo)
   FUNC_5(VAR_3);
  else if (!FUNC_4(VAR_3))
   goto completed;
 } else if (VAR_3->rx) {
  if (VAR_3->rx_todo) {
   FUNC_2(VAR_3);

   if (VAR_3->rx_todo)
    FUNC_3(VAR_3);
   else
    goto completed;
  } else {
   goto completed;
  }
 }

 return VAR_0;

completed:
 FUNC_0(VAR_3->wq, &VAR_3->work);

 return VAR_0;
}
