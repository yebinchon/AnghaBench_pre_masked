
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jpeg_buffer {int end; int curr; } ;


 unsigned int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct jpeg_buffer *VAR_0, unsigned int *VAR_1)
{
 if (VAR_0->end - VAR_0->curr < 2)
  return -1;

 *VAR_1 = FUNC_0(VAR_0->curr);
 VAR_0->curr += 2;

 return 0;
}
