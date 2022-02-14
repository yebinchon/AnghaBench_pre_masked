
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct stmpe_variant_info {int af_bits; int (* get_altfunc ) (struct stmpe*,int) ;} ;
struct stmpe {int* regs; int num_gpios; int lock; struct stmpe_variant_info* variant; } ;
typedef enum stmpe_block { ____Placeholder_stmpe_block } stmpe_block ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct stmpe*,int,int,int*) ;
 int FUNC_3 (struct stmpe*,int,int,int*) ;
 int FUNC_4 (struct stmpe*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct stmpe*,int) ;

int FUNC_8(struct stmpe *VAR_2, u32 VAR_3, enum stmpe_block VAR_4)
{
 struct stmpe_variant_info *VAR_5 = VAR_2->variant;
 u8 VAR_6 = VAR_2->regs[VAR_1];
 int VAR_7 = VAR_5->af_bits;
 int VAR_8 = FUNC_0(VAR_2->num_gpios * VAR_7, 8);
 int VAR_9 = (1 << VAR_7) - 1;
 u8 VAR_10[8];
 int VAR_11, VAR_12, VAR_13;

 if (!VAR_5->get_altfunc)
  return 0;

 VAR_12 = 8 / VAR_7;
 FUNC_5(&VAR_2->lock);

 VAR_13 = FUNC_4(VAR_2, VAR_0);
 if (VAR_13 < 0)
  goto out;

 VAR_13 = FUNC_2(VAR_2, VAR_6, VAR_8, VAR_10);
 if (VAR_13 < 0)
  goto out;

 VAR_11 = VAR_5->get_altfunc(VAR_2, VAR_4);

 while (VAR_3) {
  int VAR_14 = FUNC_1(VAR_3);
  int VAR_15 = VAR_8 - (VAR_14 / VAR_12) - 1;
  int VAR_16 = (VAR_14 % VAR_12) * (8 / VAR_12);

  VAR_10[VAR_15] &= ~(VAR_9 << VAR_16);
  VAR_10[VAR_15] |= VAR_11 << VAR_16;

  VAR_3 &= ~(1 << VAR_14);
 }

 VAR_13 = FUNC_3(VAR_2, VAR_6, VAR_8, VAR_10);

out:
 FUNC_6(&VAR_2->lock);
 return VAR_13;
}
