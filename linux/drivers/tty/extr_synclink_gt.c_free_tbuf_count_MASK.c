
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slgt_info {unsigned int tbuf_current; unsigned int tbuf_count; int * tbufs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct slgt_info*,int ) ;

__attribute__((used)) static unsigned int FUNC_2(struct slgt_info *VAR_2)
{
 unsigned int VAR_3 = 0;
 unsigned int VAR_4 = VAR_2->tbuf_current;

 do
 {
  if (FUNC_0(VAR_2->tbufs[VAR_4]))
   break;
  ++VAR_3;
  if (++VAR_4 == VAR_2->tbuf_count)
   VAR_4=0;
 } while (VAR_4 != VAR_2->tbuf_current);


 if (VAR_3 && (FUNC_1(VAR_2, VAR_1) & VAR_0))
  --VAR_3;

 return VAR_3;
}
