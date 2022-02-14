
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahc_softc {int flags; scalar_t__ untagged_queue_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct ahc_softc*) ;

__attribute__((used)) static inline void
FUNC_1(struct ahc_softc *VAR_1)
{
 if ((VAR_1->flags & VAR_0) == 0) {
  VAR_1->untagged_queue_lock--;
  if (VAR_1->untagged_queue_lock == 0)
   FUNC_0(VAR_1);
 }
}
