
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 unsigned long* VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,unsigned long,...) ;
 unsigned int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_2, void *VAR_3)
{
 unsigned long VAR_4 = -1, VAR_5 = 0, VAR_6;
 unsigned long VAR_7[10], VAR_8[10], VAR_9 = 0;
 unsigned int VAR_10;


 for (VAR_10 = 0; VAR_10 < VAR_1; ++VAR_10) {
  unsigned long VAR_11 = VAR_0[VAR_10];
  if (VAR_11 < VAR_4)
   VAR_4 = VAR_11;
  if (VAR_11 > VAR_5)
   VAR_5 = VAR_11;
  VAR_9 += VAR_11;
 }

 for (VAR_10 = 0; VAR_10 < 9; ++VAR_10) {
  VAR_7[VAR_10] = 0;
  VAR_8[VAR_10] = (VAR_5 * (VAR_10 + 1) + 5) / 10;
 }
 VAR_7[9] = 0;
 VAR_8[9] = VAR_5;
 for (VAR_10 = 0; VAR_10 < VAR_1; ++VAR_10) {
  int VAR_12;
  unsigned long VAR_13 = VAR_0[VAR_10];
  for (VAR_12 = 0; VAR_12 < 10; ++VAR_12)
   if (VAR_13 <= VAR_8[VAR_12]) {
    VAR_7[VAR_12] += 1;
    break;
   }
 }
 VAR_6 = VAR_9 / VAR_1;


 FUNC_0(VAR_2, "Total numbers of erases:  %lu\n", VAR_9);
 FUNC_0(VAR_2, "Number of erase blocks:   %u\n", VAR_1);
 FUNC_0(VAR_2, "Average number of erases: %lu\n", VAR_6);
 FUNC_0(VAR_2, "Maximum number of erases: %lu\n", VAR_5);
 FUNC_0(VAR_2, "Minimum number of erases: %lu\n", VAR_4);
 for (VAR_10 = 0; VAR_10 < 10; ++VAR_10) {
  unsigned long VAR_14 = (VAR_10 ? VAR_8[VAR_10 - 1] + 1 : 0);
  if (VAR_14 > VAR_8[VAR_10])
   continue;
  FUNC_0(VAR_2, "Number of ebs with erase counts from %lu to %lu : %lu\n",
   VAR_14,
   VAR_8[VAR_10],
   VAR_7[VAR_10]);
 }

 return 0;
}
