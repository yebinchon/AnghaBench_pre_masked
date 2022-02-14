
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (char*,int,int,int) ;
 int FUNC_5 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

void FUNC_6(u64 VAR_13)
{
 u64 VAR_14 = FUNC_0(VAR_8);
 u64 VAR_15;
 u64 VAR_16;
 u32 VAR_17;

 if (VAR_14 == 0)
  return;


 VAR_15 = FUNC_2(VAR_10);
 VAR_15 -= VAR_15/VAR_1;
 VAR_15 += VAR_13;
 FUNC_3(VAR_10, VAR_15);






 VAR_16 = VAR_15/VAR_1;
 if (VAR_16 <= VAR_14)
  return;

 VAR_5 = VAR_16;
 VAR_4 = VAR_14;




 VAR_16 += VAR_16 / 4;
 VAR_17 = (VAR_3 / 100) * VAR_11;
 if (VAR_16 < VAR_17)
  VAR_17 /= (u32)VAR_16;
 else
  VAR_17 = 1;

 FUNC_1(VAR_8, VAR_16);
 FUNC_1(VAR_6, VAR_17);

 VAR_12 = VAR_17 * VAR_0;
 VAR_9 = VAR_2 / VAR_12;

 if (!FUNC_5(&VAR_7)) {
  FUNC_4("perf: interrupt took too long (%lld > %lld), lowering "
        "kernel.perf_event_max_sample_rate to %d\n",
        VAR_5, VAR_4,
        VAR_12);
 }
}
