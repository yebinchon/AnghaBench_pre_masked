
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct page {int dummy; } ;
struct mt7601u_dma_buf_rx {struct page* p; TYPE_1__* urb; } ;
struct mt7601u_dev {int state; } ;
struct TYPE_2__ {int actual_length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*,int ) ;
 struct page* FUNC_1 (int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct mt7601u_dev*,int *,int,struct page*) ;
 int * FUNC_4 (struct page*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct mt7601u_dev*,int,int) ;

__attribute__((used)) static void
FUNC_7(struct mt7601u_dev *VAR_2, struct mt7601u_dma_buf_rx *VAR_3)
{
 u32 VAR_4, VAR_5 = VAR_3->urb->actual_length;
 u8 *VAR_6 = FUNC_4(VAR_3->p);
 struct page *VAR_7 = ((void*)0);
 int VAR_8 = 0;

 if (!FUNC_5(VAR_0, &VAR_2->state))
  return;


 if (VAR_5 > 512)
  VAR_7 = FUNC_1(VAR_1);

 while ((VAR_4 = FUNC_2(VAR_6, VAR_5))) {
  FUNC_3(VAR_2, VAR_6, VAR_4, VAR_7 ? VAR_3->p : ((void*)0));

  VAR_5 -= VAR_4;
  VAR_6 += VAR_4;
  VAR_8++;
 }

 if (VAR_8 > 1)
  FUNC_6(VAR_2, VAR_8, !!VAR_7);

 if (VAR_7) {

  FUNC_0(VAR_3->p, VAR_1);

  VAR_3->p = VAR_7;
 }
}
