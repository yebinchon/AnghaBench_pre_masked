
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43legacy_dmaring {int stopped; int current_slot; int used_slots; int tx; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct b43legacy_dmaring*) ;
 int FUNC_2 (struct b43legacy_dmaring*,int) ;
 int FUNC_3 (struct b43legacy_dmaring*,int ) ;

__attribute__((used)) static inline
int FUNC_4(struct b43legacy_dmaring *VAR_0)
{
 int VAR_1;

 FUNC_0(!VAR_0->tx);
 FUNC_0(VAR_0->stopped);
 FUNC_0(FUNC_1(VAR_0) == 0);

 VAR_1 = FUNC_2(VAR_0, VAR_0->current_slot);
 VAR_0->current_slot = VAR_1;
 VAR_0->used_slots++;

 FUNC_3(VAR_0, VAR_0->used_slots);

 return VAR_1;
}
