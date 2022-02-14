
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bt878 {scalar_t__ line_count; scalar_t__ line_bytes; scalar_t__ block_bytes; int block_count; scalar_t__ buf_dma; scalar_t__ risc_dma; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct bt878 *VAR_9, u32 VAR_10)
{
 u32 VAR_11 = 0;
 u32 VAR_12;

 FUNC_0();
 FUNC_1(VAR_3 | VAR_4 | VAR_10);
 FUNC_1(0);

 FUNC_4("bt878: risc len lines %u, bytes per line %u\n",
   VAR_9->line_count, VAR_9->line_bytes);
 for (VAR_12 = 0; VAR_12 < VAR_9->line_count; VAR_12++) {

  if (!(VAR_11 % VAR_9->block_bytes))
   FUNC_1(VAR_6 | VAR_8 | VAR_7 |
       VAR_1 |
       FUNC_2(((VAR_11 /
       VAR_9->block_bytes) +
      (VAR_9->block_count -
       1)) %
            VAR_9->block_count) | VAR_9->
       line_bytes);
  else
   FUNC_1(VAR_6 | VAR_8 | VAR_7 |
       VAR_9->line_bytes);
  FUNC_1(VAR_9->buf_dma + VAR_11);
  VAR_11 += VAR_9->line_bytes;
 }

 FUNC_1(VAR_3 | VAR_10 | VAR_5);
 FUNC_1(0);

 FUNC_1(VAR_2);
 FUNC_1(VAR_9->risc_dma);

 FUNC_3((VAR_9->line_count << 16) | VAR_9->line_bytes, VAR_0);
}
