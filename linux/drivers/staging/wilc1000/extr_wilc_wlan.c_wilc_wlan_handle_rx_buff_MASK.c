
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wilc_cfg_rsp {scalar_t__ type; scalar_t__ seq_no; } ;
struct wilc {scalar_t__ cfg_seq_no; int cfg_event; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct wilc*,int *,int,int) ;
 int FUNC_3 (struct wilc*) ;
 int FUNC_4 (struct wilc*,int *,int) ;
 int FUNC_5 (struct wilc*,int *,int,struct wilc_cfg_rsp*) ;

__attribute__((used)) static void FUNC_6(struct wilc *VAR_4, u8 *VAR_5, int VAR_6)
{
 int VAR_7 = 0;
 u32 VAR_8;
 u32 VAR_9, VAR_10, VAR_11;
 int VAR_12;
 u8 *VAR_13;

 do {
  VAR_13 = VAR_5 + VAR_7;
  VAR_8 = FUNC_1(VAR_13);

  VAR_12 = (VAR_8 >> 31) & 0x1;
  VAR_10 = (VAR_8 >> 22) & 0x1ff;
  VAR_11 = (VAR_8 >> 11) & 0x7ff;
  VAR_9 = VAR_8 & 0x7ff;

  if (VAR_9 == 0 || VAR_11 == 0)
   break;

  if (VAR_10 & VAR_1) {
   VAR_13 += VAR_0;
   FUNC_4(VAR_4, VAR_13, VAR_9);
  } else {
   if (!VAR_12) {
    if (VAR_9 > 0) {
     FUNC_2(VAR_4, VAR_13,
         VAR_9, VAR_10);
    }
   } else {
    struct wilc_cfg_rsp VAR_14;

    VAR_13 += VAR_10;

    FUNC_5(VAR_4, VAR_13,
         VAR_9,
         &VAR_14);
    if (VAR_14.type == VAR_2) {
     if (VAR_4->cfg_seq_no == VAR_14.seq_no)
      FUNC_0(&VAR_4->cfg_event);
    } else if (VAR_14.type == VAR_3) {
     FUNC_3(VAR_4);
    }
   }
  }
  VAR_7 += VAR_11;
  if (VAR_7 >= VAR_6)
   break;
 } while (1);
}
