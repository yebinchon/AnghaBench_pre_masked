
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wbsd_host {int irq; int finish_tasklet; int timeout_tasklet; int crc_tasklet; int fifo_tasklet; int card_tasklet; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int ,int ,struct wbsd_host*) ;
 int FUNC_1 (int *,int ,unsigned long) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_2(struct wbsd_host *VAR_8, int VAR_9)
{
 int VAR_10;




 FUNC_1(&VAR_8->card_tasklet, VAR_3,
   (unsigned long)VAR_8);
 FUNC_1(&VAR_8->fifo_tasklet, VAR_5,
   (unsigned long)VAR_8);
 FUNC_1(&VAR_8->crc_tasklet, VAR_4,
   (unsigned long)VAR_8);
 FUNC_1(&VAR_8->timeout_tasklet, VAR_7,
   (unsigned long)VAR_8);
 FUNC_1(&VAR_8->finish_tasklet, VAR_6,
   (unsigned long)VAR_8);




 VAR_10 = FUNC_0(VAR_9, VAR_2, VAR_1, VAR_0, VAR_8);
 if (VAR_10)
  return VAR_10;

 VAR_8->irq = VAR_9;

 return 0;
}
