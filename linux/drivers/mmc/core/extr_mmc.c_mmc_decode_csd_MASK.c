
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmc_csd {int structure; int mmca_vsn; int taac_ns; int taac_clks; int max_dtr; int cmdclass; int capacity; int read_blkbits; int read_partial; int write_misalign; int read_misalign; int dsr_imp; int r2w_factor; int write_blkbits; int write_partial; unsigned int erase_size; } ;
struct mmc_card {int host; int * raw_csd; struct mmc_csd csd; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,scalar_t__) ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;

__attribute__((used)) static int FUNC_3(struct mmc_card *VAR_5)
{
 struct mmc_csd *VAR_6 = &VAR_5->csd;
 unsigned int VAR_7, VAR_8, VAR_9, VAR_10;
 u32 *VAR_11 = VAR_5->raw_csd;






 VAR_6->structure = FUNC_0(VAR_11, 126, 2);
 if (VAR_6->structure == 0) {
  FUNC_2("%s: unrecognised CSD structure version %d\n",
   FUNC_1(VAR_5->host), VAR_6->structure);
  return -VAR_0;
 }

 VAR_6->mmca_vsn = FUNC_0(VAR_11, 122, 4);
 VAR_8 = FUNC_0(VAR_11, 115, 4);
 VAR_7 = FUNC_0(VAR_11, 112, 3);
 VAR_6->taac_ns = (VAR_1[VAR_7] * VAR_2[VAR_8] + 9) / 10;
 VAR_6->taac_clks = FUNC_0(VAR_11, 104, 8) * 100;

 VAR_8 = FUNC_0(VAR_11, 99, 4);
 VAR_7 = FUNC_0(VAR_11, 96, 3);
 VAR_6->max_dtr = VAR_3[VAR_7] * VAR_4[VAR_8];
 VAR_6->cmdclass = FUNC_0(VAR_11, 84, 12);

 VAR_7 = FUNC_0(VAR_11, 47, 3);
 VAR_8 = FUNC_0(VAR_11, 62, 12);
 VAR_6->capacity = (1 + VAR_8) << (VAR_7 + 2);

 VAR_6->read_blkbits = FUNC_0(VAR_11, 80, 4);
 VAR_6->read_partial = FUNC_0(VAR_11, 79, 1);
 VAR_6->write_misalign = FUNC_0(VAR_11, 78, 1);
 VAR_6->read_misalign = FUNC_0(VAR_11, 77, 1);
 VAR_6->dsr_imp = FUNC_0(VAR_11, 76, 1);
 VAR_6->r2w_factor = FUNC_0(VAR_11, 26, 3);
 VAR_6->write_blkbits = FUNC_0(VAR_11, 22, 4);
 VAR_6->write_partial = FUNC_0(VAR_11, 21, 1);

 if (VAR_6->write_blkbits >= 9) {
  VAR_9 = FUNC_0(VAR_11, 42, 5);
  VAR_10 = FUNC_0(VAR_11, 37, 5);
  VAR_6->erase_size = (VAR_9 + 1) * (VAR_10 + 1);
  VAR_6->erase_size <<= VAR_6->write_blkbits - 9;
 }

 return 0;
}
