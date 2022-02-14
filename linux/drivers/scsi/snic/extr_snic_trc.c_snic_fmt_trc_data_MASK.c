
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec64 {int tv_nsec; int tv_sec; } ;
struct snic_trc_data {int * data; int tag; int hno; int fn; int ts; } ;


 int FUNC_0 (int ,struct timespec64*) ;
 scalar_t__ FUNC_1 (char*,int,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct snic_trc_data *VAR_0, char *VAR_1, int VAR_2)
{
 int VAR_3 = 0;
 struct timespec64 VAR_4;

 FUNC_0(VAR_0->ts, &VAR_4);

 VAR_3 += FUNC_1(VAR_1, VAR_2,
   "%llu.%09lu %-25s %3d %4x %16llx %16llx %16llx %16llx %16llx\n",
   VAR_4.tv_sec,
   VAR_4.tv_nsec,
   VAR_0->fn,
   VAR_0->hno,
   VAR_0->tag,
   VAR_0->data[0], VAR_0->data[1], VAR_0->data[2], VAR_0->data[3],
   VAR_0->data[4]);

 return VAR_3;
}
