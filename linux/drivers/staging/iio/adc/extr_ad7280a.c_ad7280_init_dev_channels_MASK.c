
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_chan_spec {int dummy; } ;
struct ad7280_state {struct iio_chan_spec* channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_2 ;
 int FUNC_2 (struct iio_chan_spec*,int,int) ;
 int FUNC_3 (struct iio_chan_spec*,int) ;
 int FUNC_4 (struct iio_chan_spec*,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct ad7280_state *VAR_3, int VAR_4, int *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 struct iio_chan_spec *VAR_9;

 for (VAR_7 = VAR_2; VAR_7 <= VAR_1; VAR_7++) {
  VAR_9 = &VAR_3->channels[*VAR_5];

  if (VAR_7 < VAR_0) {
   VAR_8 = FUNC_1(VAR_4, VAR_7);
   FUNC_4(VAR_9, VAR_8);
  } else {
   VAR_8 = FUNC_0(VAR_4, VAR_7);
   FUNC_3(VAR_9, VAR_8);
  }

  VAR_6 = FUNC_5(VAR_4) << 8 | VAR_7;
  FUNC_2(VAR_9, VAR_6, *VAR_5);

  (*VAR_5)++;
 }
}
