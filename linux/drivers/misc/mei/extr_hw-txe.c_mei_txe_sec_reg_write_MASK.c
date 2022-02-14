
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mei_txe_hw {int aliveness; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct mei_txe_hw*,unsigned long,int ) ;

__attribute__((used)) static inline void FUNC_2(struct mei_txe_hw *VAR_0,
    unsigned long VAR_1, u32 VAR_2)
{
 FUNC_0(!VAR_0->aliveness, "sec write: aliveness not asserted\n");
 FUNC_1(VAR_0, VAR_1, VAR_2);
}
