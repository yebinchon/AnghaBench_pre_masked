
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt7615_dev {int ofdm_sensitivity; int cck_sensitivity; int last_cca_adj; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct mt7615_dev*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct mt7615_dev *VAR_9)
{
 FUNC_4(VAR_9, VAR_0,
   VAR_2,
   FUNC_1(0x13c));
 FUNC_4(VAR_9, VAR_4,
   VAR_6,
   FUNC_3(0x13c));

 FUNC_4(VAR_9, VAR_3,
   VAR_1,
   FUNC_0(0x92));
 FUNC_4(VAR_9, VAR_7,
   VAR_5,
   FUNC_2(0x92));

 VAR_9->ofdm_sensitivity = -98;
 VAR_9->cck_sensitivity = -110;
 VAR_9->last_cca_adj = VAR_8;
}
