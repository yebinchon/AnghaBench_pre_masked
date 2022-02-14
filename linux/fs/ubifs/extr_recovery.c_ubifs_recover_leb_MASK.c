
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_scan_leb {int dummy; } ;
struct ubifs_info {int leb_size; int min_io_size; TYPE_1__* jheads; } ;
struct ubifs_ch {int len; } ;
struct TYPE_2__ {int grouped; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 struct ubifs_scan_leb* FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct ubifs_scan_leb*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct ubifs_info*,void**,int,int*,int*) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int,int,int,...) ;
 int FUNC_6 (char*,int,int,int) ;
 int FUNC_7 (struct ubifs_scan_leb*,int*) ;
 int FUNC_8 (struct ubifs_scan_leb*,int*) ;
 int FUNC_9 (void*,int) ;
 int FUNC_10 (struct ubifs_info*,struct ubifs_scan_leb*,int) ;
 int FUNC_11 (void*,int) ;
 int FUNC_12 (struct ubifs_info*,void*,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct ubifs_info*,void*,int,int,int) ;
 int FUNC_15 (int,int ) ;
 int FUNC_16 (struct ubifs_info*,struct ubifs_scan_leb*,void*,int) ;
 int FUNC_17 (struct ubifs_info*,int) ;
 int FUNC_18 (struct ubifs_info*,struct ubifs_scan_leb*,int,int) ;
 int FUNC_19 (struct ubifs_info*,char*,int,...) ;
 int FUNC_20 (struct ubifs_info*,void*,int,int,int,int) ;
 int FUNC_21 (struct ubifs_scan_leb*) ;
 int FUNC_22 (struct ubifs_info*,int,int,void*) ;
 struct ubifs_scan_leb* FUNC_23 (struct ubifs_info*,int,int,void*) ;

struct ubifs_scan_leb *FUNC_24(struct ubifs_info *VAR_8, int VAR_9,
      int VAR_10, void *VAR_11, int VAR_12)
{
 int VAR_13 = 0, VAR_14, VAR_15 = VAR_8->leb_size - VAR_10, VAR_16 = VAR_10, VAR_17;
 int VAR_18 = VAR_12 == -1 ? 0 : VAR_8->jheads[VAR_12].grouped;
 struct ubifs_scan_leb *VAR_19;
 void *VAR_20 = VAR_11 + VAR_10;

 FUNC_5("%d:%d, jhead %d, grouped %d", VAR_9, VAR_10, VAR_12, VAR_18);

 VAR_19 = FUNC_23(VAR_8, VAR_9, VAR_10, VAR_11);
 if (FUNC_2(VAR_19))
  return VAR_19;

 FUNC_17(VAR_8, VAR_15 >= 8);
 while (VAR_15 >= 8) {
  FUNC_6("look at LEB %d:%d (%d bytes left)",
    VAR_9, VAR_10, VAR_15);

  FUNC_4();





  VAR_13 = FUNC_20(VAR_8, VAR_20, VAR_15, VAR_9, VAR_10, 1);
  if (VAR_13 == VAR_5) {

   struct ubifs_ch *VAR_21 = VAR_20;
   int VAR_22;

   VAR_14 = FUNC_16(VAR_8, VAR_19, VAR_20, VAR_10);
   if (VAR_14)
    goto error;
   VAR_22 = FUNC_0(FUNC_13(VAR_21->len), 8);
   VAR_10 += VAR_22;
   VAR_20 += VAR_22;
   VAR_15 -= VAR_22;
  } else if (VAR_13 > 0) {

   VAR_10 += VAR_13;
   VAR_20 += VAR_13;
   VAR_15 -= VAR_13;
  } else if (VAR_13 == VAR_6 ||
      VAR_13 == VAR_7 ||
      VAR_13 == VAR_3 ||
      VAR_13 == VAR_4) {
   FUNC_5("found corruption (%d) at %d:%d",
      VAR_13, VAR_9, VAR_10);
   break;
  } else {
   FUNC_19(VAR_8, "unexpected return value %d", VAR_13);
   VAR_14 = -VAR_0;
   goto error;
  }
 }

 if (VAR_13 == VAR_7 || VAR_13 == VAR_3) {
  if (!FUNC_12(VAR_8, VAR_20, VAR_10))
   goto corrupted_rescan;
 } else if (VAR_13 == VAR_4) {
  if (!FUNC_14(VAR_8, VAR_20, VAR_15, VAR_9, VAR_10))
   goto corrupted_rescan;
 } else if (!FUNC_11(VAR_20, VAR_15)) {
  if (!FUNC_12(VAR_8, VAR_20, VAR_10)) {
   int VAR_23 = FUNC_9(VAR_20, VAR_15);





   FUNC_19(VAR_8, "corrupt empty space LEB %d:%d, corruption starts at %d",
      VAR_9, VAR_10, VAR_23);

   VAR_10 += VAR_23;
   VAR_20 += VAR_23;
   goto corrupted;
  }
 }

 VAR_17 = FUNC_15(VAR_10, VAR_8->min_io_size);
 if (VAR_18)




  FUNC_7(VAR_19, &VAR_10);

 if (VAR_12 == VAR_2) {
  while (VAR_10 > VAR_17)
   FUNC_8(VAR_19, &VAR_10);
 }

 VAR_20 = VAR_11 + VAR_10;
 VAR_15 = VAR_8->leb_size - VAR_10;

 FUNC_3(VAR_8, &VAR_20, VAR_9, &VAR_10, &VAR_15);
 FUNC_18(VAR_8, VAR_19, VAR_9, VAR_10);

 VAR_14 = FUNC_10(VAR_8, VAR_19, VAR_16);
 if (VAR_14)
  goto error;

 return VAR_19;

corrupted_rescan:

 FUNC_19(VAR_8, "corruption %d", VAR_13);
 FUNC_20(VAR_8, VAR_20, VAR_15, VAR_9, VAR_10, 0);
corrupted:
 FUNC_22(VAR_8, VAR_9, VAR_10, VAR_20);
 VAR_14 = -VAR_1;
error:
 FUNC_19(VAR_8, "LEB %d scanning failed", VAR_9);
 FUNC_21(VAR_19);
 return FUNC_1(VAR_14);
}
