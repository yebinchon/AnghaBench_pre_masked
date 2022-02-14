
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int private; } ;
struct mt7615_dev {int false_cca_cck; int false_cca_ofdm; int cck_sensitivity; int ofdm_sensitivity; } ;


 struct mt7615_dev* FUNC_0 (int ) ;
 int FUNC_1 (struct seq_file*,char*,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 struct mt7615_dev *VAR_2 = FUNC_0(VAR_0->private);

 FUNC_1(VAR_0, "Sensitivity: ofdm=%d cck=%d\n",
     VAR_2->ofdm_sensitivity, VAR_2->cck_sensitivity);
 FUNC_1(VAR_0, "False CCA: ofdm=%d cck=%d\n",
     VAR_2->false_cca_ofdm, VAR_2->false_cca_cck);

 return 0;
}
