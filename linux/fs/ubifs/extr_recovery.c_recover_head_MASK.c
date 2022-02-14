
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int max_write_size; int leb_size; } ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (void*,int) ;
 int FUNC_2 (struct ubifs_info*,int,void*,int) ;
 int FUNC_3 (struct ubifs_info*,int,void*,int,int,int) ;
 int FUNC_4 (struct ubifs_info*,int) ;

__attribute__((used)) static int FUNC_5(struct ubifs_info *VAR_0, int VAR_1, int VAR_2, void *VAR_3)
{
 int VAR_4 = VAR_0->max_write_size, VAR_5;

 if (VAR_2 + VAR_4 > VAR_0->leb_size)
  VAR_4 = VAR_0->leb_size - VAR_2;

 if (!VAR_4)
  return 0;


 VAR_5 = FUNC_3(VAR_0, VAR_1, VAR_3, VAR_2, VAR_4, 1);
 if (VAR_5 || !FUNC_1(VAR_3, VAR_4)) {
  FUNC_0("cleaning head at %d:%d", VAR_1, VAR_2);
  if (VAR_2 == 0)
   return FUNC_4(VAR_0, VAR_1);
  VAR_5 = FUNC_3(VAR_0, VAR_1, VAR_3, 0, VAR_2, 1);
  if (VAR_5)
   return VAR_5;
  return FUNC_2(VAR_0, VAR_1, VAR_3, VAR_2);
 }

 return 0;
}
