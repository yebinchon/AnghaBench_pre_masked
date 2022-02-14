
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bt878 {int buf_size; int risc_size; void* risc_cpu; int risc_dma; int dev; void* buf_cpu; int buf_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bt878*) ;
 void* FUNC_1 (int ,int,int *) ;

__attribute__((used)) static int FUNC_2(struct bt878 *VAR_2)
{
 if (!VAR_2->buf_cpu) {
  VAR_2->buf_size = 128 * 1024;

  VAR_2->buf_cpu = FUNC_1(VAR_2->dev, VAR_2->buf_size,
          &VAR_2->buf_dma);
  if (!VAR_2->buf_cpu)
   return -VAR_0;
 }

 if (!VAR_2->risc_cpu) {
  VAR_2->risc_size = VAR_1;
  VAR_2->risc_cpu = FUNC_1(VAR_2->dev, VAR_2->risc_size,
           &VAR_2->risc_dma);
  if (!VAR_2->risc_cpu) {
   FUNC_0(VAR_2);
   return -VAR_0;
  }
 }

 return 0;
}
