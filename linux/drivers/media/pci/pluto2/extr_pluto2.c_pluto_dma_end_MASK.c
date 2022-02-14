
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pluto {int* dma_buf; int dma_addr; TYPE_1__* pdev; int demux; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ,int *,char*) ;
 int FUNC_1 (int *,int*,unsigned int) ;
 int FUNC_2 (int*,int ,unsigned int) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_5 (struct pluto*,int) ;
 int FUNC_6 (struct pluto*) ;

__attribute__((used)) static void FUNC_7(struct pluto *VAR_4, unsigned int VAR_5)
{


 FUNC_3(VAR_4->pdev, VAR_4->dma_addr,
   VAR_2, VAR_1);
 if ((VAR_5 == 0) || (VAR_5 > VAR_3)) {
  unsigned int VAR_6 = 0;
  while (VAR_4->dma_buf[VAR_6] == 0x47)
   VAR_6 += 188;
  VAR_5 = VAR_6 / 188;
  if (VAR_6 == 0) {
   FUNC_5(VAR_4, 1);
   FUNC_0(VAR_0, &VAR_4->pdev->dev, "resetting TS because of invalid packet counter\n");
  }
 }

 FUNC_1(&VAR_4->demux, VAR_4->dma_buf, VAR_5);



 FUNC_2(VAR_4->dma_buf, 0, VAR_5 * 188);


 FUNC_6(VAR_4);


 FUNC_4(VAR_4->pdev, VAR_4->dma_addr,
   VAR_2, VAR_1);
}
