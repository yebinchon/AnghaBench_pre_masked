
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int private; } ;
struct mt7603_dev {int * reset_cause; } ;


 int FUNC_0 (char const* const*) ;







 struct mt7603_dev* FUNC_1 (int ) ;
 int FUNC_2 (struct seq_file*,char*,char const* const,int ) ;

__attribute__((used)) static int
FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 struct mt7603_dev *VAR_2 = FUNC_1(VAR_0->private);
 static const char * const VAR_3[] = {
  [128] = "TX hang",
  [129] = "TX DMA busy stuck",
  [131] = "RX DMA busy stuck",
  [130] = "RX PSE busy stuck",
  [134] = "Beacon stuck",
  [133] = "MCU hang",
  [132] = "PSE reset failed",
 };
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_3); VAR_4++) {
  if (!VAR_3[VAR_4])
   continue;

  FUNC_2(VAR_0, "%20s: %u\n", VAR_3[VAR_4],
      VAR_2->reset_cause[VAR_4]);
 }

 return 0;
}
