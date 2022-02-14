
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_dev {struct ir_rx51* priv; } ;
struct ir_rx51 {int* wbuf; int wbuf_index; int wqueue; int timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 unsigned int VAR_2 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct ir_rx51*) ;
 int FUNC_3 (struct ir_rx51*) ;
 int FUNC_4 (int*,unsigned int*,unsigned int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static int FUNC_7(struct rc_dev *VAR_3, unsigned int *VAR_4,
        unsigned int VAR_5)
{
 struct ir_rx51 *VAR_6 = VAR_3->priv;

 if (VAR_5 > VAR_2)
  return -VAR_0;

 FUNC_4(VAR_6->wbuf, VAR_4, VAR_5 * sizeof(unsigned int));


 FUNC_6(VAR_6->wqueue, VAR_6->wbuf_index < 0);

 FUNC_2(VAR_6);
 if (VAR_5 < VAR_2)
  VAR_6->wbuf[VAR_5] = -1;






 FUNC_3(VAR_6);
 VAR_6->wbuf_index = 1;
 FUNC_1(&VAR_6->timer,
        FUNC_5(FUNC_0(VAR_6->wbuf[0])),
        VAR_1);




 FUNC_6(VAR_6->wqueue, VAR_6->wbuf_index < 0);



 return VAR_5;
}
