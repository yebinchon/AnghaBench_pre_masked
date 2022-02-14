
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int private; } ;
struct mt7615_dev {int dummy; } ;


 struct mt7615_dev* FUNC_0 (int ) ;
 int FUNC_1 (struct mt7615_dev*,int ) ;
 int FUNC_2 (struct seq_file*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 struct mt7615_dev *VAR_2 = FUNC_0(VAR_0->private);
 int VAR_3;


 VAR_3 = FUNC_1(VAR_2, 0);
 FUNC_2(VAR_0, "Temperature: %d\n", VAR_3);

 return 0;
}
