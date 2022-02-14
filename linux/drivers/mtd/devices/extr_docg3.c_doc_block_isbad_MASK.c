
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {struct docg3* priv; } ;
struct docg3 {int max_block; int* bbt; int reliable; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int*,int*,int*,int*,int ) ;
 int FUNC_1 (char*,int ,int,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_2, loff_t VAR_3)
{
 struct docg3 *VAR_4 = VAR_2->priv;
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

 FUNC_0(VAR_3, &VAR_5, &VAR_6, &VAR_7, &VAR_8,
  VAR_4->reliable);
 FUNC_1("doc_block_isbad(from=%lld) => block=(%d,%d), page=%d, ofs=%d\n",
  VAR_3, VAR_5, VAR_6, VAR_7, VAR_8);

 if (VAR_5 < VAR_0)
  return 0;
 if (VAR_6 > VAR_4->max_block)
  return -VAR_1;

 VAR_9 = VAR_4->bbt[VAR_5 >> 3] & (1 << (VAR_5 & 0x7));
 return !VAR_9;
}
