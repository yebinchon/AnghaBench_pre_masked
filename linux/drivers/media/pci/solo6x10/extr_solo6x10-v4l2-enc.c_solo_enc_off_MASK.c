
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct solo_enc_dev {int ch; scalar_t__ bw_weight; struct solo_dev* solo_dev; } ;
struct solo_dev {int enc_bw_remain; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct solo_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct solo_enc_dev *VAR_0)
{
 struct solo_dev *VAR_1 = VAR_0->solo_dev;

 VAR_1->enc_bw_remain += VAR_0->bw_weight;

 FUNC_2(VAR_1, FUNC_1(VAR_0->ch), 0);
 FUNC_2(VAR_1, FUNC_0(VAR_0->ch), 0);
}
