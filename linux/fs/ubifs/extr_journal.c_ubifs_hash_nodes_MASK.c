
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int dummy; } ;
struct ubifs_ch {scalar_t__ magic; int len; } ;
struct shash_desc {int dummy; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ubifs_info*,int) ;
 int FUNC_4 (struct ubifs_info*) ;
 int FUNC_5 (struct ubifs_info*,void*,struct shash_desc*) ;
 int FUNC_6 (struct ubifs_info*,struct shash_desc*,void*,int) ;

__attribute__((used)) static int FUNC_7(struct ubifs_info *VAR_1, void *VAR_2,
        int VAR_3, struct shash_desc *VAR_4)
{
 int VAR_5 = FUNC_4(VAR_1);
 int VAR_6;

 while (1) {
  const struct ubifs_ch *VAR_7 = VAR_2;
  int VAR_8 = FUNC_2(VAR_7->len);

  FUNC_3(VAR_1, VAR_3 >= VAR_5);

  if (VAR_3 == VAR_5)
   break;

  FUNC_3(VAR_1, VAR_3 > VAR_8);
  FUNC_3(VAR_1, VAR_7->magic == FUNC_1(VAR_0));

  VAR_6 = FUNC_6(VAR_1, VAR_4, (void *)VAR_2, VAR_8);
  if (VAR_6)
   return VAR_6;

  VAR_2 += FUNC_0(VAR_8, 8);
  VAR_3 -= FUNC_0(VAR_8, 8);
 }

 return FUNC_5(VAR_1, VAR_2, VAR_4);
}
