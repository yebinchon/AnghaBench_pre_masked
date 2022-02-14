
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath6kl_dbglog_hdr {int next; int bufsize; int length; int buffer_addr; int dbuf_addr; } ;
typedef struct ath6kl_dbglog_hdr u8 ;
typedef scalar_t__ u32 ;
struct ath6kl_dbglog_buf {int next; int bufsize; int length; int buffer_addr; int dbuf_addr; } ;
struct ath6kl {int target_type; } ;
typedef int debug_hdr ;
typedef int debug_buf ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct ath6kl*,struct ath6kl_dbglog_hdr*,scalar_t__) ;
 int FUNC_5 (struct ath6kl*,scalar_t__,struct ath6kl_dbglog_hdr*,int) ;
 int FUNC_6 (struct ath6kl*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_7 (struct ath6kl*,int ) ;
 int FUNC_8 (char*) ;
 int VAR_5 ;
 int FUNC_9 (struct ath6kl_dbglog_hdr*) ;
 struct ath6kl_dbglog_hdr* FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int ) ;

int FUNC_12(struct ath6kl *VAR_6)
{
 struct ath6kl_dbglog_hdr VAR_7;
 struct ath6kl_dbglog_buf VAR_8;
 u32 VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13, VAR_14;
 u8 *VAR_15;

 VAR_15 = FUNC_10(VAR_0, VAR_4);
 if (!VAR_15)
  return -VAR_2;

 VAR_9 = FUNC_2(VAR_6->target_type,
       FUNC_7(VAR_6,
          FUNC_1(VAR_5)));

 VAR_13 = FUNC_6(VAR_6, VAR_9, &VAR_12);
 if (VAR_13)
  goto out;


 if (VAR_12 == 0) {
  FUNC_8("Invalid address for debug_hdr_addr\n");
  VAR_13 = -VAR_1;
  goto out;
 }

 VAR_9 = FUNC_2(VAR_6->target_type, VAR_12);
 VAR_13 = FUNC_5(VAR_6, VAR_9, &VAR_7, sizeof(VAR_7));
 if (VAR_13)
  goto out;

 VAR_9 = FUNC_2(VAR_6->target_type,
       FUNC_11(VAR_7.dbuf_addr));
 VAR_11 = VAR_9;
 VAR_13 = FUNC_5(VAR_6, VAR_9, &VAR_8, sizeof(VAR_8));
 if (VAR_13)
  goto out;

 VAR_14 = 100;

 do {
  VAR_9 = FUNC_2(VAR_6->target_type,
        FUNC_11(VAR_8.buffer_addr));
  VAR_10 = FUNC_11(VAR_8.length);

  if (VAR_10 != 0 && (FUNC_11(VAR_8.length) <=
        FUNC_11(VAR_8.bufsize))) {
   VAR_10 = FUNC_0(VAR_10, 4);

   VAR_13 = FUNC_5(VAR_6, VAR_9,
            VAR_15, VAR_10);
   if (VAR_13)
    goto out;

   FUNC_4(VAR_6, VAR_15, VAR_10);
  }

  VAR_9 = FUNC_2(VAR_6->target_type,
        FUNC_11(VAR_8.next));
  VAR_13 = FUNC_5(VAR_6, VAR_9, &VAR_8,
           sizeof(VAR_8));
  if (VAR_13)
   goto out;

  VAR_14--;

  if (FUNC_3(VAR_14 == 0)) {
   VAR_13 = -VAR_3;
   goto out;
  }
 } while (VAR_9 != VAR_11);

out:
 FUNC_9(VAR_15);

 return VAR_13;
}
