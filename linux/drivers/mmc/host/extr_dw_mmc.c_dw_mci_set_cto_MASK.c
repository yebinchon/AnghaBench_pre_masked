
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
struct dw_mci {int irq_lock; int cto_timer; int pending_events; int bus_hz; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct dw_mci*,int ) ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static inline void FUNC_7(struct dw_mci *VAR_5)
{
 unsigned int VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8;
 unsigned long VAR_9;

 VAR_6 = FUNC_1(VAR_5, VAR_3) & 0xff;
 VAR_7 = (FUNC_1(VAR_5, VAR_0) & 0xff) * 2;
 if (VAR_7 == 0)
  VAR_7 = 1;

 VAR_8 = FUNC_0((u64)VAR_2 * VAR_6 * VAR_7,
      VAR_5->bus_hz);


 VAR_8 += 10;
 FUNC_4(&VAR_5->irq_lock, VAR_9);
 if (!FUNC_6(VAR_1, &VAR_5->pending_events))
  FUNC_2(&VAR_5->cto_timer,
   VAR_4 + FUNC_3(VAR_8) + 1);
 FUNC_5(&VAR_5->irq_lock, VAR_9);
}
