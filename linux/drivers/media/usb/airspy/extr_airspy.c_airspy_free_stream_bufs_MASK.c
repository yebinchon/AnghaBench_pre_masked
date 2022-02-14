
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct airspy {int buf_num; int flags; int * dma_addr; int * buf_list; int buf_size; int udev; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct airspy *VAR_1)
{
 if (FUNC_2(VAR_0, &VAR_1->flags)) {
  while (VAR_1->buf_num) {
   VAR_1->buf_num--;
   FUNC_1(VAR_1->dev, "free buf=%d\n", VAR_1->buf_num);
   FUNC_3(VAR_1->udev, VAR_1->buf_size,
       VAR_1->buf_list[VAR_1->buf_num],
       VAR_1->dma_addr[VAR_1->buf_num]);
  }
 }
 FUNC_0(VAR_0, &VAR_1->flags);

 return 0;
}
