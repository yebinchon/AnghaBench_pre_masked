
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qm_fd {int dummy; } ;
struct hp_handler {scalar_t__ addr; int tx_mixer; int rx_mixer; int * frame_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (struct qm_fd const*) ;

__attribute__((used)) static inline int FUNC_3(struct hp_handler *VAR_3,
         const struct qm_fd *VAR_4)
{
 u32 *VAR_5 = VAR_3->frame_ptr;
 u32 VAR_6 = VAR_1;
 int VAR_7;

 if (FUNC_2(VAR_4) != VAR_3->addr) {
  FUNC_1("bad frame address, [%llX != %llX]\n",
   FUNC_2(VAR_4), VAR_3->addr);
  return -VAR_0;
 }
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++, VAR_5++) {
  *VAR_5 ^= VAR_3->rx_mixer;
  if (*VAR_5 != VAR_6) {
   FUNC_1("corrupt frame data");
   return -VAR_0;
  }
  *VAR_5 ^= VAR_3->tx_mixer;
  VAR_6 = FUNC_0(VAR_6);
 }
 return 0;
}
