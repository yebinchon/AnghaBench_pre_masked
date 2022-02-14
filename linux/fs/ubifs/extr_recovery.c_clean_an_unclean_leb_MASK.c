
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_unclean_leb {int lnum; int endpt; } ;
struct ubifs_info {int min_io_size; int sbuf; } ;
struct ubifs_ch {int len; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ubifs_info*,char*,int,int) ;
 int FUNC_5 (struct ubifs_info*,int,void*,int) ;
 int FUNC_6 (struct ubifs_info*,int,void*,int,int,int ) ;
 int FUNC_7 (struct ubifs_info*,int) ;
 int FUNC_8 (struct ubifs_info*,void*,int) ;
 int FUNC_9 (struct ubifs_info*,void*,int,int,int,int) ;
 int FUNC_10 (struct ubifs_info*,int,int,void*) ;

__attribute__((used)) static int FUNC_11(struct ubifs_info *VAR_4,
    struct ubifs_unclean_leb *VAR_5, void *VAR_6)
{
 int VAR_7, VAR_8 = VAR_5->lnum, VAR_9 = 0, VAR_10 = VAR_5->endpt, VAR_11 = 1;
 void *VAR_12 = VAR_6;

 FUNC_2("LEB %d len %d", VAR_8, VAR_10);

 if (VAR_10 == 0) {

  return FUNC_7(VAR_4, VAR_8);
 }

 VAR_7 = FUNC_6(VAR_4, VAR_8, VAR_12, VAR_9, VAR_10, 0);
 if (VAR_7 && VAR_7 != -VAR_0)
  return VAR_7;

 while (VAR_10 >= 8) {
  int VAR_13;

  FUNC_1();


  VAR_13 = FUNC_9(VAR_4, VAR_12, VAR_10, VAR_8, VAR_9, VAR_11);

  if (VAR_13 == VAR_2) {

   struct ubifs_ch *VAR_14 = VAR_12;
   int VAR_15;

   VAR_15 = FUNC_0(FUNC_3(VAR_14->len), 8);
   VAR_9 += VAR_15;
   VAR_12 += VAR_15;
   VAR_10 -= VAR_15;
   continue;
  }

  if (VAR_13 > 0) {

   VAR_9 += VAR_13;
   VAR_12 += VAR_13;
   VAR_10 -= VAR_13;
   continue;
  }

  if (VAR_13 == VAR_3) {
   FUNC_4(VAR_4, "unexpected empty space at %d:%d",
      VAR_8, VAR_9);
   return -VAR_1;
  }

  if (VAR_11) {

   VAR_11 = 0;
   continue;
  }

  FUNC_10(VAR_4, VAR_8, VAR_9, VAR_12);
  return -VAR_1;
 }


 VAR_10 = FUNC_0(VAR_5->endpt, VAR_4->min_io_size);
 if (VAR_10 > VAR_5->endpt) {
  int VAR_16 = VAR_10 - FUNC_0(VAR_5->endpt, 8);

  if (VAR_16 > 0) {
   VAR_12 = VAR_4->sbuf + VAR_10 - VAR_16;
   FUNC_8(VAR_4, VAR_12, VAR_16);
  }
 }


 VAR_7 = FUNC_5(VAR_4, VAR_8, VAR_6, VAR_10);
 if (VAR_7)
  return VAR_7;

 FUNC_2("cleaned LEB %d", VAR_8);

 return 0;
}
