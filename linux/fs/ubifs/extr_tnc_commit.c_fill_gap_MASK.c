
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_znode {struct ubifs_znode* cnext; int child_cnt; } ;
struct ubifs_info {int leb_size; int ileb_len; int min_io_size; scalar_t__ ileb_buf; struct ubifs_znode* enext; struct ubifs_znode* cnext; } ;


 void* FUNC_0 (int,int) ;
 int FUNC_1 (char*,int,int,int,int,int,int) ;
 int FUNC_2 (struct ubifs_info*,scalar_t__,struct ubifs_znode*,int,int,int) ;
 int FUNC_3 (struct ubifs_info*,int) ;
 int FUNC_4 (struct ubifs_info*,int ) ;
 int FUNC_5 (struct ubifs_info*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_6(struct ubifs_info *VAR_0, int VAR_1, int VAR_2, int VAR_3,
      int *VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

 FUNC_3(VAR_0, (VAR_2 & 7) == 0);
 FUNC_3(VAR_0, (VAR_3 & 7) == 0);
 FUNC_3(VAR_0, VAR_3 >= VAR_2);

 VAR_6 = VAR_3 - VAR_2;
 if (!VAR_6)
  return 0;
 VAR_7 = VAR_2;
 VAR_8 = 0;
 while (VAR_0->enext) {
  VAR_5 = FUNC_4(VAR_0, VAR_0->enext->child_cnt);
  if (VAR_5 < VAR_6) {
   struct ubifs_znode *VAR_10 = VAR_0->enext;
   const int VAR_11 = FUNC_0(VAR_5, 8);
   int VAR_12;

   FUNC_3(VAR_0, VAR_11 <= VAR_6);
   VAR_12 = FUNC_2(VAR_0, VAR_0->ileb_buf + VAR_7, VAR_10,
         VAR_1, VAR_7, VAR_5);
   if (VAR_12)
    return VAR_12;
   VAR_6 -= VAR_11;
   VAR_7 += VAR_11;
   VAR_0->enext = VAR_10->cnext;
   if (VAR_0->enext == VAR_0->cnext)
    VAR_0->enext = ((void*)0);
   VAR_8 += 1;
  } else
   break;
 }
 if (VAR_3 == VAR_0->leb_size) {
  VAR_0->ileb_len = FUNC_0(VAR_7, VAR_0->min_io_size);

  VAR_9 = VAR_0->ileb_len - VAR_7;
 } else

  VAR_9 = VAR_6;
 FUNC_1("LEB %d:%d to %d len %d nodes written %d wasted bytes %d",
        VAR_1, VAR_2, VAR_3, VAR_3 - VAR_2, VAR_8, VAR_9);
 FUNC_5(VAR_0, VAR_0->ileb_buf + VAR_7, VAR_9);
 *VAR_4 += VAR_9;
 return VAR_8;
}
