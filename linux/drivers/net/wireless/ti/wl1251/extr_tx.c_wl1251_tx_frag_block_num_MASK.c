
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct tx_double_buffer_desc {int num_mem_blocks; int length; int frag_threshold; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct tx_double_buffer_desc *VAR_4)
{
 u16 VAR_5, VAR_6, VAR_7;
 u16 VAR_8, VAR_9;

 VAR_6 = VAR_1;
 VAR_4->frag_threshold = FUNC_0(VAR_6);

 VAR_5 = FUNC_1(VAR_4->length) + VAR_3;

 if (VAR_5 > VAR_6) {
  VAR_9 =
   ((VAR_6 + VAR_2) /
    VAR_0) + 1;
  VAR_8 = VAR_5 / VAR_6;
  VAR_7 = VAR_8 * VAR_9;
  VAR_5 -= VAR_8 * VAR_6;
  VAR_8++;

 } else {
  VAR_9 = 0;
  VAR_7 = 0;
  VAR_8 = 1;
 }

 VAR_7 += (VAR_5 / VAR_0) + 1;

 if (VAR_8 > 1)
  VAR_7 += FUNC_2(VAR_8, VAR_9);

 VAR_4->num_mem_blocks = VAR_7;
}
