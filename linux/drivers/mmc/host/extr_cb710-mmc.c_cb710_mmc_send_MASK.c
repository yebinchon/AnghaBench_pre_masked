
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_mapping_iter {int dummy; } ;
struct mmc_data {size_t blocks; int blksz; int sg_len; int sg; } ;
struct cb710_slot {scalar_t__ iobase; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct cb710_slot*,int ,int ,int ) ;
 int FUNC_1 (struct cb710_slot*,int ) ;
 int FUNC_2 (struct sg_mapping_iter*,scalar_t__,int) ;
 int FUNC_3 (struct cb710_slot*,int ) ;
 int FUNC_4 (struct sg_mapping_iter*,int ,int ,int ) ;
 int FUNC_5 (struct sg_mapping_iter*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct cb710_slot *VAR_8, struct mmc_data *VAR_9)
{
 struct sg_mapping_iter VAR_10;
 size_t VAR_11, VAR_12 = VAR_9->blocks;
 int VAR_13 = 0;



 if (FUNC_6(VAR_9->blocks > 1 && VAR_9->blksz & 15))
  return -VAR_6;

 FUNC_4(&VAR_10, VAR_9->sg, VAR_9->sg_len, VAR_7);

 FUNC_0(VAR_8, VAR_1,
  0, VAR_0);

 while (VAR_12-- > 0) {
  VAR_11 = (VAR_9->blksz + 15) >> 4;
  do {
   if (!(FUNC_1(VAR_8, VAR_5)
       & VAR_4)) {
    VAR_13 = FUNC_3(VAR_8,
     VAR_3);
    if (VAR_13)
     goto out;
   }
   FUNC_2(&VAR_10,
    VAR_8->iobase + VAR_2, 4);
  } while (--VAR_11);
 }
out:
 FUNC_5(&VAR_10);
 return VAR_13;
}
