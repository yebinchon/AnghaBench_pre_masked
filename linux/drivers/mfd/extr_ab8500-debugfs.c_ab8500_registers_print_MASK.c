
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct seq_file {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {unsigned int num_ranges; TYPE_1__* range; } ;
struct TYPE_3__ {size_t first; size_t last; } ;


 int FUNC_0 (struct device*,int ,int ,int *) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,char*,size_t,size_t,int ) ;
 scalar_t__ FUNC_3 (struct seq_file*) ;
 int FUNC_4 (struct seq_file*,char*,size_t,size_t,int ) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_1, u32 VAR_2,
      struct seq_file *VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0[VAR_2].num_ranges; VAR_4++) {
  u32 VAR_5;

  for (VAR_5 = VAR_0[VAR_2].range[VAR_4].first;
   VAR_5 <= VAR_0[VAR_2].range[VAR_4].last;
   VAR_5++) {
   u8 VAR_6;
   int VAR_7;

   VAR_7 = FUNC_0(VAR_1,
    (u8)VAR_2, (u8)VAR_5, &VAR_6);
   if (VAR_7 < 0) {
    FUNC_1(VAR_1, "ab->read fail %d\n", VAR_7);
    return VAR_7;
   }

   if (VAR_3) {
    FUNC_4(VAR_3, "  [0x%02X/0x%02X]: 0x%02X\n",
        VAR_2, VAR_5, VAR_6);




    if (FUNC_3(VAR_3))
     return 0;
   } else {
    FUNC_2(VAR_1, " [0x%02X/0x%02X]: 0x%02X\n",
      VAR_2, VAR_5, VAR_6);
   }
  }
 }

 return 0;
}
