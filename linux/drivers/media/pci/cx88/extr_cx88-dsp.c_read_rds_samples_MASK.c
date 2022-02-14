
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sram_channel {int fifo_size; int ptr1_reg; int fifo_start; } ;
struct cx88_core {int dummy; } ;
typedef void* s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 struct sram_channel* VAR_4 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int,char*,unsigned int,int,...) ;
 void** FUNC_2 (unsigned int,int,int ) ;

__attribute__((used)) static s16 *FUNC_3(struct cx88_core *VAR_5, u32 *VAR_6)
{
 const struct sram_channel *VAR_7 = &VAR_4[VAR_3];
 s16 *VAR_8;

 unsigned int VAR_9;
 unsigned int VAR_10 = VAR_7->fifo_size / VAR_0;
 unsigned int VAR_11 = VAR_10 / 4;
 unsigned int VAR_12 = VAR_11 * (VAR_0 - 1);

 u32 VAR_13 = FUNC_0(VAR_7->ptr1_reg);
 u32 VAR_14 = (VAR_13 - VAR_7->fifo_start + VAR_10);

 FUNC_1(1,
  "read RDS samples: current_address=%08x (offset=%08x), sample_count=%d, aud_intstat=%08x\n",
  VAR_13,
  VAR_13 - VAR_7->fifo_start, VAR_12,
  FUNC_0(VAR_2));
 VAR_8 = FUNC_2(VAR_12, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return ((void*)0);

 *VAR_6 = VAR_12;

 for (VAR_9 = 0; VAR_9 < VAR_12; VAR_9++) {
  VAR_14 = VAR_14 % (VAR_0 * VAR_10);
  VAR_8[VAR_9] = FUNC_0(VAR_7->fifo_start + VAR_14);
  VAR_14 += 4;
 }

 FUNC_1(2, "RDS samples dump: %*ph\n", VAR_12, VAR_8);

 return VAR_8;
}
