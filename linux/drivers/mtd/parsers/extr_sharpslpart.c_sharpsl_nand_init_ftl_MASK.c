
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sharpsl_ftl {unsigned int logmax; unsigned int* log2phy; } ;
struct mtd_info {int erasesize; int oobsize; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int *) ;
 unsigned int* FUNC_1 (unsigned int,int,int ) ;
 int * FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct mtd_info*,int) ;
 unsigned int FUNC_4 (int ,struct mtd_info*) ;
 int FUNC_5 (char*,unsigned int,unsigned int,unsigned int) ;
 unsigned int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct mtd_info*,int,int *) ;

__attribute__((used)) static int FUNC_8(struct mtd_info *VAR_4, struct sharpsl_ftl *VAR_5)
{
 unsigned int VAR_6, VAR_7, VAR_8;
 loff_t VAR_9;
 u8 *VAR_10;
 int VAR_11, VAR_12;

 VAR_10 = FUNC_2(VAR_4->oobsize, VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_8 = FUNC_4(VAR_2, VAR_4);


 VAR_5->logmax = ((VAR_8 * 95) / 100) - 1;

 VAR_5->log2phy = FUNC_1(VAR_5->logmax, sizeof(*VAR_5->log2phy),
         VAR_1);
 if (!VAR_5->log2phy) {
  VAR_12 = -VAR_0;
  goto exit;
 }


 for (VAR_11 = 0; VAR_11 < VAR_5->logmax; VAR_11++)
  VAR_5->log2phy[VAR_11] = VAR_3;


 for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
  VAR_9 = (loff_t)VAR_6 * VAR_4->erasesize;

  if (FUNC_3(VAR_4, VAR_9))
   continue;

  if (FUNC_7(VAR_4, VAR_9, VAR_10))
   continue;


  VAR_7 = FUNC_6(VAR_10);


  if (VAR_7 > 0 && VAR_7 < VAR_5->logmax) {
   if (VAR_5->log2phy[VAR_7] == VAR_3)
    VAR_5->log2phy[VAR_7] = VAR_6;
  }
 }

 FUNC_5("Sharp SL FTL: %d blocks used (%d logical, %d reserved)\n",
  VAR_8, VAR_5->logmax, VAR_8 - VAR_5->logmax);

 VAR_12 = 0;
exit:
 FUNC_0(VAR_10);
 return VAR_12;
}
