
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct coda_ctx {int bitstream_fifo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,unsigned char*) ;
 int FUNC_1 (int *,unsigned char*,int) ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct coda_ctx *VAR_3, u32 VAR_4)
{
 unsigned char *VAR_5;
 u32 VAR_6;

 if (VAR_4 < 6)
  VAR_4 = 6;

 VAR_5 = FUNC_3(VAR_4, VAR_2);
 if (!VAR_5)
  return -VAR_0;

 FUNC_0(VAR_4, VAR_5);
 VAR_6 = FUNC_1(&VAR_3->bitstream_fifo, VAR_5, VAR_4);
 FUNC_2(VAR_5);

 return (VAR_6 < VAR_4) ? -VAR_1 : 0;
}
