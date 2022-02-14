
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct mt76x02_dev* private; } ;
struct mt76x02_dev {int* aggr_stats; } ;


 int FUNC_0 (struct seq_file*,char*,int) ;
 int FUNC_1 (struct seq_file*,char*) ;

__attribute__((used)) static int
FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 struct mt76x02_dev *VAR_2 = VAR_0->private;
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
  FUNC_1(VAR_0, "Length: ");
  for (VAR_4 = 0; VAR_4 < 8; VAR_4++)
   FUNC_0(VAR_0, "%8d | ", VAR_3 * 8 + VAR_4 + 1);
  FUNC_1(VAR_0, "\n");
  FUNC_1(VAR_0, "Count:  ");
  for (VAR_4 = 0; VAR_4 < 8; VAR_4++)
   FUNC_0(VAR_0, "%8d | ", VAR_2->aggr_stats[VAR_3 * 8 + VAR_4]);
  FUNC_1(VAR_0, "\n");
  FUNC_1(VAR_0, "--------");
  for (VAR_4 = 0; VAR_4 < 8; VAR_4++)
   FUNC_1(VAR_0, "-----------");
  FUNC_1(VAR_0, "\n");
 }

 return 0;
}
