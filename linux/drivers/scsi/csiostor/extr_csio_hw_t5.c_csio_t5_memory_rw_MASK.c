
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u32 ;
struct csio_hw {int pfn; } ;
typedef int __be32 ;


 int FUNC_0 (void*) ;
 int VAR_0 ;
 int FUNC_1 (void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct csio_hw*,char*,int,int,...) ;
 void* FUNC_7 (struct csio_hw*,int) ;
 int FUNC_8 (struct csio_hw*,int,int) ;

__attribute__((used)) static int
FUNC_9(struct csio_hw *VAR_7, u32 VAR_8, int VAR_9, u32 VAR_10,
  u32 VAR_11, uint32_t *VAR_12, int VAR_13)
{
 u32 VAR_14, VAR_15, VAR_16, VAR_17;
 u32 VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;




 if ((VAR_10 & 0x3) || (VAR_11 & 0x3))
  return -VAR_0;
 VAR_18 = FUNC_0(FUNC_7(VAR_7, VAR_1));
 if (VAR_9 != VAR_4)
  VAR_17 = (VAR_9 * (VAR_18 * 1024 * 1024));
 else {
  VAR_19 = FUNC_1(FUNC_7(VAR_7,
             VAR_2));
  VAR_17 = (VAR_3 * VAR_18 + VAR_19) * 1024 * 1024;
 }


 VAR_10 = VAR_10 + VAR_17;
 VAR_21 = FUNC_7(VAR_7,
   FUNC_3(VAR_5, VAR_8));
 VAR_22 = 1 << (FUNC_5(VAR_21) + 10);
 VAR_23 = FUNC_2(VAR_21) << 10;

 VAR_15 = VAR_10 & ~(VAR_22-1);
 VAR_16 = VAR_10 - VAR_15;
 VAR_20 = FUNC_4(VAR_7->pfn);

 FUNC_6(VAR_7, "csio_t5_memory_rw: mem_reg: 0x%x, mem_aperture: 0x%x\n",
   VAR_21, VAR_22);
 FUNC_6(VAR_7, "csio_t5_memory_rw: mem_base: 0x%x, mem_offset: 0x%x\n",
   VAR_23, VAR_17);
 FUNC_6(VAR_7, "csio_t5_memory_rw: start:0x%x, offset:0x%x, win_pf:%d\n",
   VAR_15, VAR_16, VAR_20);
 FUNC_6(VAR_7, "csio_t5_memory_rw: mtype: %d, addr: 0x%x, len: %d\n",
   VAR_9, VAR_10, VAR_11);

 for (VAR_14 = VAR_15; VAR_11 > 0; VAR_14 += VAR_22, VAR_16 = 0) {





  FUNC_8(VAR_7, VAR_14 | VAR_20,
   FUNC_3(VAR_6, VAR_8));
  FUNC_7(VAR_7,
   FUNC_3(VAR_6, VAR_8));

  while (VAR_16 < VAR_22 && VAR_11 > 0) {
   if (VAR_13)
    *VAR_12++ = FUNC_7(VAR_7, VAR_23 + VAR_16);
   else
    FUNC_8(VAR_7, *VAR_12++, VAR_23 + VAR_16);

   VAR_16 += sizeof(__be32);
   VAR_11 -= sizeof(__be32);
  }
 }
 return 0;
}
