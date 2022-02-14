
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slgt_info {unsigned int tbuf_current; int tbuf_count; unsigned int tbuf_start; int * tbufs; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct slgt_info *VAR_0)
{
 unsigned int VAR_1 = VAR_0->tbuf_current;
 bool VAR_2 = 0;






 do {
  if (VAR_1)
   VAR_1--;
  else
   VAR_1 = VAR_0->tbuf_count - 1;
  if (!FUNC_0(VAR_0->tbufs[VAR_1]))
   break;
  VAR_0->tbuf_start = VAR_1;
  VAR_2 = 1;
 } while (VAR_1 != VAR_0->tbuf_current);

 return VAR_2;
}
