
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {struct cx23885_dev* drv_priv; } ;
struct cx23885_dev {int ts1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cx23885_dev*) ;
 int FUNC_1 (struct cx23885_dev*,int ,int,int ,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct vb2_queue *VAR_4)
{
 struct cx23885_dev *VAR_5 = VAR_4->drv_priv;


 FUNC_1(VAR_5, VAR_0, 3, 0,
   VAR_1, VAR_2,
   VAR_3);

 FUNC_3(500);
 FUNC_0(VAR_5);
 FUNC_2(&VAR_5->ts1);
}
