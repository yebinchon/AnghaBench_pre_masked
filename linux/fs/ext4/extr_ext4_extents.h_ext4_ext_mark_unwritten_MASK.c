
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_extent {int ee_len; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(struct ext4_extent *VAR_1)
{

 FUNC_0((FUNC_2(VAR_1->ee_len) & ~VAR_0) == 0);
 VAR_1->ee_len |= FUNC_1(VAR_0);
}
