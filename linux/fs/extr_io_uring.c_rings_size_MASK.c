
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct io_rings {int dummy; } ;


 size_t FUNC_0 (size_t,int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 size_t FUNC_1 (int,unsigned int) ;
 scalar_t__ FUNC_2 (size_t,size_t,size_t*) ;
 int VAR_2 ;
 size_t FUNC_3 (struct io_rings*,int ,unsigned int) ;

__attribute__((used)) static unsigned long FUNC_4(unsigned VAR_3, unsigned VAR_4,
    size_t *VAR_5)
{
 struct io_rings *VAR_6;
 size_t VAR_7, VAR_8;

 VAR_7 = FUNC_3(VAR_6, VAR_2, VAR_4);
 if (VAR_7 == VAR_0)
  return VAR_0;







 VAR_8 = FUNC_1(sizeof(u32), VAR_3);
 if (VAR_8 == VAR_0)
  return VAR_0;

 if (FUNC_2(VAR_7, VAR_8, &VAR_7))
  return VAR_0;

 if (VAR_5)
  *VAR_5 = VAR_7;

 return VAR_7;
}
