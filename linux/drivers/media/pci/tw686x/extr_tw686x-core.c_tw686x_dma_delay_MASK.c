
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw686x_dev {int lock; scalar_t__ pending_dma_cmd; scalar_t__ pending_dma_en; } ;
struct timer_list {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tw686x_dev* VAR_2 ;
 int VAR_3 ;
 struct tw686x_dev* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (struct tw686x_dev*,int ,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_4)
{
 struct tw686x_dev *VAR_5 = FUNC_0(VAR_5, VAR_4, VAR_3);
 unsigned long VAR_6;

 FUNC_2(&VAR_5->lock, VAR_6);

 FUNC_1(VAR_5, VAR_0, VAR_5->pending_dma_en);
 FUNC_1(VAR_5, VAR_1, VAR_5->pending_dma_cmd);
 VAR_5->pending_dma_en = 0;
 VAR_5->pending_dma_cmd = 0;

 FUNC_3(&VAR_5->lock, VAR_6);
}
