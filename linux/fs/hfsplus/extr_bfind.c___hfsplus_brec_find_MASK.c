
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct hfs_find_data {int record; scalar_t__ entrylength; scalar_t__ entryoffset; scalar_t__ keylength; scalar_t__ keyoffset; int key; } ;
struct hfs_bnode {int num_recs; } ;
typedef scalar_t__ (* search_strategy_t ) (struct hfs_bnode*,struct hfs_find_data*,int*,int*,int*) ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct hfs_bnode*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct hfs_bnode*,int) ;
 scalar_t__ FUNC_3 (struct hfs_bnode*,int,scalar_t__*) ;

int FUNC_4(struct hfs_bnode *VAR_2, struct hfs_find_data *VAR_3,
     search_strategy_t VAR_4)
{
 u16 VAR_5, VAR_6, VAR_7;
 int VAR_8;
 int VAR_9, VAR_10;
 int VAR_11;

 FUNC_0(!VAR_4);
 VAR_9 = 0;
 VAR_10 = VAR_2->num_recs - 1;
 VAR_11 = -VAR_1;
 do {
  VAR_8 = (VAR_10 + VAR_9) / 2;
  VAR_6 = FUNC_3(VAR_2, VAR_8, &VAR_5);
  VAR_7 = FUNC_2(VAR_2, VAR_8);
  if (VAR_7 == 0) {
   VAR_11 = -VAR_0;
   goto fail;
  }
  FUNC_1(VAR_2, VAR_3->key, VAR_5, VAR_7);
  if (VAR_4(VAR_2, VAR_3, &VAR_9, &VAR_10, &VAR_8)) {
   VAR_11 = 0;
   goto done;
  }
 } while (VAR_9 <= VAR_10);

 if (VAR_8 != VAR_10 && VAR_10 >= 0) {
  VAR_6 = FUNC_3(VAR_2, VAR_10, &VAR_5);
  VAR_7 = FUNC_2(VAR_2, VAR_10);
  if (VAR_7 == 0) {
   VAR_11 = -VAR_0;
   goto fail;
  }
  FUNC_1(VAR_2, VAR_3->key, VAR_5, VAR_7);
 }

done:
 VAR_3->record = VAR_10;
 VAR_3->keyoffset = VAR_5;
 VAR_3->keylength = VAR_7;
 VAR_3->entryoffset = VAR_5 + VAR_7;
 VAR_3->entrylength = VAR_6 - VAR_7;

fail:
 return VAR_11;
}
