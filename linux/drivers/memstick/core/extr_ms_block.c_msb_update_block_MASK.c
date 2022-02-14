
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct scatterlist {int dummy; } ;
struct msb_data {size_t* lba_to_pba_table; int read_only; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct msb_data*,size_t) ;
 size_t FUNC_2 (struct msb_data*,int ) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (struct msb_data*,size_t) ;
 int FUNC_5 (struct msb_data*,size_t,int ,int) ;
 int FUNC_6 (struct msb_data*,size_t,size_t,struct scatterlist*,int) ;
 int FUNC_7 (char*,int) ;

__attribute__((used)) static int FUNC_8(struct msb_data *VAR_4, u16 VAR_5,
 struct scatterlist *VAR_6, int VAR_7)
{
 u16 VAR_8, VAR_9;
 int VAR_10, VAR_11;

 VAR_8 = VAR_4->lba_to_pba_table[VAR_5];
 FUNC_0("start of a block update at lba  %d, pba %d", VAR_5, VAR_8);

 if (VAR_8 != VAR_3) {
  FUNC_0("setting the update flag on the block");
  FUNC_5(VAR_4, VAR_8, 0,
    0xFF & ~VAR_2);
 }

 for (VAR_11 = 0; VAR_11 < 3; VAR_11++) {
  VAR_9 = FUNC_2(VAR_4,
   FUNC_3(VAR_5));

  if (VAR_9 == VAR_3) {
   VAR_10 = -VAR_1;
   goto out;
  }

  FUNC_0("block update: writing updated block to the pba %d",
        VAR_9);
  VAR_10 = FUNC_6(VAR_4, VAR_9, VAR_5, VAR_6, VAR_7);
  if (VAR_10 == -VAR_0) {
   FUNC_4(VAR_4, VAR_9);
   continue;
  }

  if (VAR_10)
   goto out;

  FUNC_0("block update: erasing the old block");
  FUNC_1(VAR_4, VAR_8);
  VAR_4->lba_to_pba_table[VAR_5] = VAR_9;
  return 0;
 }
out:
 if (VAR_10) {
  FUNC_7("block update error after %d tries,  switching to r/o mode", VAR_11);
  VAR_4->read_only = 1;
 }
 return VAR_10;
}
