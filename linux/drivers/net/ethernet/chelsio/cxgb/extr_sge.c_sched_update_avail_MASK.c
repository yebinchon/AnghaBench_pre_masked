
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge {struct sched* tx_sched; } ;
struct sched_port {long long drain_bits_per_1024ns; scalar_t__ avail; } ;
struct sched {int last_updated; int max_avail; struct sched_port* p; } ;
typedef int ktime_t ;


 unsigned int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 long long FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (char*,long long) ;

__attribute__((used)) static inline int FUNC_5(struct sge *VAR_1)
{
 struct sched *VAR_2 = VAR_1->tx_sched;
 ktime_t VAR_3 = FUNC_0();
 unsigned int VAR_4;
 long long VAR_5;

 VAR_5 = FUNC_2(FUNC_1(VAR_3, VAR_2->last_updated));

 FUNC_4("sched_update_avail delta=%lld\n", VAR_5);
 if (VAR_5 < 15000)
  return 0;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  struct sched_port *VAR_6 = &VAR_2->p[VAR_4];
  unsigned int VAR_7;

  VAR_7 = (VAR_6->drain_bits_per_1024ns * VAR_5) >> 13;
  VAR_6->avail = FUNC_3(VAR_6->avail + VAR_7, VAR_2->max_avail);
 }

 VAR_2->last_updated = VAR_3;

 return 1;
}
