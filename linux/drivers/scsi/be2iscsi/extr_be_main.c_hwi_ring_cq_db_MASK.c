
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct beiscsi_hba {scalar_t__ db_va; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (int,scalar_t__) ;

void FUNC_1(struct beiscsi_hba *VAR_7,
      unsigned int VAR_8, unsigned int VAR_9,
      unsigned char VAR_10)
{
 u32 VAR_11 = 0;

 if (VAR_10)
  VAR_11 |= 1 << VAR_4;

 VAR_11 |= VAR_9 << VAR_2;


 VAR_11 |= (VAR_8 & VAR_6);


 VAR_11 |= (((VAR_8 >> VAR_0) &
    VAR_5)
    << VAR_1);

 FUNC_0(VAR_11, VAR_7->db_va + VAR_3);
}
