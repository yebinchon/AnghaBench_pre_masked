
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct NCR5380_hostdata {int dummy; } ;


 int FUNC_0 (struct NCR5380_hostdata*,unsigned int,int,int,unsigned int,int,int,unsigned long) ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static inline int FUNC_2(struct NCR5380_hostdata *VAR_0,
                                        unsigned int VAR_1, u8 VAR_2, u8 VAR_3,
                                        unsigned long VAR_4)
{
 if ((FUNC_1(VAR_1) & VAR_2) == VAR_3)
  return 0;

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3,
      VAR_1, VAR_2, VAR_3, VAR_4);
}
