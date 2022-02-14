
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;


 int FUNC_0 (int) ;
 unsigned long* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,unsigned long,unsigned long const,size_t) ;
 int FUNC_3 (unsigned long*,unsigned long const) ;
 int FUNC_4 (unsigned long const) ;
 int FUNC_5 (unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static enum xp_retval
FUNC_6(unsigned long VAR_3, const unsigned long VAR_4,
     size_t VAR_5)
{
 int VAR_6;
 unsigned long *VAR_7 = FUNC_1(FUNC_5(VAR_3));

 FUNC_0(!FUNC_4(VAR_4));
 FUNC_0(VAR_5 != 8);

 VAR_6 = FUNC_3(VAR_7, VAR_4);
 if (VAR_6 == 0)
  return VAR_2;

 FUNC_2(VAR_0, "gru_read_gpa() failed, dst_gpa=0x%016lx src_gpa=0x%016lx "
  "len=%ld\n", VAR_3, VAR_4, VAR_5);
 return VAR_1;
}
