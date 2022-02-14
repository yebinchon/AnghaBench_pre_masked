
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mmc_davinci_host {unsigned int buffer_bytes_left; unsigned int bytes_left; scalar_t__ data_dir; int * buffer; scalar_t__ base; TYPE_1__* data; int sg; } ;
struct TYPE_2__ {int sg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,int *,unsigned int) ;
 int FUNC_1 (scalar_t__,int *,unsigned int) ;
 int FUNC_2 (struct mmc_davinci_host*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct mmc_davinci_host *VAR_3,
     unsigned int VAR_4)
{
 u8 *VAR_5;
 unsigned int VAR_6;

 if (VAR_3->buffer_bytes_left == 0) {
  VAR_3->sg = FUNC_4(VAR_3->data->sg);
  FUNC_2(VAR_3);
 }

 VAR_5 = VAR_3->buffer;
 if (VAR_4 > VAR_3->buffer_bytes_left)
  VAR_4 = VAR_3->buffer_bytes_left;
 VAR_3->buffer_bytes_left -= VAR_4;
 VAR_3->bytes_left -= VAR_4;





 if (VAR_3->data_dir == VAR_2) {
  for (VAR_6 = 0; VAR_6 < (VAR_4 >> 2); VAR_6++) {
   FUNC_5(*((u32 *)VAR_5), VAR_3->base + VAR_1);
   VAR_5 = VAR_5 + 4;
  }
  if (VAR_4 & 3) {
   FUNC_1(VAR_3->base + VAR_1, VAR_5, (VAR_4 & 3));
   VAR_5 = VAR_5 + (VAR_4 & 3);
  }
 } else {
  for (VAR_6 = 0; VAR_6 < (VAR_4 >> 2); VAR_6++) {
   *((u32 *)VAR_5) = FUNC_3(VAR_3->base + VAR_0);
   VAR_5 = VAR_5 + 4;
  }
  if (VAR_4 & 3) {
   FUNC_0(VAR_3->base + VAR_0, VAR_5, (VAR_4 & 3));
   VAR_5 = VAR_5 + (VAR_4 & 3);
  }
 }
 VAR_3->buffer = VAR_5;
}
