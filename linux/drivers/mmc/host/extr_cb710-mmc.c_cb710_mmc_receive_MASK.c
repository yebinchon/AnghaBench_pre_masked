
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_mapping_iter {int dummy; } ;
struct mmc_data {size_t blocks; int blksz; int sg_len; int sg; } ;
struct cb710_slot {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cb710_slot*) ;
 int FUNC_1 (struct cb710_slot*,struct sg_mapping_iter*,size_t) ;
 int FUNC_2 (struct cb710_slot*,int ,size_t,int ) ;
 int FUNC_3 (struct sg_mapping_iter*,int ,int ,int ) ;
 int FUNC_4 (struct sg_mapping_iter*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct cb710_slot *VAR_4, struct mmc_data *VAR_5)
{
 struct sg_mapping_iter VAR_6;
 size_t VAR_7, VAR_8 = VAR_5->blocks;
 int VAR_9 = 0;



 if (FUNC_5(VAR_5->blksz & 15 && (VAR_5->blocks != 1 || VAR_5->blksz != 8)))
  return -VAR_2;

 FUNC_3(&VAR_6, VAR_5->sg, VAR_5->sg_len, VAR_3);

 FUNC_2(VAR_4, VAR_1,
  15, VAR_0);

 FUNC_0(VAR_4);

 while (VAR_8-- > 0) {
  VAR_7 = VAR_5->blksz;

  while (VAR_7 >= 16) {
   VAR_9 = FUNC_1(VAR_4, &VAR_6, 4);
   if (VAR_9)
    goto out;
   VAR_7 -= 16;
  }

  if (!VAR_7)
   continue;

  FUNC_2(VAR_4, VAR_1,
   VAR_7 - 1, VAR_0);

  VAR_7 = (VAR_7 >= 8) ? 4 : 2;
  VAR_9 = FUNC_1(VAR_4, &VAR_6, VAR_7);
  if (VAR_9)
   goto out;
 }
out:
 FUNC_4(&VAR_6);
 return VAR_9;
}
