
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ene_device {int transmitter_mask; int hw_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ene_device*,int ,int ,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct ene_device *VAR_4)
{
 unsigned long VAR_5;

 FUNC_1(&VAR_4->hw_lock, VAR_5);
 FUNC_0(VAR_4, VAR_2, VAR_3,
     !!(VAR_4->transmitter_mask & 0x01));
 FUNC_0(VAR_4, VAR_0, VAR_1,
     !!(VAR_4->transmitter_mask & 0x02));
 FUNC_2(&VAR_4->hw_lock, VAR_5);
}
