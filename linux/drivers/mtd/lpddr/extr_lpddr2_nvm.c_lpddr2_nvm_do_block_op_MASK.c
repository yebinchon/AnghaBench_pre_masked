
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ u_long ;
typedef int u_char ;
struct mtd_info {scalar_t__ erasesize; struct map_info* priv; } ;
struct map_info {int dummy; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct map_info*,int ,int,scalar_t__,scalar_t__,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct map_info*) ;
 int FUNC_4 (struct map_info*) ;

__attribute__((used)) static int FUNC_5(struct mtd_info *VAR_1, loff_t VAR_2,
 uint64_t VAR_3, u_char VAR_4)
{
 struct map_info *VAR_5 = VAR_1->priv;
 u_long VAR_6, VAR_7;
 int VAR_8 = 0;

 FUNC_1(&VAR_0);

 FUNC_4(VAR_5);

 VAR_6 = VAR_2;
 VAR_7 = VAR_6 + VAR_3;

 do {
  VAR_8 = FUNC_0(VAR_5, VAR_4, 0x00, VAR_6, VAR_6, ((void*)0));
  if (VAR_8)
   goto out;
  VAR_6 += VAR_1->erasesize;
 } while (VAR_6 < VAR_7);

out:
 FUNC_3(VAR_5);
 FUNC_2(&VAR_0);
 return VAR_8;
}
