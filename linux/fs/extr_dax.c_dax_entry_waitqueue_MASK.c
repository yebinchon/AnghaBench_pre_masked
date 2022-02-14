
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_queue_head_t ;
struct xa_state {unsigned long xa_index; scalar_t__ xa; } ;
struct exceptional_entry_key {unsigned long entry_start; scalar_t__ xa; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 unsigned long FUNC_1 (unsigned long,int ) ;
 int * VAR_2 ;

__attribute__((used)) static wait_queue_head_t *FUNC_2(struct xa_state *VAR_3,
  void *VAR_4, struct exceptional_entry_key *VAR_5)
{
 unsigned long VAR_6;
 unsigned long VAR_7 = VAR_3->xa_index;






 if (FUNC_0(VAR_4))
  VAR_7 &= ~VAR_1;
 VAR_5->xa = VAR_3->xa;
 VAR_5->entry_start = VAR_7;

 VAR_6 = FUNC_1((unsigned long)VAR_3->xa ^ VAR_7, VAR_0);
 return VAR_2 + VAR_6;
}
