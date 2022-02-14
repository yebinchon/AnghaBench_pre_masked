
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum comm_dir { ____Placeholder_comm_dir } comm_dir ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static u32 FUNC_0(enum comm_dir VAR_3, u32 VAR_4)
{
 u32 VAR_5;

 VAR_5 = (VAR_3 == VAR_0) ? VAR_1 : VAR_2;
 if (VAR_4 < 4)
  VAR_5 -= VAR_4 * 4;
 else
  VAR_5 -= (VAR_4 - 4) * 4;

 return VAR_5;
}
