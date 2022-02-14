
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct solo_enc_dev {int ch; scalar_t__ bw_weight; scalar_t__ type; int interval; int gop; int qp; int mode; scalar_t__ interlaced; scalar_t__ sequence; struct solo_dev* solo_dev; } ;
struct solo_dev {scalar_t__ enc_bw_remain; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct solo_dev*,int ,int) ;
 int FUNC_10 (struct solo_enc_dev*) ;

__attribute__((used)) static int FUNC_11(struct solo_enc_dev *VAR_2)
{
 u8 VAR_3 = VAR_2->ch;
 struct solo_dev *VAR_4 = VAR_2->solo_dev;
 u8 VAR_5;

 FUNC_10(VAR_2);


 if (VAR_2->bw_weight > VAR_4->enc_bw_remain)
  return -VAR_0;
 VAR_2->sequence = 0;
 VAR_4->enc_bw_remain -= VAR_2->bw_weight;

 if (VAR_2->type == VAR_1)
  FUNC_9(VAR_4, FUNC_0(VAR_3), 1);


 FUNC_9(VAR_4, FUNC_3(VAR_3), 0);


 FUNC_9(VAR_4, FUNC_6(VAR_3),
         VAR_2->interlaced ? 1 : 0);

 if (VAR_2->interlaced)
  VAR_5 = VAR_2->interval - 1;
 else
  VAR_5 = VAR_2->interval;


 FUNC_9(VAR_4, FUNC_4(VAR_3), VAR_2->gop);
 FUNC_9(VAR_4, FUNC_7(VAR_3), VAR_2->qp);
 FUNC_9(VAR_4, FUNC_1(VAR_3), VAR_5);


 FUNC_9(VAR_4, FUNC_5(VAR_3), VAR_2->gop);
 FUNC_9(VAR_4, FUNC_8(VAR_3), VAR_2->qp);
 FUNC_9(VAR_4, FUNC_2(VAR_3), VAR_5);


 FUNC_9(VAR_4, FUNC_3(VAR_3), VAR_2->mode);

 return 0;
}
