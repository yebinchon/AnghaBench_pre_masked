
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysv_sb_info {scalar_t__ s_bytesex; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline void FUNC_0(struct sysv_sb_info *VAR_2,
 unsigned char * VAR_3, unsigned char * VAR_4)
{
 if (VAR_2->s_bytesex == VAR_1) {
  VAR_4[0] = VAR_3[0];
  VAR_4[1] = VAR_3[2];
  VAR_4[2] = VAR_3[3];
 } else if (VAR_2->s_bytesex == VAR_0) {
  VAR_4[0] = VAR_3[0];
  VAR_4[1] = VAR_3[1];
  VAR_4[2] = VAR_3[2];
 } else {
  VAR_4[0] = VAR_3[1];
  VAR_4[1] = VAR_3[2];
  VAR_4[2] = VAR_3[3];
 }
}
