
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hackrf_dev {int flags; int buf_num; int * dma_addr; int * buf_list; int buf_size; int udev; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct hackrf_dev *VAR_1)
{
 if (VAR_1->flags & VAR_0) {
  while (VAR_1->buf_num) {
   VAR_1->buf_num--;
   FUNC_0(VAR_1->dev, "free buf=%d\n", VAR_1->buf_num);
   FUNC_1(VAR_1->udev, VAR_1->buf_size,
       VAR_1->buf_list[VAR_1->buf_num],
       VAR_1->dma_addr[VAR_1->buf_num]);
  }
 }
 VAR_1->flags &= ~VAR_0;

 return 0;
}
