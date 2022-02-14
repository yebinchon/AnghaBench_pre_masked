
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_davinci_host {scalar_t__ buffer_bytes_left; scalar_t__ bytes_left; int sg; int buffer; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct mmc_davinci_host *VAR_0)
{
 VAR_0->buffer_bytes_left = FUNC_0(VAR_0->sg);
 VAR_0->buffer = FUNC_1(VAR_0->sg);
 if (VAR_0->buffer_bytes_left > VAR_0->bytes_left)
  VAR_0->buffer_bytes_left = VAR_0->bytes_left;
}
