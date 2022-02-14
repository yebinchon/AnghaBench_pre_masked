
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mt7601u_dma_buf_rx {TYPE_1__* urb; } ;
struct mt7601u_dev {int dummy; } ;
struct TYPE_2__ {scalar_t__ status; } ;


 int VAR_0 ;
 struct mt7601u_dma_buf_rx* FUNC_0 (struct mt7601u_dev*) ;
 int FUNC_1 (struct mt7601u_dev*,struct mt7601u_dma_buf_rx*) ;
 int FUNC_2 (struct mt7601u_dev*,struct mt7601u_dma_buf_rx*,int ) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_1)
{
 struct mt7601u_dev *VAR_2 = (struct mt7601u_dev *) VAR_1;
 struct mt7601u_dma_buf_rx *VAR_3;

 while ((VAR_3 = FUNC_0(VAR_2))) {
  if (VAR_3->urb->status)
   continue;

  FUNC_1(VAR_2, VAR_3);
  FUNC_2(VAR_2, VAR_3, VAR_0);
 }
}
