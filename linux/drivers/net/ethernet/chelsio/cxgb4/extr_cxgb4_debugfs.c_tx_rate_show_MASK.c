
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct seq_file {struct adapter* private; } ;
struct TYPE_3__ {int nchan; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;
struct adapter {TYPE_2__ params; } ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,unsigned long long,unsigned long long,...) ;
 int FUNC_1 (struct seq_file*,char*) ;
 int FUNC_2 (struct adapter*,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_1, void *VAR_2)
{
 u64 VAR_3[VAR_0], VAR_4[VAR_0];
 struct adapter *VAR_5 = VAR_1->private;

 FUNC_2(VAR_5, VAR_3, VAR_4);
 if (VAR_5->params.arch.nchan == VAR_0) {
  FUNC_1(VAR_1, "              channel 0   channel 1   "
    "channel 2   channel 3\n");
  FUNC_0(VAR_1, "NIC B/s:     %10llu  %10llu  %10llu  %10llu\n",
      (unsigned long long)VAR_3[0],
      (unsigned long long)VAR_3[1],
      (unsigned long long)VAR_3[2],
      (unsigned long long)VAR_3[3]);
  FUNC_0(VAR_1, "Offload B/s: %10llu  %10llu  %10llu  %10llu\n",
      (unsigned long long)VAR_4[0],
      (unsigned long long)VAR_4[1],
      (unsigned long long)VAR_4[2],
      (unsigned long long)VAR_4[3]);
 } else {
  FUNC_1(VAR_1, "              channel 0   channel 1\n");
  FUNC_0(VAR_1, "NIC B/s:     %10llu  %10llu\n",
      (unsigned long long)VAR_3[0],
      (unsigned long long)VAR_3[1]);
  FUNC_0(VAR_1, "Offload B/s: %10llu  %10llu\n",
      (unsigned long long)VAR_4[0],
      (unsigned long long)VAR_4[1]);
 }
 return 0;
}
