
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ixgbe_tx_buffer {scalar_t__ time_stamp; int next_to_watch; } ;
struct ixgbe_ring {size_t next_to_clean; int next_to_use; struct ixgbe_tx_buffer* tx_buffer_info; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ixgbe_tx_buffer*,int ) ;
 int FUNC_1 (struct ixgbe_tx_buffer*,int ) ;
 int VAR_1 ;
 int FUNC_2 (char*,int,int ,size_t,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ixgbe_ring *VAR_2, int VAR_3)
{
 struct ixgbe_tx_buffer *VAR_4;

 VAR_4 = &VAR_2->tx_buffer_info[VAR_2->next_to_clean];
 FUNC_2(" %5d %5X %5X %016llX %08X %p %016llX\n",
  VAR_3, VAR_2->next_to_use, VAR_2->next_to_clean,
  (u64)FUNC_0(VAR_4, VAR_0),
  FUNC_1(VAR_4, VAR_1),
  VAR_4->next_to_watch,
  (u64)VAR_4->time_stamp);
}
