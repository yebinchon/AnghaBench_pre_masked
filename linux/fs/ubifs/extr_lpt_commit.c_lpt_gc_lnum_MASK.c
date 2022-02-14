
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int leb_size; int lp_mutex; void* lpt_buf; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct ubifs_info*,int) ;
 int FUNC_2 (struct ubifs_info*,void*,int*) ;
 int FUNC_3 (struct ubifs_info*,void*,int) ;
 int FUNC_4 (struct ubifs_info*,void*,int) ;
 int FUNC_5 (struct ubifs_info*,int,int,int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ubifs_info*,int) ;
 int FUNC_9 (struct ubifs_info*,int,void*,int ,int,int) ;

__attribute__((used)) static int FUNC_10(struct ubifs_info *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3 = VAR_0->leb_size, VAR_4, VAR_5, VAR_6, VAR_7;
 void *VAR_8 = VAR_0->lpt_buf;

 FUNC_0("LEB %d", VAR_1);

 VAR_2 = FUNC_9(VAR_0, VAR_1, VAR_8, 0, VAR_0->leb_size, 1);
 if (VAR_2)
  return VAR_2;

 while (1) {
  if (!FUNC_4(VAR_0, VAR_8, VAR_3)) {
   int VAR_9;

   VAR_9 = FUNC_3(VAR_0, VAR_8, VAR_3);
   if (VAR_9) {
    VAR_8 += VAR_9;
    VAR_3 -= VAR_9;
    continue;
   }
   return 0;
  }
  VAR_4 = FUNC_2(VAR_0, VAR_8, &VAR_5);
  VAR_6 = FUNC_1(VAR_0, VAR_4);
  VAR_7 = VAR_0->leb_size - VAR_3;
  FUNC_8(VAR_0, VAR_6 != 0);
  FUNC_6(&VAR_0->lp_mutex);
  VAR_2 = FUNC_5(VAR_0, VAR_4, VAR_5, VAR_1, VAR_7);
  FUNC_7(&VAR_0->lp_mutex);
  if (VAR_2)
   return VAR_2;
  VAR_8 += VAR_6;
  VAR_3 -= VAR_6;
 }
 return 0;
}
