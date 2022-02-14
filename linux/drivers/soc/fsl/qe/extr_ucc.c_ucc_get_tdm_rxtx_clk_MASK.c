
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum qe_clock { ____Placeholder_qe_clock } qe_clock ;
typedef enum comm_dir { ____Placeholder_comm_dir } comm_dir ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(enum comm_dir VAR_2, u32 VAR_3,
    enum qe_clock VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_4);
 if (VAR_5 > 0)
  return VAR_5;
 if (VAR_2 == VAR_0)
  VAR_5 = FUNC_1(VAR_3, VAR_4);
 if (VAR_2 == VAR_1)
  VAR_5 = FUNC_2(VAR_3, VAR_4);
 return VAR_5;
}
