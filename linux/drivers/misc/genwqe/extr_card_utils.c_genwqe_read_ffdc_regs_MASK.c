
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
typedef unsigned int u32 ;
struct genwqe_reg {int addr; int val; } ;
struct genwqe_dev {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned long long FUNC_0 (struct genwqe_dev*,unsigned int) ;
 int FUNC_1 (struct genwqe_dev*,struct genwqe_reg*,unsigned int*,unsigned int,unsigned int,unsigned long long) ;

int FUNC_2(struct genwqe_dev *VAR_4, struct genwqe_reg *VAR_5,
    unsigned int VAR_6, int VAR_7)
{
 unsigned int VAR_8, VAR_9, VAR_10 = 0;
 u32 VAR_11, VAR_12, VAR_13, VAR_14;
 u64 VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;


 VAR_15 = FUNC_0(VAR_4, VAR_2);
 FUNC_1(VAR_4, VAR_5, &VAR_10, VAR_6, VAR_2, VAR_15);


 VAR_16 = FUNC_0(VAR_4, VAR_3);
 FUNC_1(VAR_4, VAR_5, &VAR_10, VAR_6, VAR_3, VAR_16);


 VAR_17 = FUNC_0(VAR_4, VAR_1);
 FUNC_1(VAR_4, VAR_5, &VAR_10, VAR_6, VAR_1, VAR_17);


 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {


  VAR_11 = (VAR_8 << 24) | 0x008;
  VAR_18 = FUNC_0(VAR_4, VAR_11);
  FUNC_1(VAR_4, VAR_5, &VAR_10, VAR_6, VAR_11, VAR_18);


  VAR_12 = (VAR_8 << 24) | 0x018;
  VAR_19 = FUNC_0(VAR_4, VAR_12);
  FUNC_1(VAR_4, VAR_5, &VAR_10, VAR_6, VAR_12, VAR_19);

  for (VAR_9 = 0; VAR_9 < 64; VAR_9++) {

   if (!VAR_7 && (!(VAR_18 & (1ull << VAR_9))))
    continue;

   VAR_13 = (VAR_8 << 24) | (0x100 + 8 * VAR_9);
   VAR_20 = FUNC_0(VAR_4, VAR_13);
   FUNC_1(VAR_4, VAR_5, &VAR_10, VAR_6, VAR_13, VAR_20);

   VAR_14 = (VAR_8 << 24) | (0x300 + 8 * VAR_9);
   VAR_21 = FUNC_0(VAR_4, VAR_14);
   FUNC_1(VAR_4, VAR_5, &VAR_10, VAR_6, VAR_14, VAR_21);
  }
 }


 for (VAR_8 = VAR_10; VAR_8 < VAR_6; VAR_8++) {
  VAR_5[VAR_8].addr = 0xffffffff;
  VAR_5[VAR_8].val = 0xffffffffffffffffull;
 }
 return VAR_10;
}
