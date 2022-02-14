
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct apds990x_chip {int again_meas; int lux_clear; int a_max_result; int again_next; int pdrive; int pdiode; int pgain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct apds990x_chip*) ;
 int FUNC_1 (struct apds990x_chip*) ;
 int FUNC_2 (struct apds990x_chip*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct apds990x_chip *VAR_5)
{
 int VAR_6 = VAR_5->again_meas;
 int VAR_7 = VAR_5->again_meas;
 int VAR_8 = 0;


 if (VAR_5->lux_clear == VAR_5->a_max_result)
  VAR_7 -= 2;
 else if (VAR_5->lux_clear > VAR_5->a_max_result / 2)
  VAR_7--;
 else if (VAR_5->lux_clear < VAR_3)
  VAR_7 += 2;
 else if (VAR_5->lux_clear < VAR_2)
  VAR_7++;


 if (VAR_7 < 0)
  VAR_7 = 0;
 else if (VAR_7 > VAR_1)
  VAR_7 = VAR_1;


 if (VAR_5->lux_clear == VAR_5->a_max_result)

  VAR_8 = -VAR_4;
 else if (VAR_7 != VAR_6 &&
  VAR_5->lux_clear < VAR_3)




  VAR_8 = -VAR_4;

 VAR_5->again_next = VAR_7;
 FUNC_2(VAR_5, VAR_0,
   (VAR_5->pdrive << 6) |
   (VAR_5->pdiode << 4) |
   (VAR_5->pgain << 2) |
   (VAR_5->again_next << 0));






 if (VAR_8 < 0)
  FUNC_0(VAR_5);
 else
  FUNC_1(VAR_5);

 return VAR_8;
}
