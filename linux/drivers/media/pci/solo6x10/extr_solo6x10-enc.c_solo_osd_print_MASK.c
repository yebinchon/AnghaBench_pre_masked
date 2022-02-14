
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct solo_enc_dev {int* osd_text; int* osd_buf; int ch; struct solo_dev* solo_dev; } ;
struct solo_dev {int dummy; } ;
struct font_desc {scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (struct solo_dev*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int const) ;
 struct font_desc* FUNC_3 (char*) ;
 int FUNC_4 (int*,int ,int ) ;
 int FUNC_5 (struct solo_dev*,int,int*,int ,int ,int ,int ) ;
 int FUNC_6 (struct solo_dev*,int ) ;
 int FUNC_7 (struct solo_dev*,int ,int) ;

int FUNC_8(struct solo_enc_dev *VAR_3)
{
 struct solo_dev *VAR_4 = VAR_3->solo_dev;
 u8 *VAR_5 = VAR_3->osd_text;
 u8 *VAR_6 = VAR_3->osd_buf;
 u32 VAR_7;
 const struct font_desc *VAR_8 = FUNC_3("VGA8x16");
 const u8 *VAR_9;
 int VAR_10, VAR_11;

 if (FUNC_1(!VAR_8))
  return -VAR_0;

 VAR_7 = FUNC_6(VAR_4, VAR_2);
 if (!*VAR_5) {

  VAR_7 &= ~(1 << VAR_3->ch);
  goto out;
 }

 FUNC_4(VAR_6, 0, VAR_1);
 VAR_9 = (const u8 *)VAR_8->data;

 for (VAR_10 = 0; *VAR_5; VAR_10++, VAR_5++) {
  for (VAR_11 = 0; VAR_11 < 16; VAR_11++) {
   VAR_6[(VAR_11 << 1) | (VAR_10 & 1) | ((VAR_10 & ~1) << 4)] =
       FUNC_2(VAR_9[(*VAR_5 << 4) | VAR_11]);
  }
 }

 FUNC_5(VAR_4, 1, VAR_6,
       FUNC_0(VAR_4, VAR_3->ch),
       VAR_1, 0, 0);


 VAR_7 |= (1 << VAR_3->ch);

out:
 FUNC_7(VAR_4, VAR_2, VAR_7);
 return 0;
}
