
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int leb_size; int min_io_size; } ;
struct ubifs_ch {int len; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*,void*,int) ;
 int FUNC_3 (struct ubifs_info*,int,void*,int) ;
 int FUNC_4 (struct ubifs_info*,int) ;
 int FUNC_5 (struct ubifs_info*,void*,int) ;

__attribute__((used)) static int FUNC_6(struct ubifs_info *VAR_0, void *VAR_1, int *VAR_2, int *VAR_3,
      void *VAR_4)
{
 struct ubifs_ch *VAR_5 = VAR_4;
 int VAR_6 = FUNC_1(VAR_5->len), VAR_7 = VAR_0->leb_size - *VAR_3;

 if (VAR_6 > VAR_7) {
  int VAR_8 = FUNC_0(*VAR_3, VAR_0->min_io_size), VAR_9;

  FUNC_5(VAR_0, VAR_1 + *VAR_3, VAR_8 - *VAR_3);
  VAR_9 = FUNC_3(VAR_0, *VAR_2, VAR_1, VAR_8);
  if (VAR_9)
   return VAR_9;
  *VAR_2 = FUNC_4(VAR_0, *VAR_2);
  *VAR_3 = 0;
 }
 FUNC_2(VAR_1 + *VAR_3, VAR_4, VAR_6);
 *VAR_3 += FUNC_0(VAR_6, 8);
 return 0;
}
