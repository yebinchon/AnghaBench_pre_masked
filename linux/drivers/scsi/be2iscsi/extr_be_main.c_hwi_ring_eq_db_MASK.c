
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct beiscsi_hba {scalar_t__ db_va; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct beiscsi_hba *VAR_9,
      unsigned int VAR_10, unsigned int VAR_11,
      unsigned int VAR_12,
      unsigned char VAR_13, unsigned char VAR_14)
{
 u32 VAR_15 = 0;

 if (VAR_13)
  VAR_15 |= 1 << VAR_6;
 if (VAR_11)
  VAR_15 |= 1 << VAR_0;
 if (VAR_14)
  VAR_15 |= 1 << VAR_1;

 VAR_15 |= VAR_12 << VAR_4;

 VAR_15 |= (VAR_10 & VAR_8);


 VAR_15 |= (((VAR_10 >> VAR_2) &
    VAR_7)
    << VAR_3);

 FUNC_0(VAR_15, VAR_9->db_va + VAR_5);
}
